/*
 * FUN_1001b767 at 1001b767
 * undefined FUN_1001b767(void)
 * Address ranges: 1001b767-1001b7cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_1001b767(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10023aa8);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1001d7c9(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10023aa8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1001b754(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1001b7c2;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1001b7c2:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

