/*
 * FUN_00420510 at 00420510
 * undefined FUN_00420510(void)
 * Address ranges: 00420510-00420590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00420510(int param_1,int param_2)

{
  int iVar1;
  int local_1c;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006220a8;
  local_c = ExceptionList;
  local_4 = 0;
  local_1c = param_2;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00427ab0();
  local_10 = CONCAT31((int3)((uint)&local_1c >> 8),*(undefined1 *)(param_1 + 0x7c));
  local_1c = local_10;
  FUN_00422880();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    local_1c = 0;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

