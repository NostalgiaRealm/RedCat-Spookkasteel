/*
 * FUN_0041c040 at 0041c040
 * undefined FUN_0041c040(void)
 * Address ranges: 0041c040-0041c0b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c040(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00621a88;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_0042ac60();
  FUN_00422880();
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

