/*
 * FUN_00616bf8 at 00616bf8
 * undefined FUN_00616bf8(void)
 * Address ranges: 00616bf8-00616c0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00616bf8(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

