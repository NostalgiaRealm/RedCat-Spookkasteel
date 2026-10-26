/*
 * FUN_00419830 at 00419830
 * undefined FUN_00419830(void)
 * Address ranges: 00419830-004198ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00419830(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006215c8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00427ab0();
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_00422880();
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

