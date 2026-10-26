/*
 * FUN_10019820 at 10019820
 * undefined FUN_10019820(void)
 * Address ranges: 10019820-10019adf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10019820(undefined4 param_1,int param_2,int param_3,code *param_4,uint param_5,int param_6,
            int param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_20;
  code *local_1c;
  int local_18;
  int local_14;
  int local_10;
  code *local_c;
  uint local_8;
  code *local_4;
  
  local_20 = param_2;
  iVar9 = 0;
  local_8 = param_5;
  if ((param_3 == 0) || (*(int *)(param_3 + 0x10) == 0)) {
    bVar3 = false;
  }
  else {
    local_14 = *(int *)(param_3 + 0x14);
    local_18 = *(int *)(param_3 + 0x18);
    bVar3 = true;
  }
  if ((param_6 == 0) || (*(int *)(param_6 + 0x10) == 0)) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    param_5 = *(uint *)(param_6 + 0x14);
    local_10 = *(int *)(param_6 + 0x18);
    bVar1 = true;
    bVar2 = true;
  }
  iVar5 = FUN_100203a0();
  iVar6 = FUN_100203a0();
  iVar4 = param_7;
  param_4 = *(code **)(iVar5 + 0x4c);
  local_1c = *(code **)(iVar5 + 0x40);
  local_c = *(code **)(iVar6 + 0x3c);
  local_4 = *(code **)(iVar6 + 0x50);
  if (*(int *)(iVar5 + 0xc) != 0) {
    if (*(int *)(iVar6 + 0xc) == 0) {
      if (param_7 < 1) {
        return 1;
      }
      do {
        iVar5 = (*param_4)(&local_20);
        (*local_1c)(iVar5,&param_1,&param_6,&param_3,&param_2);
        if ((bVar3) && ((iVar9 == local_18 || (iVar5 == local_14)))) {
          param_2 = 0;
        }
        uVar7 = (*local_c)(param_1,param_6,param_3,param_2);
        uVar8 = uVar7;
        if ((((bVar2) && (uVar8 = param_5, iVar9 != local_10)) && (0x7f < param_2)) &&
           (uVar8 = uVar7, uVar7 == param_5)) {
          uVar8 = uVar7 ^ 1;
        }
        (*local_4)(&local_8,uVar8);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar4);
      return 1;
    }
    if (*(int *)(iVar5 + 0xc) != 0) goto LAB_10019a3e;
  }
  if (*(int *)(iVar6 + 0xc) != 0) {
    if (param_7 < 1) {
      return 1;
    }
    do {
      iVar5 = (*param_4)(&local_20);
      (*local_1c)(iVar5,&param_1,&param_6,&param_3,&param_2);
      if ((bVar3) && ((iVar9 == local_18 || (iVar5 == local_14)))) {
        param_2 = 0;
      }
      uVar7 = (*local_c)(param_1,param_6,param_3,param_2);
      uVar8 = uVar7;
      if (((bVar1) && (uVar8 = param_5, iVar9 != local_10)) && (uVar8 = uVar7, uVar7 == param_5)) {
        uVar8 = uVar7 ^ 1;
      }
      (*local_4)(&local_8,uVar8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
    return 1;
  }
LAB_10019a3e:
  if (0 < param_7) {
    do {
      iVar5 = (*param_4)(&local_20);
      (*local_1c)(iVar5,&param_1,&param_6,&param_3,&param_2);
      uVar8 = param_5;
      if ((((!bVar3) || ((iVar9 != local_18 && (iVar5 != local_14)))) &&
          ((!bVar1 || (iVar9 != local_10)))) &&
         ((uVar8 = (*local_c)(param_1,param_6,param_3,param_2), bVar1 && (uVar8 == param_5)))) {
        uVar8 = uVar8 ^ 1;
      }
      (*local_4)(&local_8,uVar8);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  return 1;
}

