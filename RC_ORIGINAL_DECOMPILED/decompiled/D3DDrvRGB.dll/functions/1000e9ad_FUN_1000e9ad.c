/*
 * FUN_1000e9ad at 1000e9ad
 * int __cdecl FUN_1000e9ad(LPSTR param_1, WCHAR param_2)
 * Address ranges: 1000e9ad-1000ea15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000e9ad(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_100ec35c == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_100ec36c,0x220,&param_2,1,lpMultiByteStr,DAT_100191b0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000e3b5();
  *pDVar2 = 0x2a;
  return -1;
}

