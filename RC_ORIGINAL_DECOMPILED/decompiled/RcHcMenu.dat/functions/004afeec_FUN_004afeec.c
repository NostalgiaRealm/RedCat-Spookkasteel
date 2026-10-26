/*
 * FUN_004afeec at 004afeec
 * bool __register FUN_004afeec(int param_1)
 * Address ranges: 004afeec-004aff08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004afeec(int param_1)

{
  return (*(byte *)(param_1 + 0x20) & 0x10) != 0;
}

