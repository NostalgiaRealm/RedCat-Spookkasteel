/*
 * FUN_005317b0 at 005317b0
 * undefined4 __register FUN_005317b0(int param_1)
 * Address ranges: 005317b0-005317d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005317b0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x210) >> 8),
                  *(int *)(*(int *)(param_1 + 0x210) + 0x290) != 0);
}

