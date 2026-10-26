/*
 * FUN_0058eeb0 at 0058eeb0
 * undefined FUN_0058eeb0(void)
 * Address ranges: 0058eeb0-0058ef2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0058eeb0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006433db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x6c);
  uVar2 = 0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    param_1 = param_1 + 0x5c;
    uVar2 = __ftol(param_1,param_2);
    uVar2 = FUN_004ac120(uVar2,param_1,param_2);
  }
  local_4 = 0xffffffff;
  FUN_004ad0e0(uVar2);
  FUN_004ad2e0(uVar2);
  ExceptionList = local_c;
  return;
}

