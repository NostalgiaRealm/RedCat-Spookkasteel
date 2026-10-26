/*
 * FUN_00572730 at 00572730
 * undefined FUN_00572730(void)
 * Address ranges: 00572730-005727cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00572730(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00641208;
  local_c = ExceptionList;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x184);
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x14) + -1;
      ExceptionList = &local_c;
      *(int *)(iVar2 + 0x14) = iVar1;
      if (iVar1 == 0) {
        FUN_005abfc0(0);
      }
      *(undefined4 *)(param_1 + 0x184) = 0;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar2 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

