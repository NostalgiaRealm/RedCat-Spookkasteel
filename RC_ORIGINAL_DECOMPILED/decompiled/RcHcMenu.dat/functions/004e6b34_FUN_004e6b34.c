/*
 * FUN_004e6b34 at 004e6b34
 * undefined4 __register FUN_004e6b34(int param_1)
 * Address ranges: 004e6b34-004e6b4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e6b34(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x1c))();
  }
  return 0;
}

