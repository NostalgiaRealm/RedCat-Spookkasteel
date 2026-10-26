/*
 * FUN_0050e0a0 at 0050e0a0
 * undefined FUN_0050e0a0(void)
 * Address ranges: 0050e0a0-0050e192
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0050e0a0(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636e8e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  param_1[5] = 0;
  param_1[6] = 0x3d4ccccd;
  param_1[7] = 0;
  param_1[8] = 3;
  *(undefined1 *)(param_1 + 9) = (undefined1)param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4._0_1_ = 2;
  FUN_0054a040();
  *(undefined1 *)(param_1 + 0xd) = 1;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0xe) = *param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x12) = 1;
  *param_1 = &PTR_FUN_0064f550;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004fdf50(param_1[0xb],1,&param_3);
  FUN_0050e870();
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar1 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return param_1;
}

