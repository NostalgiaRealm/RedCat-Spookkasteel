/*
 * FUN_1000e5e5 at 1000e5e5
 * undefined4 __cdecl FUN_1000e5e5(uint param_1)
 * Address ranges: 1000e5e5-1000e626
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000e5e5(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_100ec800) &&
     ((*(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_100ec700)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000e3b5();
  *pDVar1 = 9;
  pDVar1 = FUN_1000e3be();
  *pDVar1 = 0;
  return 0xffffffff;
}

