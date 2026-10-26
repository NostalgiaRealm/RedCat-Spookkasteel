/*
 * FUN_0046adc0 at 0046adc0
 * undefined FUN_0046adc0(void)
 * Address ranges: 0046adc0-0046ae6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046adc0(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00627c8e;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x9c8);
  local_4 = 2;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x9c8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x9c4);
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x9c4) = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0060af6c(param_1 + 0x80c,0x18,1,FUN_0046ace0);
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

