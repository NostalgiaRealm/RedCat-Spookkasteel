/*
 * FUN_1000ab37 at 1000ab37
 * undefined4 __stdcall FUN_1000ab37(void)
 * Address ranges: 1000ab37-1000ab8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ab37(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000a0c5();
  DAT_10015c28 = TlsAlloc();
  if (DAT_10015c28 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000c244(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10015c28,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000aba9((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

