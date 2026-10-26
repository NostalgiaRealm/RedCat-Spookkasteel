/*
 * FUN_005bf560 at 005bf560
 * undefined FUN_005bf560(void)
 * Address ranges: 005bf560-005bf9fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005bf560(int param_1,char *param_2,int *param_3,undefined4 param_4,uint param_5,
            undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int local_444;
  int local_440;
  int local_434;
  int local_430;
  int local_42c;
  int local_428;
  undefined4 local_410;
  undefined4 local_404;
  undefined4 local_400 [256];
  
  uVar12 = 0xffffffff;
  iVar15 = 0;
  pcVar17 = param_2;
  do {
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    cVar2 = *pcVar17;
    pcVar17 = pcVar17 + 1;
  } while (cVar2 != '\0');
  iVar13 = ~uVar12 - 1;
  local_428 = 0;
  local_430 = 0;
  local_42c = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_005bfa00(*param_3,param_3[2],param_3[1],param_3[3],param_7,param_4,param_5);
  }
  else if (0 < iVar13) {
    while( true ) {
      while( true ) {
        local_434 = 0;
        if (DAT_006b28bc < 2) {
          uVar12 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar15] * 2] & 8;
        }
        else {
          uVar12 = FUN_0060e0ee(param_2[iVar15],8);
        }
        if (uVar12 == 0) break;
        if (iVar13 <= iVar15) {
          return 1;
        }
        iVar15 = iVar15 + 1;
        local_42c = iVar15;
      }
      if (iVar13 <= iVar15) break;
      iVar14 = 0;
      local_444 = iVar15;
      do {
        while (piVar1 = (int *)((uint)(byte)param_2[local_444] * 0x20 + 0x48 + param_1),
              *piVar1 == 0) {
          local_444 = local_444 + 1;
          if (iVar13 <= local_444) {
            bVar7 = true;
            goto LAB_005bf667;
          }
        }
        iVar3 = piVar1[7];
        if (param_3[1] < *param_3 + iVar3 + iVar14) {
          bVar7 = false;
          goto LAB_005bf667;
        }
        iVar14 = iVar14 + iVar3;
        local_444 = local_444 + 1;
      } while (local_444 < iVar13);
      bVar7 = true;
LAB_005bf667:
      if (((param_5 & 2) != 0) && (iVar14 = local_444, !bVar7)) {
        for (; iVar15 < iVar14; iVar14 = iVar14 + -1) {
          if (DAT_006b28bc < 2) {
            uVar12 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar14] * 2] & 8;
          }
          else {
            uVar12 = FUN_0060e0ee(param_2[iVar14],8);
          }
          if (uVar12 != 0) break;
        }
        if (DAT_006b28bc < 2) {
          uVar12 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar14] * 2] & 8;
        }
        else {
          uVar12 = FUN_0060e0ee(param_2[iVar14],8);
        }
        if (uVar12 != 0) {
          for (; local_444 = iVar14, iVar15 < iVar14; iVar14 = iVar14 + -1) {
            if (DAT_006b28bc < 2) {
              uVar12 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar14] * 2] & 8;
            }
            else {
              uVar12 = FUN_0060e0ee(param_2[iVar14],8);
            }
            if (uVar12 == 0) break;
          }
        }
      }
      while ((iVar15 <= local_444 && (iVar15 < iVar13))) {
        iVar14 = (uint)(byte)param_2[iVar15] * 0x20 + 0x48 + param_1;
        iVar3 = *(int *)((uint)(byte)param_2[iVar15] * 0x20 + 0x48 + param_1);
        if (iVar3 != 0) {
          if (iVar3 != local_428) {
            FUN_005c40f0();
            local_440 = 0;
            puVar16 = local_400;
            do {
              uVar8 = __ftol();
              uVar9 = __ftol(uVar8);
              uVar10 = __ftol(uVar9);
              __ftol(uVar10);
              uVar8 = FUN_005c6900(uVar10,uVar9,uVar8);
              *puVar16 = uVar8;
              local_440 = local_440 + 1;
              puVar16 = puVar16 + 1;
            } while (local_440 < 0x100);
            FUN_005c4fd0(0xd,0x100);
            FUN_005c3fa0();
            iVar15 = local_42c;
            local_428 = iVar3;
          }
          if (param_6 == (undefined4 *)0x0) {
            FUN_005c3480(*(int *)(iVar14 + 0xc),param_7,
                         *(int *)(iVar14 + 0x14) + *param_3 + local_434,
                         ((int)*(short *)(param_1 + 0x40) - *(int *)(iVar14 + 0x18)) + param_3[2] +
                         local_430,*(int *)(iVar14 + 8) - *(int *)(iVar14 + 4),
                         *(int *)(iVar14 + 0x10) - *(int *)(iVar14 + 0xc));
          }
          else {
            iVar3 = *(int *)(iVar14 + 4);
            iVar4 = *(int *)(iVar14 + 8);
            iVar5 = *(int *)(iVar14 + 0xc);
            iVar6 = *(int *)(iVar14 + 0x10);
            iVar11 = FUN_005d7880(&local_404,*(int *)(iVar14 + 0x14) + *param_3 + local_434,
                                  ((int)*(short *)(param_1 + 0x40) - *(int *)(iVar14 + 0x18)) +
                                  param_3[2] + local_430,*param_6,param_6[1],param_6[2],param_6[3],0
                                 );
            local_42c = iVar15;
            if (iVar11 != 0) {
              FUN_005c3480(iVar5,param_7,local_410,local_404,iVar4 - iVar3,iVar6 - iVar5);
            }
          }
          local_434 = local_434 + *(int *)(iVar14 + 0x1c);
          iVar15 = local_42c;
        }
        iVar15 = iVar15 + 1;
        local_42c = iVar15;
      }
      local_430 = local_430 + *(short *)(param_1 + 0x40);
      if (iVar13 <= iVar15) {
        return 1;
      }
    }
  }
  return 1;
}

