/*
 * FUN_1000c74b at 1000c74b
 * int __cdecl FUN_1000c74b(uint param_1, char * param_2, uint param_3)
 * Address ranges: 1000c74b-1000c7af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000c74b(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101c3dc0) &&
     ((*(byte *)((&DAT_101c3cc0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000c637(param_1);
    iVar1 = FUN_1000c7b0(param_1,param_2,param_3);
    FUN_1000c696(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000c3c5();
  *pDVar2 = 9;
  pDVar2 = FUN_1000c3ce();
  *pDVar2 = 0;
  return -1;
}

