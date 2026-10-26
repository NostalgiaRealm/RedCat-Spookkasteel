/*
 * FUN_005215b0 at 005215b0
 * undefined __register FUN_005215b0(int param_1, int param_2)
 * Address ranges: 005215b0-005215e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005215b0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x210) != param_2) {
    *(int *)(param_1 + 0x210) = param_2;
    (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))();
  }
  return;
}

