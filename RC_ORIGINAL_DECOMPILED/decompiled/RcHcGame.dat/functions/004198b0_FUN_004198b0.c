/*
 * FUN_004198b0 at 004198b0
 * undefined FUN_004198b0(void)
 * Address ranges: 004198b0-00419926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004198b0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006215e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  FUN_00427c90();
  FUN_00422880();
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

