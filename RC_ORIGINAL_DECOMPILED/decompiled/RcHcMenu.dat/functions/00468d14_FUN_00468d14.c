/*
 * FUN_00468d14 at 00468d14
 * undefined __register FUN_00468d14(int param_1)
 * Address ranges: 00468d14-00468d27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468d14(int param_1)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))();
  }
  return;
}

