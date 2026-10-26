/*
 * FUN_0040d9bc at 0040d9bc
 * undefined4 __stdcall FUN_0040d9bc(void)
 * Address ranges: 0040d9bc-0040d9f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040d9bc(void)

{
  DAT_00413ddc = HeapAlloc(DAT_00413de0,0,0x140);
  if (DAT_00413ddc == (LPVOID)0x0) {
    return 0;
  }
  DAT_00413dd4 = 0;
  DAT_00413dd8 = 0;
  DAT_00413dd0 = DAT_00413ddc;
  DAT_00413dc8 = 0x10;
  return 1;
}

