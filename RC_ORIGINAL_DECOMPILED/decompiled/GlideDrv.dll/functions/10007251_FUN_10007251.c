/*
 * FUN_10007251 at 10007251
 * undefined4 __stdcall FUN_10007251(void)
 * Address ranges: 10007251-100072a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007251(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_100060dc();
  DAT_10010cb0 = TlsAlloc();
  if (DAT_10010cb0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10007bb7(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10010cb0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100072c3((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

