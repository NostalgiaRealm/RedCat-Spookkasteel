/*
 * FUN_0055afb0 at 0055afb0
 * undefined FUN_0055afb0(void)
 * Address ranges: 0055afb0-0055b270
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0055afb0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063f43b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f848;
  local_4 = 0x16;
  FUN_0055cb60();
  local_4._0_1_ = 0x15;
  FUN_005ab4d0();
  local_4._0_1_ = 0x14;
  FUN_005a3ce0();
  local_4._0_1_ = 0x13;
  FUN_005a3ce0();
  local_4._0_1_ = 0x12;
  FUN_005acca0();
  local_4._0_1_ = 0x11;
  FUN_005acca0();
  local_4._0_1_ = 0x10;
  FUN_005acca0();
  local_4._0_1_ = 0xf;
  FUN_005acca0();
  local_4._0_1_ = 0xe;
  FUN_005acca0();
  local_4._0_1_ = 0xd;
  FUN_005acca0();
  local_4._0_1_ = 0xc;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_005acca0();
  iVar1 = param_1[0x6a];
  local_4._0_1_ = 9;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x6a] = 0;
  }
  iVar1 = param_1[0x69];
  local_4._0_1_ = 8;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x69] = 0;
  }
  local_4._0_1_ = 7;
  FUN_005acca0();
  iVar1 = param_1[0x3c];
  iVar2 = param_1[0x3b];
  local_4._0_1_ = 6;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_00554170(0);
  }
  FUN_005fe5f0(param_1[0x3b]);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  iVar1 = param_1[0x39];
  local_4._0_1_ = 5;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x39] = 0;
  }
  iVar1 = param_1[0x38];
  local_4._0_1_ = 4;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x38] = 0;
  }
  iVar1 = param_1[0x37];
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x37] = 0;
  }
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4._0_1_ = 0x17;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  iVar1 = param_1[0xb];
  iVar2 = param_1[10];
  local_4._0_1_ = 1;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_00554170(0);
  }
  FUN_005fe5f0(param_1[10]);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar1 = param_1[7];
  iVar2 = param_1[6];
  local_4 = (uint)local_4._1_3_ << 8;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_00554170(0);
  }
  FUN_005fe5f0(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

