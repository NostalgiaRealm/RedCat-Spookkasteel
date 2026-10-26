/*
 * FUN_004343ec at 004343ec
 * undefined4 __register FUN_004343ec(int param_1)
 * Address ranges: 004343ec-0043440b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004343ec(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x3c))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

