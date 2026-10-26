/*
 * FUN_004b4b84 at 004b4b84
 * undefined __register FUN_004b4b84(int param_1, int param_2)
 * Address ranges: 004b4b84-004b4bb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b4b84(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 8))(*(int **)(param_1 + 0x28),param_2);
  }
  return;
}

