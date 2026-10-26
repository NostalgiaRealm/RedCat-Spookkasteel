/*
 * FUN_00408564 at 00408564
 * uint __register FUN_00408564(uint param_1, uint param_2)
 * Address ranges: 00408564-0040856f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00408564(uint param_1,uint param_2)

{
  return param_1 | (param_2 & 0xff0000) << 8;
}

