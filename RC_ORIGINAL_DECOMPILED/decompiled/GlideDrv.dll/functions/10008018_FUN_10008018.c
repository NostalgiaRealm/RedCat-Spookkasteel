/*
 * FUN_10008018 at 10008018
 * undefined4 __cdecl FUN_10008018(uint param_1)
 * Address ranges: 10008018-10008059
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10008018(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_101f5980)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10007de8();
  *pDVar1 = 9;
  pDVar1 = FUN_10007df1();
  *pDVar1 = 0;
  return 0xffffffff;
}

