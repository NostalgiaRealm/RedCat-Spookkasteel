/*
 * FUN_0053de60 at 0053de60
 * undefined FUN_0053de60(void)
 * Address ranges: 0053de60-0053df4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0053de60(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063c243;
  iVar1 = *(int *)(param_1 + 8);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x38) {
    local_4 = 1;
    FUN_00587d50(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28));
    FUN_00548d30(*(int *)(iVar2 + 0x24),*(int *)(iVar2 + 0x2c) - *(int *)(iVar2 + 0x24) >> 3);
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    local_4 = local_4 & 0xffffff00;
    FUN_00548ca0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18));
    FUN_00548d30(*(int *)(iVar2 + 0x14),*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 0x14) >> 4);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

