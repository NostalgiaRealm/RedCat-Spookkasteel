/*
 * FUN_004c6ec4 at 004c6ec4
 * undefined4 __register FUN_004c6ec4(int param_1)
 * Address ranges: 004c6ec4-004c6ee1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004c6ec4(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),*(int *)(*(int *)(param_1 + 4) + 8) == 0)
  ;
}

