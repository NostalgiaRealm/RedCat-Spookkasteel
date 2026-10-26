/*
 * FUN_0049c1b0 at 0049c1b0
 * undefined FUN_0049c1b0(void)
 * Address ranges: 0049c1b0-0049c276
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049c1b0(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062c950;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    FUN_0049c880();
  }
  if (param_2 != 0) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    FUN_0049ca60();
    FUN_0049d5e0();
    FUN_005b3ae0();
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0();
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

