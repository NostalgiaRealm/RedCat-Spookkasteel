/*
 * FUN_00486f7c at 00486f7c
 * undefined __register FUN_00486f7c(int param_1, int param_2)
 * Address ranges: 00486f7c-00486ff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00486f7c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x210)) {
    if (*(int **)(param_1 + 0x210) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x210) + 0x30))();
      if (param_1 == iVar1) {
        (**(code **)(**(int **)(param_1 + 0x210) + 0x34))(*(int **)(param_1 + 0x210),0);
      }
    }
    *(int *)(param_1 + 0x210) = param_2;
    if (param_2 != 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x210) + 0x30))();
      if (iVar1 != 0) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x210) + 0x30))();
        if (param_1 != iVar1) {
          iVar1 = (**(code **)(**(int **)(param_1 + 0x210) + 0x30))();
          FUN_00486f7c(iVar1,0);
        }
      }
      (**(code **)(**(int **)(param_1 + 0x210) + 0x34))(*(int **)(param_1 + 0x210),param_1);
    }
  }
  return;
}

