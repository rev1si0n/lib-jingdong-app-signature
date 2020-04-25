#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint32_t   undefined;
typedef uint8_t    byte;
typedef uint64_t   x64_compatiable_register_type;


void FUN_000218d0(byte* out, int index_0, byte* in)
{
    x64_compatiable_register_type r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12;
    r0 = r1 = r2 = r3 = r4 = r5 = r6 = r7 = r8 = r9 = r10 = r11 = r12 = 0x0;
    r1 = (x64_compatiable_register_type)out;
    r3 = (x64_compatiable_register_type)in;

    do {
        r4 = *(byte*)((byte*)r3 + 0x0);

        r0 = r1 + (r2 << 1);
        r6 = *(byte*)((byte*)r3 + 0x1);
        r3 += 0x10;
        r5 = *(byte*)((byte*)r3 + -0xe);
        if (r6 != 0x0) {
            r6 = 0x40;
        }
        if (r4 != 0x0) {
            r12 = 0xFFFFFF80;
        } else {
            r12 = 0x0;
        }

        r4 = *(byte*)((byte*)r3 + -0xd);
        if (r5 != 0x0) {
            r5 = 0x20;
        }

        r7 = *(byte*)((byte*)r3 + -0xc);
        r6 = r6 | r12;

        if (r4 != 0x0) {
            r4 = 0x10;
        }

        r6 = r6 | r5;

        r5 = *(byte*)((byte*)r3 + -0xb);

        if (r7 != 0x0) {
            r7 = 0x8;
        }

        r6 = r6 | r4;

        r4 = *(byte*)((byte*)r3 + -0xa);
        if (r5 != 0x0) {
            r5 = 0x4;
        }

        r6 = r6 | r7;
        r7 = *(byte*)((byte*)r3 + -0x8);
        if (r4 != 0x0) {
            r4 = 0x2;
        }

        r6 = r6 | r5;
        r6 = r6 | r4;
        r5 = *(byte*)((byte*)r3 + -0x9);
        r4 = *(byte*)((byte*)r3 + -0x7);
        if (r5 != 0x0) {
            r6 = r6 | 0x1;
        }
        r5 = *(byte*)((byte*)r3 + -0x6);
        if (r4 != 0x0) {
            r4 = 0x40;
        }
        if (r7 != 0x0) {
            r8 = 0xFFFFFF80;
        } else {
            r8 = 0x0;
        }

        r7 = *(byte*)((byte*)r3 + -0x5);
        if (r5 != 0x0) {
            r5 = 0x20;
        }
        r12 = *(byte*)((byte*)r3 + -0x4);
        r4 = r4 | r8;

        if (r7 != 0x0) {
            r7 = 0x10;
        }

        r4 = r4 | r5;
        r5 = *(byte*)((byte*)r3 + -0x3);
        r4 = r4 | r7;

        if (r12 != 0x0) {
            r12 = 0x8;
        }

        r7 = *(byte*)((byte*)r3 + -0x2);
        if (r5 != 0x0) {
            r5 = 0x4;
        }

        r4 = r4 | r12;
        *((byte*)r1 + (r2 << 1)) = (byte)r6;
        r4 = r4 | r5;
        if (r7 != 0x0) {
            r7 = 0x2;
        }
        r5 = *(byte*)((byte*)r3 + -0x1);
        r4 = r4 | r7;
        r2++;

        if (r5 != 0x0) {
            r4 = r4 | 0x1;
        }
        *((byte*)r0 + 1) = (byte)r4;
        //printf("%02X-%02X ", (byte)r6, (byte)r4);
        //printf("R0: %08X, R1: %08X, R2: %08X, R3: %08X, R4: %08X, R5: %08X, R6: %08X, R7: %08X, R8: %08X, R9: %08X, R10: %08X, R11: %08X, R12: %08X\n", r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12);
    } while (r2 != 4);
    //printf("\n");
}

void FUN_00020ea4(byte *pkey,int _0x10or20, byte *pdata)
{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  byte bVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  byte bVar38;
  undefined uVar39;
  undefined uVar40;
  byte bVar41;
  undefined uVar42;
  byte bVar43;
  int iVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte *buffer;
  byte bVar53;
  byte *local_c4;
  byte local_60 [64 + 4];

  local_60[7] = *pdata;
  local_60[15] = pdata[1];
  local_60[0] = local_60[7] & 0x80;
  bVar49 = pdata[2];
  local_60[1] = local_60[7] & 0x40;
  local_60 [31] = pdata[3];
  local_60[2] = local_60[7] & 0x20;
  local_60[3] = local_60[7] & 0x10;
  local_60[4] = local_60[7] & 8;
  local_60[5] = local_60[7] & 4;
  local_60[6] = local_60[7] & 2;
  local_60[7] = local_60[7] & 1;
  local_60[8] = local_60[15] & 0x80;
  local_60[9] = local_60[15] & 0x40;
  local_60[10] = local_60[15] & 0x20;
  local_60[11] = local_60[15] & 0x10;
  local_60[12] = local_60[15] & 8;
  local_60[13] = local_60[15] & 4;
  local_60[14] = local_60[15] & 2;
  local_60[15] = local_60[15] & 1;
  local_60[16] = bVar49 & 0x80;
  local_60[17] = bVar49 & 0x40;
  local_60[18] = bVar49 & 0x20;
  local_60 [19] = bVar49 & 0x10;
  local_60 [20] = bVar49 & 8;
  local_60 [21] = bVar49 & 4;
  local_60 [23] = bVar49 & 1;
  local_60 [24] = local_60 [31] & 0x80;
  local_60 [22] = bVar49 & 2;
  local_60 [25] = local_60 [31] & 0x40;
  local_60 [27] = local_60 [31] & 0x10;
  local_60 [26] = local_60 [31] & 0x20;
  local_60 [30] = local_60 [31] & 2;
  local_60 [29] = local_60 [31] & 4;
  local_60 [28] = local_60 [31] & 8;
  local_60 [31] = local_60 [31] & 1;
  bVar49 = pdata[4];
  local_60 [47] = pdata[5];
  local_60 [55] = pdata[6];
  local_60 [32] = bVar49 & 0x80;
  local_60 [63] = pdata[7];
  local_60 [33] = bVar49 & 0x40;
  local_60 [34] = bVar49 & 0x20;
  local_60 [35] = bVar49 & 0x10;
  local_60 [36] = bVar49 & 8;
  local_60 [39] = bVar49 & 1;
  local_60 [40] = local_60 [47] & 0x80;
  local_60 [43] = local_60 [47] & 0x10;
  local_60 [37] = bVar49 & 4;
  local_60 [38] = bVar49 & 2;
  local_60 [44] = local_60 [47] & 8;
  local_60 [41] = local_60 [47] & 0x40;
  local_60 [45] = local_60 [47] & 4;
  local_60 [42] = local_60 [47] & 0x20;
  local_60 [46] = local_60 [47] & 2;
  local_60 [47] = local_60 [47] & 1;
  local_60 [49] = local_60 [55] & 0x40;
  local_60 [48] = local_60 [55] & 0x80;
  local_60 [51] = local_60 [55] & 0x10;
  local_60 [50] = local_60 [55] & 0x20;
  local_60 [53] = local_60 [55] & 4;
  local_60 [52] = local_60 [55] & 8;
  local_60 [54] = local_60 [55] & 2;
  local_60 [55] = local_60 [55] & 1;
  local_60 [56] = local_60 [63] & 0x80;
  local_60 [57] = local_60 [63] & 0x40;
  local_60 [58] = local_60 [63] & 0x20;
  local_60 [59] = local_60 [63] & 0x10;
  local_60 [62] = local_60 [63] & 2;
  local_60 [60] = local_60 [63] & 8;
  local_60 [61] = local_60 [63] & 4;
  local_60 [63] = local_60 [63] & 1;
  if (_0x10or20 != 0x0) {
    local_c4 = pkey;
    do {
      buffer = local_c4 + 1;
      bVar49 = *local_c4;
      bVar51 = local_60 [30];
      bVar3 = local_60[6];
      bVar46 = local_60 [27];
      bVar50 = local_60 [29];
      bVar48 = local_60[17];
      bVar7 = local_60[9];
      bVar43 = local_60 [20];
      bVar18 = local_60 [36];
      bVar8 = local_60 [23];
      bVar53 = local_60[5];
      bVar2 = local_60 [53];
      bVar15 = local_60 [54];
      bVar47 = local_60 [24];
      bVar6 = local_60 [61];
      bVar16 = local_60[7];
      bVar45 = local_60[16];
      bVar5 = local_60 [49];
      bVar4 = local_60[4];
      bVar32 = local_60 [55];
      bVar38 = local_60 [28];
      bVar22 = local_60 [19];
      if ((bVar49 & 0x40) == 0) {
        bVar51 = local_60 [57];
        bVar3 = local_60 [53];
        bVar46 = local_60 [20];
        bVar50 = local_60[18];
        bVar48 = local_60 [30];
        bVar7 = local_60 [39];
        bVar43 = local_60 [33];
        bVar18 = local_60[17];
        local_60 [57] = local_60 [36];
        bVar8 = local_60 [45];
        bVar53 = local_60 [54];
        bVar2 = local_60[6];
        local_60[18] = local_60[9];
        bVar15 = local_60[5];
        bVar47 = local_60 [23];
        local_60 [45] = local_60 [24];
        local_60 [39] = local_60 [29];
        local_60 [33] = local_60 [27];
        bVar6 = local_60[1];
        bVar16 = local_60 [52];
        bVar45 = local_60 [31];
        local_60 [31] = local_60[16];
        bVar5 = local_60[13];
        local_60[1] = local_60 [61];
        bVar4 = local_60 [55];
        bVar32 = local_60[4];
        bVar38 = local_60 [19];
        bVar22 = local_60 [28];
        local_60[13] = local_60 [49];
        local_60 [52] = local_60[7];
      }
      local_60 [19] = bVar38;
      local_60 [55] = bVar5;
      local_60 [54] = local_60 [39];
      local_60 [53] = bVar15;
      local_60 [39] = bVar8;
      local_60 [27] = local_60 [57];
      local_60 [24] = bVar7;
      local_60[5] = bVar3;
      bVar17 = local_60[12];
      bVar19 = local_60[0];
      bVar20 = local_60 [60];
      bVar7 = local_60[3];
      bVar8 = local_60 [48];
      uVar30 = bVar16;
      bVar21 = local_60[2];
      bVar23 = local_60[11];
      bVar15 = local_60 [32];
      bVar3 = bVar32;
      bVar41 = local_60 [50];
      bVar5 = bVar22;
      bVar9 = local_60 [56];
      bVar38 = local_60[8];
      bVar10 = local_60 [44];
      uVar42 = bVar4;
      if ((bVar49 & 0x80) != 0x0) {
        bVar17 = local_60 [51];
        bVar19 = local_60 [48];
        bVar20 = local_60[15];
        local_60[15] = local_60[3];
        bVar7 = local_60[12];
        bVar8 = local_60 [60];
        local_60 [51] = local_60[0];
        uVar30 = local_60[1];
        bVar21 = bVar6;
        bVar23 = bVar16;
        bVar15 = local_60 [31];
        local_60[1] = local_60 [44];
        bVar3 = local_60[8];
        bVar41 = bVar45;
        bVar5 = local_60 [35];
        local_60 [31] = local_60 [32];
        bVar9 = local_60[2];
        bVar38 = local_60 [50];
        bVar10 = local_60[11];
        uVar42 = local_60[13];
        bVar6 = local_60 [56];
        local_60[13] = local_60[14];
        local_60[14] = bVar4;
        bVar45 = bVar32;
        local_60 [35] = bVar22;
      }
      local_60 [44] = bVar6;
      local_60[0] = local_60 [51];
      bVar32 = local_60 [63];
      uVar33 = bVar17;
      bVar6 = bVar20;
      uVar34 = local_60[15];
      uVar35 = bVar19;
      uVar36 = bVar21;
      uVar37 = bVar23;
      uVar31 = bVar10;
      uVar24 = local_60 [31];
      local_60[8] = local_60[13];
      bVar4 = local_60 [47];
      bVar22 = local_60 [59];
      uVar39 = local_60[14];
      uVar40 = bVar45;
      bVar16 = local_60 [62];
      if ((bVar49 & 0x10) == 0) {
        bVar32 = bVar8;
        uVar33 = bVar7;
        bVar6 = bVar17;
        uVar34 = bVar20;
        uVar35 = local_60[15];
        bVar8 = bVar19;
        bVar7 = local_60 [63];
        uVar36 = local_60 [35];
        uVar37 = local_60 [52];
        uVar31 = bVar38;
        bVar38 = bVar3;
        local_60 [35] = local_60 [62];
        uVar24 = local_60 [55];
        local_60[8] = local_60 [31];
        local_60 [55] = local_60[13];
        bVar4 = local_60 [44];
        local_60 [44] = local_60 [47];
        bVar22 = bVar10;
        uVar39 = local_60 [19];
        uVar40 = uVar30;
        local_60 [52] = bVar45;
        bVar3 = local_60 [59];
        local_60 [19] = local_60[14];
        bVar16 = bVar21;
        uVar30 = bVar23;
      }
      local_60 [62] = uVar24;
      bVar19 = bVar2;
      uVar24 = bVar18;
      uVar25 = bVar46;
      bVar45 = local_60[10];
      uVar26 = bVar51;
      bVar13 = local_60 [45];
      uVar27 = local_60[18];
      bVar20 = local_60 [34];
      bVar17 = local_60 [46];
      bVar10 = local_60 [43];
      bVar11 = local_60 [58];
      bVar12 = local_60 [40];
      uVar28 = bVar9;
      local_60 [50] = local_60[1];
      local_60 [49] = local_60 [35];
      uVar29 = uVar37;
      bVar21 = bVar22;
      bVar23 = uVar39;
      if ((bVar49 & 0x20) == 0) {
        bVar19 = local_60 [40];
        uVar24 = bVar48;
        uVar25 = bVar2;
        bVar45 = local_60 [33];
        uVar26 = local_60 [54];
        bVar13 = local_60 [58];
        uVar27 = bVar18;
        local_60 [33] = local_60[10];
        bVar20 = local_60[18];
        bVar17 = bVar51;
        bVar10 = bVar47;
        local_60 [54] = bVar50;
        bVar47 = bVar53;
        bVar11 = local_60 [45];
        bVar48 = local_60 [34];
        bVar53 = local_60 [43];
        bVar50 = local_60 [46];
        bVar12 = bVar46;
        uVar28 = bVar16;
        local_60 [50] = uVar30;
        local_60 [49] = uVar31;
        uVar29 = local_60[8];
        bVar16 = bVar9;
        bVar21 = bVar4;
        bVar4 = bVar22;
        local_60[8] = uVar37;
        bVar23 = bVar5;
        bVar5 = uVar39;
        uVar30 = local_60[1];
        uVar31 = local_60 [35];
      }
      local_60 [40] = bVar50;
      local_60 [43] = bVar48;
      local_60[10] = bVar13;
      bVar46 = bVar12;
      bVar50 = uVar24;
      local_60 [46] = uVar25;
      bVar48 = uVar26;
      local_60[17] = bVar11;
      local_60 [23] = uVar27;
      local_60 [58] = local_60 [33];
      bVar18 = bVar10;
      local_60 [34] = bVar47;
      local_60[14] = uVar28;
      local_60 [28] = uVar30;
      bVar51 = uVar31;
      local_60[2] = uVar29;
      bVar2 = bVar4;
      bVar22 = bVar5;
      if ((bVar49 & 2) == 0) {
        bVar46 = local_60 [43];
        bVar50 = bVar19;
        local_60 [46] = bVar45;
        bVar45 = local_60 [54];
        bVar48 = bVar20;
        local_60[17] = uVar24;
        local_60 [23] = bVar17;
        local_60 [58] = uVar26;
        bVar17 = local_60[10];
        bVar18 = local_60 [40];
        local_60 [40] = bVar10;
        local_60 [54] = bVar53;
        local_60 [34] = bVar11;
        local_60[10] = uVar27;
        bVar19 = bVar47;
        local_60 [43] = bVar12;
        bVar53 = uVar25;
        bVar20 = local_60 [33];
        local_60[14] = bVar16;
        local_60 [28] = local_60 [50];
        bVar51 = local_60 [49];
        local_60 [49] = uVar31;
        local_60[2] = local_60[8];
        bVar16 = uVar28;
        bVar2 = bVar21;
        bVar21 = bVar4;
        bVar22 = bVar23;
        bVar23 = bVar5;
        local_60[8] = uVar29;
        local_60 [50] = uVar30;
      }
      local_60 [51] = uVar33;
      bVar4 = uVar35;
      bVar5 = uVar34;
      bVar9 = uVar36;
      bVar10 = bVar2;
      bVar11 = bVar21;
      bVar12 = bVar41;
      bVar13 = local_60 [52];
      local_60 [32] = bVar23;
      bVar47 = uVar42;
      bVar14 = uVar40;
      if ((bVar49 & 8) == 0) {
        local_60 [51] = bVar7;
        bVar4 = local_60[0];
        local_60[0] = uVar33;
        bVar5 = bVar6;
        bVar6 = bVar8;
        bVar7 = uVar34;
        bVar8 = uVar35;
        bVar9 = bVar16;
        bVar10 = local_60 [28];
        bVar11 = bVar15;
        bVar12 = local_60 [49];
        local_60 [49] = local_60[8];
        bVar13 = bVar41;
        local_60 [32] = bVar51;
        bVar47 = local_60[2];
        bVar14 = bVar3;
        bVar15 = local_60 [62];
        bVar51 = local_60 [19];
        local_60 [62] = bVar21;
        local_60 [19] = bVar23;
        local_60[2] = uVar42;
        local_60[8] = local_60 [52];
        local_60 [28] = uVar40;
        bVar3 = bVar2;
        bVar16 = uVar36;
      }
      local_60 [30] = bVar46;
      local_60[6] = bVar50;
      local_60 [45] = bVar53;
      local_60 [29] = bVar45;
      local_60[9] = bVar20;
      local_60 [20] = bVar48;
      local_60 [36] = bVar43;
      local_60[18] = bVar18;
      local_60 [57] = bVar17;
      local_60 [33] = bVar19;
      local_60 [56] = bVar9;
      local_60[16] = bVar10;
      local_60[4] = bVar11;
      local_60 [35] = bVar38;
      local_60[1] = bVar12;
      bVar2 = bVar15;
      if ((bVar49 & 4) == 0) {
        local_60 [30] = local_60 [53];
        local_60[6] = local_60 [27];
        local_60 [45] = local_60[17];
        local_60 [29] = local_60 [54];
        local_60[17] = bVar50;
        local_60[9] = bVar46;
        local_60 [20] = local_60 [39];
        local_60 [36] = local_60 [23];
        local_60 [27] = bVar53;
        local_60 [23] = bVar43;
        local_60[18] = local_60[5];
        local_60 [57] = bVar18;
        local_60 [53] = bVar20;
        local_60[5] = bVar17;
        local_60 [54] = local_60 [24];
        local_60 [33] = bVar45;
        local_60 [39] = bVar48;
        local_60 [24] = bVar19;
        local_60 [56] = local_60 [44];
        local_60[16] = bVar51;
        local_60[4] = local_60 [49];
        local_60 [49] = bVar11;
        local_60 [35] = bVar3;
        local_60[1] = bVar47;
        bVar2 = local_60 [55];
        bVar3 = bVar38;
        local_60 [55] = bVar15;
        bVar51 = bVar10;
        local_60 [44] = bVar9;
        bVar47 = bVar12;
      }
      local_60[15] = bVar6;
      local_60[3] = bVar5;
      local_60 [48] = bVar4;
      local_60 [60] = bVar8;
      local_60 [63] = bVar32;
      local_60[12] = bVar7;
      local_60 [59] = bVar13;
      local_60[7] = bVar14;
      local_60 [31] = bVar47;
      local_60 [52] = bVar16;
      local_60 [61] = bVar2;
      local_60[11] = bVar3;
      local_60[13] = bVar51;
      local_60 [47] = bVar22;
      if ((bVar49 & 1) == 0) {
        local_60[15] = local_60 [51];
        local_60[3] = bVar6;
        local_60 [48] = bVar5;
        local_60 [60] = bVar4;
        local_60 [63] = bVar8;
        local_60[12] = bVar32;
        local_60 [51] = bVar7;
        local_60 [59] = local_60 [44];
        local_60[7] = bVar13;
        local_60 [44] = local_60 [49];
        local_60 [31] = local_60 [35];
        local_60 [52] = bVar47;
        local_60 [35] = bVar16;
        local_60 [61] = local_60[14];
        local_60[14] = bVar2;
        local_60[11] = local_60 [55];
        local_60 [55] = local_60 [28];
        local_60 [28] = local_60 [50];
        local_60 [50] = bVar3;
        local_60 [49] = bVar14;
        local_60[13] = local_60 [62];
        local_60 [62] = bVar51;
        local_60 [47] = local_60 [19];
        local_60 [19] = local_60 [56];
        local_60 [56] = bVar22;
      }
      local_c4 = buffer;
    } while (buffer != pkey + _0x10or20);
  }
  iVar44 = 0;
  buffer = local_60;

  /*
  for (int index = 0; index < 16*4; index++) {
  printf("%02X ", (uint32_t)buffer[index]);
  }
  printf("\n");
  */
  FUN_000218d0(pdata, iVar44, buffer);
}

int
encrypt_0(byte* data) {
  byte *key = "44e715a6e322ccb7d028f7a42fa55040";
  int datalen = strlen(data);
  int blocks = datalen >>3, index = 0;
  int num = 0x20;
  //printf("datalen: %d, blocks: %d\n", datalen, blocks);
  while (index < blocks) {
    FUN_00020ea4(key, num, data + index++*8);
  }
  return datalen;
}

int
encrypt_1(byte* data) {
  byte *key = "7d0069660c9b5d32074facf37c3738a1";
  int datalen = strlen(data);
  int blocks = datalen >>3, index = 0;
  //printf("datalen: %d, blocks: %d\n", datalen, blocks);
  int num = 0x10;
  while (index < blocks) {
    FUN_00020ea4(key, num, data + index++*8);
  }
  return datalen;
}

int
encrypt_2(byte* data) {
    char *key = "80306f4370b39fd5630ad0529f77adb6";
    int datalen = strlen(data);
    unsigned char local_60[16] = {0x37, 0x92, 0x44, 0x68, 0xA5, 0x3D, 0xCC, 0x7F, 0xBB, 0x0F, 0xD9, 0x88, 0xEE, 0x9A, 0xE9, 0x5A};

    uint32_t uVar3 = 0, uVar6=0, uVar4=0;
    unsigned char bVar9 = 0;
    do {
    uVar6 = uVar3 & 0xf;
    uVar4 = uVar3 & 7;
    uVar3 = uVar3 + 1;
    bVar9 = local_60[uVar6];

    bVar9 = bVar9 ^ ((bVar9 ^ *data ^ key[uVar4]) + bVar9);
    *data = bVar9 ^ key[uVar4];
    data++;
    } while (uVar3 != datalen);
    return datalen;
}

/*
int main() {
    byte* data = malloc(4096);
    strcpy(data, "functionId=wareBusiness&body={\"abTest800\":true,\"brand\":\"nubia\",\"eventId\":\"Searchlist_Productid\",\"fromType\":0,\"isDesCbc\":true,\"latitude\":\"0.0\",\"lego\":true,\"longitude\":\"0.0\",\"model\":\"NX549J\",\"pluginVersion\":85080,\"plusClickCount\":0,\"provinceId\":\"12\",\"skuId\":\"5869750\",\"source_type\":\"search\",\"source_value\":\"u\",\"uAddrId\":\"0\"}&uuid=uuid&client=android&clientVersion=8.5.8&st=1587785588140&sv=121");
    int datalen = strlen(data);

    encrypt_0(data);
    for (int index = 0; index < datalen; index++) {
    if (index !=0 && index % 16 == 0) putchar(' ');
    if (index !=0 && index % 32 == 0) putchar('\n');
    printf("%02X ", (uint32_t)data[index]);
    }
    printf("\n\n");

// 3B A0 D6 EC 2C FF 6B 6C 0D E2 6C E0 69 72 69 F0  6D 41 E0 E4 ED EE 6A 7D 4E E8 7C 64 A4 6D C7 6C
// 2A 90 3C E4 25 27 41 65 26 0A 5C FC A4 7E 60 44  6A 40 40 EC E5 26 62 65 6E C0 42 EC 20 B4 61 EC
// 69 80 54 E4 E5 DF 60 74 17 63 62 E4 C1 64 4B C4  1D 2A FA E4 67 C4 E6 AD 3C 80 CA F4 61 E4 46 6C
// 47 B2 62 FC E4 46 4D 65 09 72 4A 2C AC A0 EC 54  18 D2 42 C4 23 EE 63 68 29 63 44 6C E5 B4 C5 64
// 18 1B 4C F4 64 EC 63 6C 32 20 CE 34 2A 21 42 44  09 B0 F6 34 AB E6 C6 7D 5D E8 42 F4 66 F1 CE 54
// 28 D1 64 64 62 A5 43 6C 63 20 C2 3C 62 F9 4A C4  49 D8 CA 3C 22 C3 80 75 31 69 C2 24 0C A6 44 4D
// 49 B1 50 F4 EF EE E2 3D 08 98 76 24 AA 37 4C FD  21 31 54 B4 28 73 E8 C5 0F F8 C0 EC 2B 5E CF 70
// 6A B0 5A 34 20 A3 42 E4 5B EB 46 E0 A6 7C CD 6C  1C 42 F2 24 A8 A2 42 44 36 10 4A F4 E9 64 67 2C
// 26 D2 78 34 68 3A 4C 4D 07 A8 6A F4 26 6A E7 45  78 9A 1C F4 A0 EC 63 7C 23 40 54 EC A3 6C 61 6C
// 45 62 F2 E4 E5 E6 CB C4 7E 91 50 F4 E5 EC 62 F0  63 A0 E2 34 62 68 08 6C 28 50 60 64 CB A5 42 64
// 37 98 DE E4 64 79 C1 6C 39 E1 40 6C 6F FC C0 7C  4D FA 4C B4 E0 F5 61 74 0F 28 C4 BC 62 E7 C8 FC
// 3B E2 F6 EC 42 EC E9 E4 6E CA D0 3C 6C A3 60 CD  2E 93 FC 24 2D 31 EB 75 60 93 7C 24 21 38 44 CD
// 26 73 76 3D 31 32 31 00

    strcpy(data,"functionId=wareBusiness&body={\"abTest800\":true,\"brand\":\"nubia\",\"eventId\":\"Searchlist_Productid\",\"fromType\":0,\"isDesCbc\":true,\"latitude\":\"0.0\",\"lego\":true,\"longitude\":\"0.0\",\"model\":\"NX549J\",\"pluginVersion\":85080,\"plusClickCount\":0,\"provinceId\":\"12\",\"skuId\":\"5869750\",\"source_type\":\"search\",\"source_value\":\"u\",\"uAddrId\":\"0\"}&uuid=uuid&client=android&clientVersion=8.5.8&st=1587795668660&sv=122");
    datalen = strlen(data);
    encrypt_1(data);
    for (int index = 0; index < datalen; index++) {
    if (index !=0 && index % 16 == 0) putchar(' ');
    if (index !=0 && index % 32 == 0) putchar('\n');
    printf("%02X ", (uint32_t)data[index]);
    }
    printf("\n\n");

// 3C 12 F6 F2 5C FF 24 B7 6E 26 45 F4 19 76 64 52  34 22 71 EC 5D EE CC FE BA 50 F5 FE 44 6C 3C 62
// 2E 10 D5 E2 45 22 25 2E 66 00 D4 6A 64 7F 14 74  24 20 70 EE 45 27 0C 3E 38 04 52 E6 40 B7 2C 76
// 2C 32 D4 E8 45 DE 4C 36 60 26 73 7E 51 66 A0 61  F2 66 B3 F0 47 C6 14 FB 3A 60 72 E0 61 E6 04 E7
// 6C 62 53 FA 74 47 2D 68 E2 42 52 3C 5C A5 45 12  7C 00 62 C4 43 EE 25 33 E0 62 54 FC 45 B5 A4 26
// 72 20 74 E0 64 EE B5 33 22 10 76 32 6A 24 04 85  BC 42 F7 B8 6B E4 45 AA A8 72 72 74 76 F6 5C 43
// 38 30 75 E4 42 A4 A5 26 20 36 72 32 72 FD 0C 84  8E 12 52 A4 62 C5 5D 8A 34 42 52 34 4C A4 90 AD
// BC 22 B0 F8 6F EE CD 3A 3C 54 D7 A8 5A 34 55 2A  A4 16 D4 30 78 76 85 1C AC 42 60 F6 5B 5F 75 E2
// 2E 14 F2 B2 60 A4 0D 06 F8 42 56 FE 16 7E BC 23  64 00 F3 2C 48 A4 04 C3 32 60 32 EA 69 66 25 75
// 7E 60 D1 26 78 3C 05 4C AE 42 73 72 66 6E 34 58  7A 00 F4 E8 60 EA 7D 37 30 02 D4 EE 43 6F 24 34
// E4 26 F3 7C 55 E6 2C E0 28 24 E0 EA 65 EE CD 77  18 22 53 B2 72 6C 0C 84 20 30 71 EC 4B A4 01 26
// BA 32 D6 E2 44 7E 35 C5 B8 22 50 F4 4F FD C4 27  6A 32 54 BC 60 F6 7D 72 B4 36 54 B2 72 E7 54 E2
// E8 26 D7 F6 52 EF 20 B7 7C 34 D0 26 6C A5 1C DE  EA 10 F5 A2 5D 34 E5 DE 7E 64 F7 24 60 34 C5 0C
// 26 73 76 3D 31 32 32

// 3C 12 F6 F2 5C FF 24 B7 6E 26 45 F4 19 76 64 52  34 22 71 EC 5D EE CC FE BA 50 F5 FE 44 6C 3C 62
// 2E 10 D5 E2 45 22 25 2E 66 00 D4 6A 64 7F 14 74  24 20 70 EE 45 27 0C 3E 38 04 52 E6 40 B7 2C 76
// 2C 32 D4 E8 45 DE 4C 36 60 26 73 7E 51 66 A0 61  F2 66 B3 F0 47 C6 14 FB 3A 60 72 E0 61 E6 04 E7
// 6C 62 53 FA 74 47 2D 68 E2 42 52 3C 5C A5 45 12  7C 00 62 C4 43 EE 25 33 E0 62 54 FC 45 B5 A4 26
// 72 20 74 E0 64 EE B5 33 22 10 76 32 6A 24 04 85  BC 42 F7 B8 6B E4 45 AA A8 72 72 74 76 F6 5C 43
// 38 30 75 E4 42 A4 A5 26 20 36 72 32 72 FD 0C 84  8E 12 52 A4 62 C5 5D 8A 34 42 52 34 4C A4 90 AD
// BC 22 B0 F8 6F EE CD 3A 3C 54 D7 A8 5A 34 55 2A  A4 16 D4 30 78 76 85 1C AC 42 60 F6 5B 5F 75 E2
// 2E 14 F2 B2 60 A4 0D 06 F8 42 56 FE 16 7E BC 23  64 00 F3 2C 48 A4 04 C3 32 60 32 EA 69 66 25 75
// 7E 60 D1 26 78 3C 05 4C AE 42 73 72 66 6E 34 58  7A 00 F4 E8 60 EA 7D 37 30 02 D4 EE 43 6F 24 34
// E4 26 F3 7C 55 E6 2C E0 28 24 E0 EA 65 EE CD 77  18 22 53 B2 72 6C 0C 84 20 30 71 EC 4B A4 01 26
// BA 32 D6 E2 44 7E 35 C5 B8 22 50 F4 4F FD C4 27  6A 32 54 BC 60 F6 7D 72 B4 36 54 B2 72 E7 54 E2
// E8 26 D7 F6 52 EF 20 B7 7C 34 D0 26 6C A5 1C DE  EA 10 F5 A2 5D 34 E5 DE 7E 64 F7 24 60 34 C5 0C
// 56 7A 66 C3 98 83 11


    strcpy(data, "functionId=wareBusiness&body={\"abTest800\":true,\"brand\":\"nubia\",\"eventId\":\"Searchlist_Productid\",\"fromType\":0,\"isDesCbc\":true,\"latitude\":\"0.0\",\"lego\":true,\"longitude\":\"0.0\",\"model\":\"NX549J\",\"pluginVersion\":85080,\"plusClickCount\":0,\"provinceId\":\"12\",\"skuId\":\"5869750\",\"source_type\":\"search\",\"source_value\":\"u\",\"uAddrId\":\"0\"}&uuid=uuid&client=android&clientVersion=8.5.8&st=1587797536863&sv=111");
    datalen = strlen(data);
    encrypt_2(data);
    for (int index = 0; index < datalen; index++) {
    if (index !=0 && index % 16 == 0) putchar(' ');
    if (index !=0 && index % 32 == 0) putchar('\n');
    printf("%02X ", (uint32_t)data[index]);
    }
    printf("\n\n");

// AF CB 2A FB 1F 34 9B ED 06 55 5A EF 7F D4 7C EC  BE C1 15 C6 08 3E AF A5 1F 60 8D F1 0B DD 35 0B
// AB 2A 21 CB 1F FB 6C B7 DF 2B 9D EA 43 CF 07 CC  AB C0 2D C6 0F ED 76 A1 2B 66 8B E1 7F 84 07 CC
// AE C4 21 C6 1F 14 90 A1 F7 13 78 DD 7F D4 7A 32  95 FF 3F CC E2 13 AE EE 21 66 88 EC 47 CE 35 F6
// 6B F4 3E C7 30 17 B5 F7 22 13 43 A8 3A 84 40 1D  8D FB 3F DB 05 2E 5E B9 31 63 92 DD 3A 84 47 0B
// BD FF 30 CD 0F 20 5E B9 DF 21 77 A8 30 96 35 36  AE F5 2B BA DD 37 AE F4 22 1D 4B E4 7D D0 7E 33
// BD CB 20 FD C5 C5 5E B7 EB 21 4B A4 30 D7 46 0E  AE C2 EE 92 C5 09 94 B4 F1 2A 93 9A 3A 84 4B 36
// BE F5 15 C6 F9 20 AE F2 26 60 B7 9A 08 A2 0C DA  61 86 E8 BA 1B 2F A1 F2 F8 5D B6 DB 79 A5 46 1F
// 97 CA EE 92 DB EF 5E F7 2F 60 9F E1 7C C5 7C 13  AD B0 E6 BA D4 FD 5E 93 DF 64 B0 ED A7 CE 35 C4
// 6B 8B E4 8E DC F2 61 B7 DF 1D 4B EB 7D DF 45 0D  AE 2D 30 D1 1B 20 5E B9 DF 64 82 D9 40 C5 43 CC
// 55 B0 3F C7 18 3D 9F E4 14 67 8E E4 43 CF 35 C4  6B CB EE 84 C5 30 7D EB 21 63 96 DC 30 9C 35 DA
// 6B D3 E2 CD 18 34 90 BC 32 66 B6 DC 34 C5 47 33  AE FC 30 95 04 29 90 F1 24 5A 8D 9E 71 D6 40 0F
// 97 CA 12 FD 15 3E A5 EE 2B 2E 41 A6 03 90 13 C0  BC CA F9 89 D8 FB 63 B6 F6 28 52 AB 04 A2 09 DD
// 6F C1 32 95 D4 FC 6D

}
*/