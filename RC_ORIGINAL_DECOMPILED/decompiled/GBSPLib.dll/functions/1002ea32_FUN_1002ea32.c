/*
 * FUN_1002ea32 at 1002ea32
 * undefined FUN_1002ea32(void)
 * Address ranges: 1002ea32-1002ea98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_1002ea32(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1003f438);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10030f11(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1003f438,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1002ea1f(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1002ea8d;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1002ea8d:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

