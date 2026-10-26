/*
 * FUN_1000c9bd at 1000c9bd
 * int __cdecl FUN_1000c9bd(LPSTR param_1, WCHAR param_2)
 * Address ranges: 1000c9bd-1000ca25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000c9bd(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_101c3918 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_101c3928,0x220,&param_2,1,lpMultiByteStr,DAT_10015ce8,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_1000c3c5();
  *pDVar2 = 0x2a;
  return -1;
}

