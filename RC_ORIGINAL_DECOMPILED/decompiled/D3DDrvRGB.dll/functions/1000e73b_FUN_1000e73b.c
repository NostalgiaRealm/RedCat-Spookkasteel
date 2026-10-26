/*
 * FUN_1000e73b at 1000e73b
 * int __cdecl FUN_1000e73b(uint param_1, char * param_2, uint param_3)
 * Address ranges: 1000e73b-1000e79f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000e73b(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100ec800) &&
     ((*(byte *)((&DAT_100ec700)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000e627(param_1);
    iVar1 = FUN_1000e7a0(param_1,param_2,param_3);
    FUN_1000e686(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000e3b5();
  *pDVar2 = 9;
  pDVar2 = FUN_1000e3be();
  *pDVar2 = 0;
  return -1;
}

