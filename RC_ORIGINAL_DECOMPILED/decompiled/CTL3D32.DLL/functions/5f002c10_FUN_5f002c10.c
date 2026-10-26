/*
 * FUN_5f002c10 at 5f002c10
 * undefined4 __cdecl FUN_5f002c10(undefined4 param_1, ushort param_2)
 * Address ranges: 5f002c10-5f002c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_5f002c10(undefined4 param_1,ushort param_2)

{
  if (0x35e < DAT_5f005260) {
    return 0;
  }
  if ((param_2 & 0xffdf) < 10) {
    return 1;
  }
  return 0;
}

