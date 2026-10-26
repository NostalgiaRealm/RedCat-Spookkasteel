/*
 * FUN_00467180 at 00467180
 * undefined FUN_00467180(void)
 * Address ranges: 00467180-004671e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00467180(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00627858;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0xfc);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
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

