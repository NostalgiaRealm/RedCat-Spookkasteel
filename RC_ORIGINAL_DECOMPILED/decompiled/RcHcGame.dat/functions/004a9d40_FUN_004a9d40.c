/*
 * FUN_004a9d40 at 004a9d40
 * undefined FUN_004a9d40(void)
 * Address ranges: 004a9d40-004a9e08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004a9d40(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062deb9;
  local_4 = 0;
  iVar1 = *(int *)(param_1 + 0x148);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (iVar2 = *(int *)(param_1 + 0x144); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    local_4._1_3_ = (undefined3)(local_4 >> 8);
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004ad270();
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

