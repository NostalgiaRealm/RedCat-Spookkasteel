/*
 * FUN_10008dd4 at 10008dd4
 * int __cdecl FUN_10008dd4(LPSTR param_1, WCHAR param_2)
 * Address ranges: 10008dd4-10008e3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10008dd4(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_100e3c74 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_100e3c84,0x220,&param_2,1,lpMultiByteStr,DAT_100110f0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10007de8();
  *pDVar2 = 0x2a;
  return -1;
}

