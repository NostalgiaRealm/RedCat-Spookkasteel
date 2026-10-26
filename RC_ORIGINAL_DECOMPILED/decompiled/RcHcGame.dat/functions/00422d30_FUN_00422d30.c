/*
 * FUN_00422d30 at 00422d30
 * undefined FUN_00422d30(void)
 * Address ranges: 00422d30-00422d84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422d30(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00622558;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00423710(0);
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

