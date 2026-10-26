/*
 * FUN_10009ae4 at 10009ae4
 * undefined4 __cdecl FUN_10009ae4(uint param_1)
 * Address ranges: 10009ae4-10009b40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10009ae4(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100ec800) &&
     ((*(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000e627(param_1);
    uVar1 = FUN_10009b41(param_1);
    FUN_1000e686(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000e3b5();
  *pDVar2 = 9;
  pDVar2 = FUN_1000e3be();
  *pDVar2 = 0;
  return 0xffffffff;
}

