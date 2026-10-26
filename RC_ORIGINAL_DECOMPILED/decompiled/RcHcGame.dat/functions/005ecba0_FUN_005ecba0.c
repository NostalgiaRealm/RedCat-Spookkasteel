/*
 * FUN_005ecba0 at 005ecba0
 * undefined FUN_005ecba0(void)
 * Address ranges: 005ecba0-005eccca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005ecba0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_1c [4];
  void *local_18;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00647130;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_3;
  local_18 = (void *)0x0;
  local_14 = (void *)0x0;
  local_10 = (void *)0x0;
  local_4 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_0054a040();
  uVar4 = param_3;
  if (uVar1 < param_3) {
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = 0;
    }
    pvVar2 = operator_new(uVar1 * 4);
    FUN_004dddf0(local_18,local_14,pvVar2);
    FUN_00587d50(local_18,local_14);
    FUN_005fe5f0(local_18);
    local_10 = (void *)((int)pvVar2 + uVar4 * 4);
    iVar3 = FUN_0044e4c0();
    local_14 = (void *)((int)pvVar2 + iVar3 * 4);
    local_18 = pvVar2;
  }
  local_4 = 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    iVar3 = *(int *)(param_1 + 8) + -4;
    *(int *)(param_1 + 8) = iVar3;
    param_3 = *(uint *)(*(int *)(param_1 + 4) + iVar3);
    FUN_0053cff0(local_18,1,&param_3);
  }
  FUN_005efc10(local_1c);
  FUN_005fe5f0(local_18);
  ExceptionList = local_c;
  return param_2;
}

