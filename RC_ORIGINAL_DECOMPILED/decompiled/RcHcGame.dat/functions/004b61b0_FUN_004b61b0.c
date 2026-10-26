/*
 * FUN_004b61b0 at 004b61b0
 * undefined FUN_004b61b0(void)
 * Address ranges: 004b61b0-004b6217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004b61b0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ed68;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x1dc);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x1dc) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00591690();
  ExceptionList = local_c;
  return;
}

