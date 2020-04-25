#!/usr/bin/python3
import os
import sys
from ctypes import *
from collections import OrderedDict
import json
import copy
import time
import base64
import hashlib
import random
import traceback
from urllib.parse import urlencode, unquote


_so = os.path.join(os.path.dirname(__file__), ".", "libJDsign.so")
libsign = CDLL(_so)

libsign.encrypt_0.argtypes = (c_char_p,)
libsign.encrypt_0.restype = c_int

libsign.encrypt_1.argtypes = (c_char_p,)
libsign.encrypt_1.restype = c_int

libsign.encrypt_2.argtypes = (c_char_p,)
libsign.encrypt_2.restype = c_int


method_map = {
    "100": 0,
    "101": 1,
    "102": 2,
    "110": 1,
    "111": 2,
    "112": 0,
    "120": 2,
    "121": 0,
    "122": 1,
}

def encrypt_data(data, method):
    assert isinstance(data, bytes)
    if method != 2:
        assert len(data) % 8 == 0, len(data) % 8
    buffer = create_string_buffer(len(data) + 8 - len(data)%8)
    buffer.value = data
    if method == 0:
        libsign.encrypt_0(buffer)
    if method == 1:
        libsign.encrypt_1(buffer)
    if method == 2:
        libsign.encrypt_2(buffer)
    return buffer.raw[:len(data)]


def get_sv():
    return random.choice(list(method_map.keys()))


def get_st():
    # 获取签名时间
    return int(time.time() * 1000)


def _build_data(functionId, body, uuid):
    data = OrderedDict()
    data["functionId"] = functionId
    data["body"] = json.dumps(body, ensure_ascii=False, separators=(',', ':'))
    data["uuid"] = str(uuid)
    data["client"] = "android"
    data["clientVersion"] = "8.5.8"
    data["st"] = str(get_st())
    data["sv"] = str(get_sv())
    #return unquote(urlencode(data, safe="{}\""))
    ret = {}
    ret["st"] = data["st"]
    ret["sv"] = data["sv"]
    method = method_map[data.get("sv")]
    #print(method, data.get("sv"))
    if body.get("from"):
        del body["from"]

    ret["_data"] = ("&".join(["=".join(i) for i in data.items()])).encode()

    if method != 2:
        # 这里主要是把要加密的数据长度添加到可以被8整除
        # 只有加密方法0, 1 需要
        # 因为原本方法对于余8的几个字节做了特殊处理且每种剩余长度 (1-7) 都有不同的实现而且算法较长
        # 所以这里直接在加密数据上下手把数据长度补齐到可以整除
        pad = len(ret["_data"]) % 8
        if pad != 0:
            pad = 8 - ((len(ret["_data"])+10) % 8)
            body["from"] = "mainpage"[:pad]
            data["body"] = json.dumps(body, ensure_ascii=False, separators=(',', ':'))
    ret["body"] = body
    ret["_data"] = ("&".join(["=".join(i) for i in data.items()])).encode()
    #print(len(ret["_data"]), ret["_data"])
    if method != 2:
        assert len(ret["_data"]) % 8 == 0
    return ret


def sign_data(functionId, body, uuid):
    data = _build_data(functionId, body, uuid)
    method_id = method_map[data.get("sv")]
    func = getattr(libsign, "encrypt_%s" % method_id)

    encrypted_data = encrypt_data(data["_data"], method_id)
    #print(data["_data"].decode())
    del data["_data"]
    sign = hashlib.md5(base64.b64encode(encrypted_data)).hexdigest()
    data["sign"] = sign
    data["uuid"] = uuid
    return data


def get_request_url(req):
    return "http://api.m.jd.com/client.action?functionId={functionId}"\
                      "&clientVersion=8.5.8"\
                      "&build=72572"\
                      "&client=android"\
                      "&d_brand={brand}"\
                      "&d_model={model}"\
                      "&osVersion={osVersion}"\
                      "&screen={screen}"\
                      "&lang=zh_CN"\
                      "&area={area}"\
                      "&networkType=wifi"\
                      "&wifiBssid=unknown"\
                      "&uuid={uuid}"\
                      "&st={st}"\
                      "&sign={sign}"\
                      "&sv={sv}".format(**req)

def sign_request(req):
    req = copy.deepcopy(req)
    req.setdefault("brand", "nubia")
    req.setdefault("model", "NX549J")
    req.setdefault("osVersion", "6.0.1")
    req.setdefault("screen", "1920*1080")

    ret = {}

    sign_info = sign_data(req["functionId"], req["body"], req["uuid"])
    ret["data"] = {"body": json.dumps(sign_info["body"], ensure_ascii=False, separators=(",", ":"))}
    req.update(sign_info)
    url = get_request_url(req)
    ret["url"] = url
    ret["method"] = "POST"
    ret["headers"] = {"user-agent": "okhttp/3.12.1",
                      "content-type": "application/x-www-form-urlencoded; charset=UTF-8"}
    return ret


def test(n=10):
    import requests
    request_example = {
        "body": {   "abTest800":True,
                    "brand":"nubia",
                    "eventId":"Searchlist_Productid",
                    "fromType":0,
                    "isDesCbc":True,
                    "latitude":"0.0",
                    "lego":True,
                    "longitude":"0.0",
                    "model":"NX549J",
                    "pluginVersion":85080,
                    "plusClickCount":0,
                    "provinceId":"12",
                    "skuId":"100002657042",
                    "source_type":"search",
                    "source_value":"u",
                    "uAddrId":"0"},
        "uuid": "-dcf0908bec91",
        "area": "12_904_3377_0",
        "functionId": "wareBusiness",
        #"brand": "",
        #"model": "",
        #"screen": "",
        #"osVersion": "",
    }

    session = requests.Session()
    while n >= 0:
        req = sign_request(request_example)
        f = session.request(**req)
        print(len(f.content), req)
        n -=1
        time.sleep(1)

if __name__ == "__main__":
    test()