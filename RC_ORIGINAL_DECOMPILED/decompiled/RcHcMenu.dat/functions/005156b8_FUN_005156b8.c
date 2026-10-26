/*
 * FUN_005156b8 at 005156b8
 * undefined4 __register FUN_005156b8(int param_1)
 * Address ranges: 005156b8-005156d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005156b8(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x280) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x280) + 0x48));
}

