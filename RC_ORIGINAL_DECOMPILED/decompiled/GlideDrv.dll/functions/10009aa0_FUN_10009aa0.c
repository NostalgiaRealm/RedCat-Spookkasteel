/*
 * FUN_10009aa0 at 10009aa0
 * undefined4 __cdecl FUN_10009aa0(int param_1)
 * Address ranges: 10009aa0-10009ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10009aa0(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}

