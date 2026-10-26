/*
 * FUN_100170c0 at 100170c0
 * undefined FUN_100170c0(void)
 * Address ranges: 100170c0-1001745b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100170c0(uint param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
            undefined4 *param_7,int param_8,undefined4 *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  uint *puVar23;
  int local_1ac;
  int *local_1a8;
  undefined4 *local_1a4;
  int local_19c;
  int local_190 [100];
  
  if (param_4 != 0) {
    param_3 = 0;
  }
  if ((param_6 & 0x10) == 0) {
    if ((param_6 & 8) != 0) {
      param_6 = 8;
    }
  }
  else {
    param_6 = 0x10;
  }
  uVar20 = param_6 & 0xffff;
  local_1a4 = (undefined4 *)0x0;
  puVar21 = param_7;
  iVar22 = param_8;
  if (0 < param_8) {
    do {
      if (((*(byte *)(puVar21 + 1) & 8) != 0) &&
         ((local_1a4 == (undefined4 *)0x0 || (iVar13 = FUN_10020410(), iVar13 != 0)))) {
        local_1a4 = puVar21;
      }
      puVar21 = puVar21 + 2;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  puVar14 = (uint *)FUN_100203a0();
  if (0 < param_8) {
    local_1a8 = local_190;
    local_19c = param_8;
    puVar23 = param_7 + 1;
    do {
      uVar18 = *puVar23;
      if ((uVar18 & 0xffff) == uVar20) {
        local_1ac = 0x800000;
LAB_100171dc:
        puVar15 = (uint *)FUN_100203a0();
        if (puVar23[-1] == param_1) {
          local_1ac = local_1ac + 0x10000;
        }
        else if (puVar23[-1] == param_2) {
          local_1ac = local_1ac + 0x8000;
        }
        else {
          iVar22 = FUN_10020430();
          if ((iVar22 == 0) || (iVar22 = FUN_10020430(), iVar22 == 0)) {
            local_1ac = local_1ac + 0x10;
          }
          else {
            uVar18 = puVar15[1];
            uVar1 = puVar15[2];
            uVar2 = puVar15[5];
            uVar3 = puVar14[5];
            uVar4 = puVar14[1];
            uVar5 = puVar15[6];
            uVar6 = puVar14[6];
            uVar7 = puVar14[2];
            uVar8 = puVar15[3];
            uVar9 = puVar15[7];
            uVar10 = puVar14[3];
            uVar11 = puVar14[7];
            iVar22 = FUN_10017460(*puVar14 >> ((byte)puVar14[4] & 0x1f) ^
                                  *puVar15 >> ((byte)puVar15[4] & 0x1f));
            iVar13 = FUN_10017460(uVar18 >> ((byte)uVar2 & 0x1f) ^ uVar4 >> ((byte)uVar3 & 0x1f));
            iVar16 = FUN_10017460(uVar1 >> ((byte)uVar5 & 0x1f) ^ uVar7 >> ((byte)uVar6 & 0x1f));
            iVar17 = FUN_10017460(uVar8 >> ((byte)uVar9 & 0x1f) ^ uVar10 >> ((byte)uVar11 & 0x1f));
            local_1ac = local_1ac + (((8 - iVar17) * 4 - iVar16) - iVar13) + (0x18 - iVar22);
          }
        }
        iVar22 = FUN_10017460(puVar15[3]);
        bVar12 = 2 < iVar22;
        iVar22 = FUN_100203f0();
        if ((iVar22 != 0) && (iVar22 = FUN_10020410(), iVar22 != 0)) {
          bVar12 = true;
        }
        if (param_4 == 0) {
          if (!bVar12) {
            local_1ac = local_1ac + 0x400;
          }
        }
        else if (bVar12) {
          local_1ac = local_1ac + 0x1000000;
        }
        else {
          iVar22 = FUN_10017460(puVar15[3]);
          if ((iVar22 != 0) || ((*puVar23 & 0x20000) != 0)) {
            local_1ac = local_1ac + 0x80000;
          }
        }
        if (((*puVar23 & 0x10000) != 0) && (param_5 != 0)) {
          local_1ac = local_1ac + 0x2000000;
        }
        if (param_3 != 0) {
          if (puVar23[-1] == 8) {
            local_1ac = local_1ac + 0x800000;
          }
          else if (bVar12) {
            local_1ac = local_1ac + 0x40000;
          }
        }
        uVar18 = *puVar23 & 0x20000;
        if (((uVar18 != 0) && (param_3 != 0)) || ((uVar18 == 0 && (param_3 == 0)))) {
          local_1ac = local_1ac + 0x20000;
        }
        *local_1a8 = local_1ac;
      }
      else {
        if ((uVar18 & uVar20) == uVar20) {
          iVar22 = FUN_10017460((uVar18 ^ param_6) & 0xffff);
          local_1ac = (0x20 - iVar22) * 0x40;
          goto LAB_100171dc;
        }
        *local_1a8 = 0;
      }
      puVar23 = puVar23 + 2;
      local_1a8 = local_1a8 + 1;
      local_19c = local_19c + -1;
    } while (local_19c != 0);
  }
  iVar22 = 0;
  if (0 < param_8) {
    piVar19 = local_190;
    do {
      iVar13 = *piVar19;
      if (iVar22 < iVar13) {
        *param_9 = *param_7;
        param_9[1] = param_7[1];
        iVar22 = iVar13;
      }
      piVar19 = piVar19 + 1;
      param_7 = param_7 + 2;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
    if (iVar22 != 0) {
      return 1;
    }
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x51b,&DAT_10265ce0,0);
  return 0;
}

