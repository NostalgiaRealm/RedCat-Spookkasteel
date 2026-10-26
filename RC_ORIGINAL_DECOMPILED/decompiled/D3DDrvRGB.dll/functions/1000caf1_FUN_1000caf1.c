/*
 * FUN_1000caf1 at 1000caf1
 * DWORD * __stdcall FUN_1000caf1(void)
 * Address ranges: 1000caf1-1000cb57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_1000caf1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100190f0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000e234(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100190f0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000cade((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1000cb4c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000cb4c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

