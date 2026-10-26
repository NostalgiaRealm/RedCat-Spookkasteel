/*
 * FUN_00413f88 at 00413f88
 * undefined __register FUN_00413f88(int param_1, int * param_2)
 * Address ranges: 00413f88-00413fb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413f88(int param_1,int *param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  }
  FUN_00406ab8((int *)(param_1 + 8),param_2);
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),param_1);
  }
  return;
}

