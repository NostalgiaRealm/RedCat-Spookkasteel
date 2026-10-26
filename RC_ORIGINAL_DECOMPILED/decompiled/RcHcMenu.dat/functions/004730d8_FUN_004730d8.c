/*
 * FUN_004730d8 at 004730d8
 * undefined4 __register FUN_004730d8(int param_1)
 * Address ranges: 004730d8-004730e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004730d8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x48) * 4);
}

