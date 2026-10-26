/*
 * FUN_004ca630 at 004ca630
 * undefined4 __register FUN_004ca630(int param_1)
 * Address ranges: 004ca630-004ca63a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004ca630(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 4) >> 8),*(int *)(*(int *)(param_1 + 4) + 8) == 0)
  ;
}

