/*
 * FUN_0053df50 at 0053df50
 * undefined FUN_0053df50(void)
 * Address ranges: 0053df50-0053dff5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053df50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_0063c26b;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f800;
  iVar1 = param_1[7];
  iVar2 = param_1[6];
  local_4 = 0;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_4._0_1_ = 2;
    FUN_00514430();
    local_4._0_1_ = 1;
    FUN_00548b20();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005fe5f0(param_1[6]);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

