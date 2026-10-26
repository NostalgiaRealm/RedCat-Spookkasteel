/*
 * FUN_00413a90 at 00413a90
 * undefined FUN_00413a90(void)
 * Address ranges: 00413a90-00413b79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00413a90(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  void *apvStack_1c [2];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00621078;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  }
  FUN_00427ab0();
  uVar1 = (**(code **)(*param_1 + 0x48))();
  iVar2 = FUN_00429600(apvStack_1c,uVar1);
  param_1[0x7a] = *(int *)(iVar2 + 4);
  uVar1 = (**(code **)(*param_1 + 0x48))(apvStack_1c);
  iVar2 = FUN_004298c0(auStack_2c,uVar1);
  param_1[0x7b] = *(int *)(iVar2 + 4);
  (**(code **)(*param_1 + 0x48))(auStack_20);
  (**(code **)(*param_1 + 0x4c))(&stack0xffffffc4);
  uStack_14 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar2 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar2, iVar2 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = apvStack_1c[0];
  return;
}

