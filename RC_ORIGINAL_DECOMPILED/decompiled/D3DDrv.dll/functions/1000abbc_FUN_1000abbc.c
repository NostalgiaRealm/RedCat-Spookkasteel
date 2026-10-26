/*
 * FUN_1000abbc at 1000abbc
 * DWORD * __stdcall FUN_1000abbc(void)
 * Address ranges: 1000abbc-1000ac22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

DWORD * FUN_1000abbc(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10015c28);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000c244(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10015c28,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000aba9((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1000ac17;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000ac17:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

