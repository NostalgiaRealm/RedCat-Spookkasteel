/*
 * FUN_004326b8 at 004326b8
 * int __register FUN_004326b8(int param_1)
 * Address ranges: 004326b8-004326c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004326b8(int param_1)

{
  if (0 < *(int *)(param_1 + 0x94)) {
    return *(int *)(param_1 + 0x94);
  }
  return *(int *)(param_1 + 0x38);
}

