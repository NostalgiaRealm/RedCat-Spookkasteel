/*
 * FUN_00584730 at 00584730
 * undefined FUN_00584730(void)
 * Address ranges: 00584730-005847c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00584730(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006428d6;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x110);
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  local_4 = local_4 & 0xffffff00;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

