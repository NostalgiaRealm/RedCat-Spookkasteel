/*
 * FUN_00402b04 at 00402b04
 * undefined __register FUN_00402b04(void)
 * Address ranges: 00402b04-00402b10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402b04(void)

{
  ushort in_FPUStatusWord;
  unkbyte10 in_ST0;
  
  fcos(in_ST0);
  if ((in_FPUStatusWord & 0x400) == 0) {
    return;
  }
  return;
}

