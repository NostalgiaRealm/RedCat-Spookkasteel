/*
 * FUN_00469390 at 00469390
 * undefined __register FUN_00469390(int param_1, int * param_2)
 * Address ranges: 00469390-004693c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469390(int param_1,int *param_2)

{
  if ((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x130))(*(int **)(param_1 + 0x28),param_1,param_2);
    return;
  }
  FUN_00403e04(param_2,*(undefined4 **)(param_1 + 0x2c));
  return;
}

