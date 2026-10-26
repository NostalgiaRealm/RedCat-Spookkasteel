/*
 * FUN_004326a4 at 004326a4
 * int __register FUN_004326a4(int param_1)
 * Address ranges: 004326a4-004326b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004326a4(int param_1)

{
  if (0 < *(int *)(param_1 + 0x98)) {
    return *(int *)(param_1 + 0x98);
  }
  return *(int *)(param_1 + 0x3c);
}

