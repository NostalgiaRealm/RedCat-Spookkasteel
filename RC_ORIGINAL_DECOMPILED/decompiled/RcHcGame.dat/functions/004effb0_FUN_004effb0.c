/*
 * FUN_004effb0 at 004effb0
 * undefined FUN_004effb0(void)
 * Address ranges: 004effb0-004f01bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004effb0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634019;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f418;
  local_4 = 3;
  iVar6 = 0;
  while( true ) {
    if (param_1[6] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)(param_1[7] - param_1[6]) >> 2;
    }
    if (iVar3 <= iVar6) break;
    puVar2 = *(undefined4 **)(param_1[6] + iVar6 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    local_4._0_1_ = 4;
    FUN_004f12a0(local_28);
    param_1[9] = uStack_18;
    param_1[10] = uStack_14;
    *(undefined1 *)(param_1 + 0xb) = uStack_10;
    local_4._0_1_ = 5;
    FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
    FUN_005ae770();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_00587d50(uStack_24,uStack_20);
    FUN_005fe5f0(uStack_24);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    iVar6 = iVar6 + 1;
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x62,local_28);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  FUN_004f1790(param_1[6],param_1[7]);
  iVar6 = param_1[0xd];
  local_4._0_1_ = 2;
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar6 + 0x14) + -1;
    *(int *)(iVar6 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0xd] = 0;
  }
  iVar6 = param_1[0xc];
  local_4._0_1_ = 1;
  if (iVar6 != 0) {
    iVar3 = *(int *)(iVar6 + 0x14) + -1;
    *(int *)(iVar6 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0xc] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  FUN_005fe5f0(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

