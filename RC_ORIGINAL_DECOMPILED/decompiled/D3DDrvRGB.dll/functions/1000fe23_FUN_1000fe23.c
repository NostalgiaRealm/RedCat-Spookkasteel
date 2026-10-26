/*
 * FUN_1000fe23 at 1000fe23
 * DWORD __cdecl FUN_1000fe23(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 1000fe23-1000fe87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD __cdecl FUN_1000fe23(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100ec800) &&
     ((*(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000e627(param_1);
    DVar1 = FUN_1000fe88(param_1,param_2,param_3);
    FUN_1000e686(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1000e3b5();
  *pDVar2 = 9;
  pDVar2 = FUN_1000e3be();
  *pDVar2 = 0;
  return 0xffffffff;
}

