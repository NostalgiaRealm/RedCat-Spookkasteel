/*
 * FUN_004746a4 at 004746a4
 * bool __register FUN_004746a4(int param_1)
 * Address ranges: 004746a4-004746c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004746a4(int param_1)

{
  return (*(byte *)(param_1 + 0x30) & 1) != 0;
}

