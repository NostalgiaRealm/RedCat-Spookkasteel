/*
 * FUN_0060d721 at 0060d721
 * undefined FUN_0060d721(void)
 * Address ranges: 0060d721-0060d7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPSTR FUN_0060d721(LPSTR param_1,LPCSTR param_2,DWORD param_3)

{
  LPCSTR lpFileName;
  LPSTR pCVar1;
  DWORD DVar2;
  
  lpFileName = param_2;
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    pCVar1 = param_1;
    if (param_1 == (LPSTR)0x0) {
      pCVar1 = _malloc(0x104);
      if (pCVar1 == (LPSTR)0x0) {
        DAT_0070ff98 = 0xc;
        return (LPSTR)0x0;
      }
      param_3 = 0x104;
    }
    DVar2 = GetFullPathNameA(lpFileName,param_3,pCVar1,&param_2);
    if (DVar2 < param_3) {
      if (DVar2 != 0) {
        return pCVar1;
      }
      if (param_1 == (LPSTR)0x0) {
        FUN_0060b25d(pCVar1);
      }
      DVar2 = GetLastError();
      FUN_0061ba49(DVar2);
    }
    else {
      if (param_1 == (LPSTR)0x0) {
        FUN_0060b25d(pCVar1);
      }
      DAT_0070ff98 = 0x22;
    }
    return (LPSTR)0x0;
  }
  pCVar1 = (LPSTR)FUN_0061b92e(param_1,param_3);
  return pCVar1;
}

