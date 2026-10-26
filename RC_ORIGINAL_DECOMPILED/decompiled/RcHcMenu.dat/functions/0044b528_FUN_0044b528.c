/*
 * FUN_0044b528 at 0044b528
 * uint __register FUN_0044b528(int param_1)
 * Address ranges: 0044b528-0044b52d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0044b528(int param_1)

{
  return CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4e)) ^ 1;
}

