/*
 * FUN_00502750 at 00502750
 * undefined FUN_00502750(void)
 * Address ranges: 00502750-005027b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502750(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635b08;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, ExceptionList = &local_c,
     *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

