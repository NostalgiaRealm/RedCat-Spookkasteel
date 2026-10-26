/*
 * FUN_00501798 at 00501798
 * bool __register FUN_00501798(int param_1)
 * Address ranges: 00501798-005017b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00501798(int param_1)

{
  return (*(byte *)(param_1 + 0x25c) & 2) != 0;
}

