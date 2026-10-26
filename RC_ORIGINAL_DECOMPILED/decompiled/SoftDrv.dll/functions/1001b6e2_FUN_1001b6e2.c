/*
 * FUN_1001b6e2 at 1001b6e2
 * undefined FUN_1001b6e2(void)
 * Address ranges: 1001b6e2-1001b735
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001b6e2(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1001a39f();
  DAT_10023aa8 = TlsAlloc();
  if (DAT_10023aa8 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1001d7c9(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10023aa8,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1001b754(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

