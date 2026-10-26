/*
 * FUN_0061005e at 0061005e
 * undefined FUN_0061005e(void)
 * Address ranges: 0061005e-006100b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061005e(int param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_00651df8;
  puStack_10 = &LAB_006106d0;
  local_14 = ExceptionList;
  if ((param_1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4), iVar1 != 0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_0060a0f7(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  ExceptionList = local_14;
  return;
}

