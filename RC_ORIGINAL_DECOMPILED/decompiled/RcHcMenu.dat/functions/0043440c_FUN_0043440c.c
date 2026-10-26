/*
 * FUN_0043440c at 0043440c
 * undefined4 __register FUN_0043440c(int param_1)
 * Address ranges: 0043440c-0043442b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0043440c(int param_1)

{
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    param_1 = (**(code **)(**(int **)(param_1 + 0x5c) + 8))();
    if ((char)param_1 != '\0') {
      return 0;
    }
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

