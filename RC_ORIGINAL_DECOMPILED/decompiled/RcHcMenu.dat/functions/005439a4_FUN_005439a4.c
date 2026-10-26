/*
 * FUN_005439a4 at 005439a4
 * undefined4 __register FUN_005439a4(int param_1)
 * Address ranges: 005439a4-005439c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005439a4(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0x48));
}

