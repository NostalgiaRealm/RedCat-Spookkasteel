/*
 * FUN_0053bd80 at 0053bd80
 * undefined FUN_0053bd80(void)
 * Address ranges: 0053bd80-0053be19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053bd80(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_0063bf50;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f7a0;
  iVar1 = param_1[8];
  iVar2 = param_1[7];
  local_4 = 0;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x24) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005fe5f0(param_1[7]);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

