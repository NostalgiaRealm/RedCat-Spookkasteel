/*
 * FUN_004c88dc at 004c88dc
 * undefined4 __register FUN_004c88dc(int param_1)
 * Address ranges: 004c88dc-004c88fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004c88dc(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x134) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x134) + 0x20));
}

