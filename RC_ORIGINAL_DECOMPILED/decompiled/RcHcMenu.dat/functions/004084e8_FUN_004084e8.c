/*
 * FUN_004084e8 at 004084e8
 * uint __register FUN_004084e8(uint param_1, int param_2)
 * Address ranges: 004084e8-004084f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004084e8(uint param_1,int param_2)

{
  return param_1 & 0xffff | param_2 << 0x10;
}

