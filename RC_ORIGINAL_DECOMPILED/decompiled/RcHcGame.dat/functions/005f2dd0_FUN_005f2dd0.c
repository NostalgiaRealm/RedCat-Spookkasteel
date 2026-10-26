/*
 * FUN_005f2dd0 at 005f2dd0
 * undefined FUN_005f2dd0(void)
 * Address ranges: 005f2dd0-005f2e66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate routine entry from original stored code pointer 0x650fdc; evidence stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still inferred.
 */

/* Recovered candidate routine entry from original stored code pointer 0x650fdc; evidence
   stored-pointer; prologue canonical-SEH-prologue. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_005f2dd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_1c [4];
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647d58;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 4;
  }
  ExceptionList = &pvStack_c;
  FUN_005ecba0(local_1c,iVar1);
  local_4 = 0;
  FUN_005f92e0(local_1c);
  if (*(char *)(param_1 + 0x34) == '\0') {
    (**(code **)(param_1 + 0x3c))(local_1c,param_3);
  }
  else {
    (**(code **)(param_1 + 0x3c))(param_1 + 0xc);
  }
  FUN_005fe5f0(uStack_18);
  ExceptionList = pvStack_c;
  return;
}

