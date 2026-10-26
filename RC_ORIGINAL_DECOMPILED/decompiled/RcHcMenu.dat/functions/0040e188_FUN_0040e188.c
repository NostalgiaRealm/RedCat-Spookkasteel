/*
 * FUN_0040e188 at 0040e188
 * uint __register FUN_0040e188(uint * param_1)
 * Address ranges: 0040e188-0040e195
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0040e188(uint *param_1)

{
  return *param_1 ^ param_1[1] ^ param_1[2] ^ param_1[3];
}

