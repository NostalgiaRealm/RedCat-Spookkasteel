/*
 * FUN_0053c870 at 0053c870
 * undefined FUN_0053c870(void)
 * Address ranges: 0053c870-0053cb1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_0053c870(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_34;
  void *local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c023;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0053cbc0(param_2);
  if (-1 < iVar2) {
    FUN_0053be20(param_3,param_4,param_5);
    ExceptionList = local_c;
    return;
  }
  local_34 = 0;
  local_30 = operator_new(0x2c);
  local_4 = 0;
  if (local_30 == (void *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = FUN_0053bd00(param_2);
  }
  local_4 = 0xffffffff;
  FUN_0053be20(param_3,param_4,param_5);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_28 = *puVar8;
        puVar8 = puVar8 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,s___AdamSource_DaviSortedList_h_00690798
                                  ,0x49,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = FUN_0044e4c0();
  if (iVar2 == 0) {
    iVar9 = 0;
  }
  else {
    param_5 = 0;
    iVar7 = (-(uint)(*(int *)(param_1 + 0x24) != 0) & 0xfffffffe) + 2;
    iVar2 = FUN_0044e4c0();
    iVar2 = iVar2 + -1;
    do {
      iVar9 = (param_5 + iVar2) / 2;
      iVar4 = (**(code **)(param_1 + 0x28))(&param_2,*(int *)(param_1 + 0x18) + iVar9 * 4);
      if (iVar4 == 1) {
        auStack_1c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        goto code_r0x0053caa9;
      }
      if (iVar4 == iVar7) {
        param_5 = iVar9 + 1;
      }
      else {
        iVar2 = iVar9 + -1;
      }
    } while (param_5 <= iVar2);
    if (iVar4 == iVar7) {
      iVar9 = iVar9 + 1;
    }
  }
  goto LAB_0053caf3;
  while( true ) {
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 == '\0') break;
code_r0x0053caa9:
    if (uVar5 == 0) break;
  }
  FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
  local_4 = 3;
  pcVar3 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,0x4b,
                                auStack_1c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_0053caf3:
  FUN_0053cff0(*(int *)(param_1 + 0x18) + iVar9 * 4,1,&local_34);
  ExceptionList = local_c;
  return;
}

