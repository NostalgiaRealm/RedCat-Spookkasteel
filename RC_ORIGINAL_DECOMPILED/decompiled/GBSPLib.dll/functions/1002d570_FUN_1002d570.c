/*
 * FUN_1002d570 at 1002d570
 * undefined FUN_1002d570(void)
 * Address ranges: 1002d570-1002d5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002d570(undefined4 param_1)

{
  DAT_1052a9ac = HeapAlloc(DAT_1052a9b4,0,0x140);
  if (DAT_1052a9ac == (LPVOID)0x0) {
    return 0;
  }
  DAT_1052a9a4 = 0;
  DAT_1052a9a8 = 0;
  DAT_1052a9a0 = DAT_1052a9ac;
  DAT_1052a9b0 = param_1;
  DAT_1052a998 = 0x10;
  return 1;
}

