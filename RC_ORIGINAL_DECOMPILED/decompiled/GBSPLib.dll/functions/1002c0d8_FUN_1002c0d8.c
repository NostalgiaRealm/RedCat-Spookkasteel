/*
 * FUN_1002c0d8 at 1002c0d8
 * undefined FUN_1002c0d8(void)
 * Address ranges: 1002c0d8-1002c0ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002c0d8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

