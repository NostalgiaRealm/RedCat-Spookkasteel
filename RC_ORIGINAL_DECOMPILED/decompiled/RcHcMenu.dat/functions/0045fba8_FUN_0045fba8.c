/*
 * FUN_0045fba8 at 0045fba8
 * bool __register FUN_0045fba8(int param_1)
 * Address ranges: 0045fba8-0045fbc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0045fba8(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 8) != 0;
}

