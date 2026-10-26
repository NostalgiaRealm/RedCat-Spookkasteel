/*
 * FUN_1000de33 at 1000de33
 * DWORD __cdecl FUN_1000de33(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 1000de33-1000de97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __cdecl FUN_1000de33(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101c3dc0) &&
     ((*(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c637(param_1);
    DVar1 = FUN_1000de98(param_1,param_2,param_3);
    FUN_1000c696(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000c3c5();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c3ce();
  *pDVar2 = 0;
  return 0xffffffff;
}

