/*
 * FUN_005bf0a0 at 005bf0a0
 * undefined FUN_005bf0a0(void)
 * Address ranges: 005bf0a0-005bf55f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005bf0a0(int param_1,char *param_2,int *param_3,float *param_4,uint param_5,undefined4 *param_6)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int local_444;
  int local_43c;
  int local_434;
  int local_430;
  int local_42c;
  int local_428;
  int local_424;
  int local_420;
  undefined4 local_41c;
  int local_418;
  undefined4 local_414;
  int local_410;
  float local_40c;
  float local_408;
  char *local_404;
  undefined4 local_400 [256];
  
  uVar6 = 0xffffffff;
  pcVar12 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar13 = 0;
  iVar7 = ~uVar6 - 1;
  local_420 = 0;
  local_434 = 0;
  local_424 = 0;
  local_404 = param_2;
  if (*(int *)(param_1 + 0x44) == 0) {
    local_41c = 0;
    local_414 = 0;
    local_418 = param_3[1] - *param_3;
    local_410 = param_3[3] - param_3[2];
    FUN_005bf560(&local_41c,param_4,param_5,0,*(undefined4 *)(param_1 + 0x204c));
    if (param_6 == (undefined4 *)0x0) {
      local_42c = param_3[2];
      local_428 = *param_3;
    }
    else {
      iVar13 = FUN_005d7880(&local_42c,*param_3,param_3[2],*param_6,param_6[1],param_6[2],param_6[3]
                            ,0);
      if (iVar13 == 0) {
        return 1;
      }
    }
    FUN_005bbab0(&local_41c,local_428,local_42c);
  }
  else if (0 < iVar7) {
LAB_005bf0f5:
    while( true ) {
      local_43c = 0;
      if (DAT_006b28bc < 2) {
        uVar6 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar13] * 2] & 8;
      }
      else {
        uVar6 = FUN_0060e0ee(param_2[iVar13],8);
      }
      if (uVar6 == 0) break;
      if (iVar7 <= iVar13) {
        return 1;
      }
      iVar13 = iVar13 + 1;
      local_424 = iVar13;
    }
    if (iVar13 < iVar7) {
      iVar8 = 0;
      bVar2 = false;
      local_444 = iVar13;
      do {
        while (*(int *)((uint)(byte)param_2[local_444] * 0x20 + 0x48 + param_1) == 0) {
          local_444 = local_444 + 1;
          if (iVar7 <= local_444) {
            bVar2 = true;
            goto LAB_005bf1a1;
          }
        }
        iVar11 = *(int *)((uint)(byte)param_2[local_444] * 0x20 + param_1 + 100);
        if (param_3[1] < *param_3 + iVar11 + iVar8) goto LAB_005bf1a1;
        iVar8 = iVar8 + iVar11;
        local_444 = local_444 + 1;
      } while (local_444 < iVar7);
      bVar2 = true;
LAB_005bf1a1:
      iVar8 = local_420;
      if (((param_5 & 2) != 0) && (iVar11 = local_444, !bVar2)) {
        for (; iVar13 < iVar11; iVar11 = iVar11 + -1) {
          if (DAT_006b28bc < 2) {
            uVar6 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar11] * 2] & 8;
          }
          else {
            uVar6 = FUN_0060e0ee(param_2[iVar11],8);
          }
          if (uVar6 != 0) break;
        }
        if (DAT_006b28bc < 2) {
          uVar6 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar11] * 2] & 8;
        }
        else {
          uVar6 = FUN_0060e0ee(param_2[iVar11],8);
        }
        iVar8 = local_420;
        if (uVar6 != 0) {
          for (; iVar8 = local_420, local_444 = iVar11, iVar13 < iVar11; iVar11 = iVar11 + -1) {
            if (DAT_006b28bc < 2) {
              uVar6 = (byte)PTR_DAT_006b26b0[(uint)(byte)param_2[iVar11] * 2] & 8;
            }
            else {
              uVar6 = FUN_0060e0ee(param_2[iVar11],8);
            }
            iVar8 = local_420;
            if (uVar6 == 0) break;
          }
        }
      }
      do {
        if ((local_444 < iVar13) || (iVar7 <= iVar13)) goto LAB_005bf461;
        local_420 = *(int *)((uint)(byte)param_2[iVar13] * 0x20 + 0x48 + param_1);
        iVar11 = (uint)(byte)param_2[iVar13] * 0x20 + 0x48 + param_1;
        if (local_420 != 0) {
          if (local_420 != iVar8) {
            FUN_005c40f0();
            local_430 = 0;
            puVar10 = local_400;
            do {
              local_408 = (float)local_430 * *param_4 * 0.003921569;
              local_40c = (float)local_430 * param_4[1] * 0.003921569;
              uVar3 = __ftol();
              uVar4 = __ftol(uVar3);
              uVar5 = __ftol(uVar4);
              __ftol(uVar5);
              uVar3 = FUN_005c6900(uVar5,uVar4,uVar3);
              *puVar10 = uVar3;
              local_430 = local_430 + 1;
              puVar10 = puVar10 + 1;
            } while (local_430 < 0x100);
            FUN_005c4fd0(0xd,0x100);
            FUN_005c3fa0();
            param_2 = local_404;
            iVar13 = local_424;
            iVar8 = local_420;
          }
          local_420 = iVar8;
          if (param_6 == (undefined4 *)0x0) {
            iVar9 = ((int)*(short *)(param_1 + 0x40) - *(int *)(iVar11 + 0x18)) + param_3[2] +
                    local_434;
            iVar8 = *(int *)(iVar11 + 0x14) + *param_3 + local_43c;
            puVar10 = (undefined4 *)(iVar11 + 4);
LAB_005bf438:
            FUN_005bbab0(puVar10,iVar8,iVar9);
          }
          else {
            local_41c = *(undefined4 *)(iVar11 + 4);
            local_418 = *(undefined4 *)(iVar11 + 8);
            local_414 = *(undefined4 *)(iVar11 + 0xc);
            local_410 = *(undefined4 *)(iVar11 + 0x10);
            iVar8 = FUN_005d7880(&local_42c,*(int *)(iVar11 + 0x14) + *param_3 + local_43c,
                                 ((int)*(short *)(param_1 + 0x40) - *(int *)(iVar11 + 0x18)) +
                                 param_3[2] + local_434,*param_6,param_6[1],param_6[2],param_6[3],0)
            ;
            if (iVar8 != 0) {
              puVar10 = &local_41c;
              iVar8 = local_428;
              iVar9 = local_42c;
              goto LAB_005bf438;
            }
          }
          local_43c = local_43c + *(int *)(iVar11 + 0x1c);
          iVar8 = local_420;
        }
        local_420 = iVar8;
        iVar13 = iVar13 + 1;
        local_424 = iVar13;
        iVar8 = local_420;
      } while( true );
    }
  }
  return 1;
LAB_005bf461:
  local_434 = local_434 + *(short *)(param_1 + 0x40);
  local_420 = iVar8;
  if (iVar7 <= iVar13) {
    return 1;
  }
  goto LAB_005bf0f5;
}

