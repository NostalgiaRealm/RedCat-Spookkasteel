/*
 * FUN_1000a1d0 at 1000a1d0
 * undefined4 __stdcall FUN_1000a1d0(void)
 * Address ranges: 1000a1d0-1000a20d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000a1d0(void)

{
  DAT_101c3de8 = HeapAlloc(DAT_101c3dec,0,0x140);
  if (DAT_101c3de8 == (LPVOID)0x0) {
    return 0;
  }
  DAT_101c3de0 = 0;
  DAT_101c3de4 = 0;
  DAT_101c3ddc = DAT_101c3de8;
  DAT_101c3dd4 = 0x10;
  return 1;
}

