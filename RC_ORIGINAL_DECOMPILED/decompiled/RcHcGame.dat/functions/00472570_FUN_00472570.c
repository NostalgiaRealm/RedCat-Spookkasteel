/*
 * FUN_00472570 at 00472570
 * undefined FUN_00472570(void)
 * Address ranges: 00472570-0047265b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00472570(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00628490;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_0060af6c(param_1 + 0x1488c,0x18,6,FUN_0046ace0);
  iVar1 = *(int *)(param_1 + 0x108);
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x104);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  local_4 = (uint)local_4._1_3_ << 8;
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

