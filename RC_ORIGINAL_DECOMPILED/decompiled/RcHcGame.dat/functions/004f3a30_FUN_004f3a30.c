/*
 * FUN_004f3a30 at 004f3a30
 * undefined FUN_004f3a30(void)
 * Address ranges: 004f3a30-004f3cec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f3a30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00634815;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f438;
  local_4 = 0xd;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x8b);
  local_4 = CONCAT31(local_4._1_3_,0xe);
  if ((undefined4 *)param_1[0x102] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x102])(1);
    param_1[0x102] = 0;
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
    param_1[0xc] = 0;
  }
  FUN_004faab0();
  *(undefined1 *)(param_1 + 0xb) = 1;
  local_4._0_1_ = 0xd;
  FUN_005ae770();
  local_4._0_1_ = 0xf;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  local_4._0_1_ = 0xc;
  FUN_00514430();
  local_4._0_1_ = 0xb;
  FUN_0044b430();
  iVar1 = param_1[0x105];
  iVar2 = param_1[0x104];
  local_4._0_1_ = 10;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_00554170(0);
  }
  FUN_005fe5f0(param_1[0x104]);
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  local_4._0_1_ = 0x10;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  local_4._0_1_ = 9;
  FUN_004f2780();
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  local_4._0_1_ = 6;
  FUN_00442da0(param_1[0xe2],param_1[0xe3]);
  FUN_005fe5f0(param_1[0xe2]);
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  local_4._0_1_ = 0x12;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  local_4._0_1_ = 5;
  FUN_00442da0(param_1[0xdb],param_1[0xdc]);
  FUN_005fe5f0(param_1[0xdb]);
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  local_4._0_1_ = 4;
  FUN_00567850();
  local_4._0_1_ = 3;
  FUN_00567850();
  local_4._0_1_ = 2;
  FUN_00566bf0();
  local_4._0_1_ = 0x13;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  local_4._0_1_ = 1;
  FUN_00587d50(param_1[0xf],param_1[0x10]);
  FUN_005fe5f0(param_1[0xf]);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_0064e794;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

