/*
 * FUN_1000452c at 1000452c
 * undefined4 __cdecl FUN_1000452c(uint param_1)
 * Address ranges: 1000452c-10004588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_1000452c(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000805a(param_1);
    uVar1 = FUN_10004589(param_1);
    FUN_100080b9(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return 0xffffffff;
}

