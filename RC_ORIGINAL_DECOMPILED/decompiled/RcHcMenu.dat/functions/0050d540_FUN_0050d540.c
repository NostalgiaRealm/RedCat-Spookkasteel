/*
 * FUN_0050d540 at 0050d540
 * undefined4 __register FUN_0050d540(int param_1)
 * Address ranges: 0050d540-0050d55e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050d540(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x280) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x280) + 0x4c));
}

