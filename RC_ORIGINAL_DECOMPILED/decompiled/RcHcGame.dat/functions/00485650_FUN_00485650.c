/*
 * FUN_00485650 at 00485650
 * undefined FUN_00485650(void)
 * Address ranges: 00485650-00485835
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00485650(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00629b73;
  local_c = ExceptionList;
  local_4 = 10;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 400) != 0) {
    ExceptionList = &local_c;
    FUN_004098d0();
    *(undefined4 *)(param_1 + 400) = 0;
  }
  local_4._0_1_ = 9;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  local_4._0_1_ = 8;
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_004098d0();
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x124);
  local_4._0_1_ = 7;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  iVar1 = *(int *)(param_1 + 0xb0);
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xac);
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa4);
  local_4 = 0xe;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  local_4._0_1_ = 0xd;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  local_4._0_1_ = 0xc;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,0xb);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_0051a260();
  ExceptionList = local_c;
  return;
}

