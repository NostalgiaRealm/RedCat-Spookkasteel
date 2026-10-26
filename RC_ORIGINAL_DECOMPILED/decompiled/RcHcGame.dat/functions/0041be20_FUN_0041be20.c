/*
 * FUN_0041be20 at 0041be20
 * undefined FUN_0041be20(void)
 * Address ranges: 0041be20-0041beb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0041be20(int *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 local_18;
  float local_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621a3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x34);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00401bb0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_00423710(uVar3);
  puVar1 = (undefined4 *)param_1[0x60];
  local_18 = *puVar1;
  local_10 = (void *)puVar1[2];
  local_14 = (float)puVar1[1] + (float)param_1[0x8d];
  (**(code **)(*param_1 + 0x4c))(&local_18);
  ExceptionList = local_10;
  return;
}

