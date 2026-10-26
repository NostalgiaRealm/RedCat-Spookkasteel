/*
 * FUN_0050f994 at 0050f994
 * undefined4 __register FUN_0050f994(int param_1)
 * Address ranges: 0050f994-0050f9b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050f994(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x218) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x218) + 0x4b));
}

