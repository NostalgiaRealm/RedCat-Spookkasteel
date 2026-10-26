/*
 * FUN_00519194 at 00519194
 * uint __register FUN_00519194(uint param_1, uint param_2)
 * Address ranges: 00519194-005191a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00519194(uint param_1,uint param_2)

{
  return (param_1 & 0xff) << 0x10 | param_2 & 0xff;
}

