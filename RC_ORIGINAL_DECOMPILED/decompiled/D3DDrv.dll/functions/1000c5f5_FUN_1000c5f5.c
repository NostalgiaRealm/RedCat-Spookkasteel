/*
 * FUN_1000c5f5 at 1000c5f5
 * undefined4 __cdecl FUN_1000c5f5(uint param_1)
 * Address ranges: 1000c5f5-1000c636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000c5f5(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_101c3dc0) &&
     ((*(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_101c3cc0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000c3c5();
  *pDVar1 = 9;
  pDVar1 = FUN_1000c3ce();
  *pDVar1 = 0;
  return 0xffffffff;
}

