/*
 * FUN_0050f9d4 at 0050f9d4
 * undefined4 __register FUN_0050f9d4(int param_1)
 * Address ranges: 0050f9d4-0050f9f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050f9d4(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x218) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x218) + 0x48));
}

