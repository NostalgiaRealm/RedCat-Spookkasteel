/*
 * FUN_004e6b50 at 004e6b50
 * undefined4 __register FUN_004e6b50(int param_1)
 * Address ranges: 004e6b50-004e6b6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e6b50(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  }
  return 0;
}

