/*
 * FUN_0040e198 at 0040e198
 * uint __register FUN_0040e198(uint * param_1)
 * Address ranges: 0040e198-0040e1ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0040e198(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 >> 5 | *param_1 << 0x1b) ^ param_1[1];
  uVar1 = (uVar1 >> 5 | uVar1 << 0x1b) ^ param_1[2];
  return (uVar1 >> 5 | uVar1 << 0x1b) ^ param_1[3];
}

