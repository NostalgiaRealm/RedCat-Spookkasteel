/*
 * FUN_10004886 at 10004886
 * int __cdecl FUN_10004886(uint param_1, char * param_2, uint param_3)
 * Address ranges: 10004886-100048ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10004886(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_101f5a80) &&
     ((*(byte *)((&DAT_101f5980)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000805a(param_1);
    iVar1 = FUN_100048eb(param_1,param_2,param_3);
    FUN_100080b9(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 9;
  pDVar2 = FUN_10007df1();
  *pDVar2 = 0;
  return -1;
}

