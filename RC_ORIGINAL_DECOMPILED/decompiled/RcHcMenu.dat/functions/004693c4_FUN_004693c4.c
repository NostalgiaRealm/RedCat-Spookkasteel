/*
 * FUN_004693c4 at 004693c4
 * undefined4 __register FUN_004693c4(int param_1)
 * Address ranges: 004693c4-004693e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004693c4(int param_1)

{
  if (((*(int *)(param_1 + 0x74) == 0) && (*(int *)(param_1 + 0x78) == 0)) &&
     (*(int *)(param_1 + 0x80) == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

