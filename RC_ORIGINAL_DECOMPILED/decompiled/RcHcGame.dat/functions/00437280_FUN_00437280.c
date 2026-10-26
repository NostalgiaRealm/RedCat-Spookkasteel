/*
 * FUN_00437280 at 00437280
 * undefined FUN_00437280(void)
 * Address ranges: 00437280-00437331
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00437280(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00623d90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x138) = 0;
  iVar2 = *(int *)(param_1 + 0x13c);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14) + -1;
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar2 != param_2) {
    if ((iVar2 != 0) &&
       (iVar1 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar1, iVar1 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x13c) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

