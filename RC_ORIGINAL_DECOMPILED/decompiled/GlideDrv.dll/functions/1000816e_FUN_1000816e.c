/*
 * FUN_1000816e at 1000816e
 * DWORD __cdecl FUN_1000816e(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 1000816e-100081d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __cdecl FUN_1000816e(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000805a(param_1);
    DVar1 = FUN_100081d3(param_1,param_2,param_3);
    FUN_100080b9(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return 0xffffffff;
}

