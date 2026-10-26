/*
 * FUN_1000b340 at 1000b340
 * undefined4 __stdcall FUN_1000b340(void)
 * Address ranges: 1000b340-1000b37d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000b340(void)

{
  DAT_100ec828 = HeapAlloc(DAT_100ec82c,0,0x140);
  if (DAT_100ec828 == (LPVOID)0x0) {
    return 0;
  }
  DAT_100ec820 = 0;
  DAT_100ec824 = 0;
  DAT_100ec81c = DAT_100ec828;
  DAT_100ec814 = 0x10;
  return 1;
}

