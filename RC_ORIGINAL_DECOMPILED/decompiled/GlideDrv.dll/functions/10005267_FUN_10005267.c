/*
 * FUN_10005267 at 10005267
 * undefined4 __cdecl FUN_10005267(undefined4 param_1)
 * Address ranges: 10005267-100052ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005267(undefined4 param_1)

{
  DAT_101f5aa8 = HeapAlloc(DAT_101f5ab0,0,0x140);
  if (DAT_101f5aa8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_101f5aa0 = 0;
  DAT_101f5aa4 = 0;
  DAT_101f5a9c = DAT_101f5aa8;
  DAT_101f5aac = param_1;
  DAT_101f5a94 = 0x10;
  return 1;
}

