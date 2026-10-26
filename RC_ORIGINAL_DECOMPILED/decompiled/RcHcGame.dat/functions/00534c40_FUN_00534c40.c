/*
 * FUN_00534c40 at 00534c40
 * undefined FUN_00534c40(void)
 * Address ranges: 00534c40-00534cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00534c40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b6de;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x70);
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &pvStack_c;
    *(int *)(iVar1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0(0);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  local_4 = (uint)local_4._1_3_ << 8;
  for (; puVar4 != puVar2; puVar4 = puVar4 + 7) {
    (**(code **)*puVar4)(0);
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

