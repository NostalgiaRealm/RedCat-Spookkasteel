/*
 * FUN_004030fb at 004030fb
 * int __cdecl FUN_004030fb(LPSTR param_1, WCHAR param_2)
 * Address ranges: 004030fb-00403162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_004030fb(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_004080e8 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_004080f8,0x220,&param_2,1,lpMultiByteStr,DAT_00407aa0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  DAT_00407f64 = 0x2a;
  return -1;
}

