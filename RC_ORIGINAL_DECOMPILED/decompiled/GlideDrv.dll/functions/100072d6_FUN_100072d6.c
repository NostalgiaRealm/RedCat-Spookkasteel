/*
 * FUN_100072d6 at 100072d6
 * DWORD * __stdcall FUN_100072d6(void)
 * Address ranges: 100072d6-1000733c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_100072d6(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10010cb0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10007bb7(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10010cb0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100072c3((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10007331;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10007331:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

