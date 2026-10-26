/*
 * FUN_00531270 at 00531270
 * undefined __register FUN_00531270(int param_1)
 * Address ranges: 00531270-005312e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00531270(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0045ba40(*(int *)(param_1 + 0x208));
  if (1 < iVar1) {
    uVar2 = FUN_0045bac8(*(int *)(param_1 + 0x20c));
    uVar2 = (**(code **)(**(int **)(param_1 + 0x20c) + 0x20))(*(int **)(param_1 + 0x20c),uVar2);
    (**(code **)(**(int **)(param_1 + 0x20c) + 0x10))(*(int **)(param_1 + 0x20c),uVar2);
  }
  uVar2 = FUN_0045bac8(*(int *)(param_1 + 0x208));
  uVar2 = (**(code **)(**(int **)(param_1 + 0x208) + 0x20))(*(int **)(param_1 + 0x208),uVar2);
  (**(code **)(**(int **)(param_1 + 0x208) + 0x10))(*(int **)(param_1 + 0x208),uVar2);
  return;
}

