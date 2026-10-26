/*
 * FUN_1002e9ad at 1002e9ad
 * undefined FUN_1002e9ad(void)
 * Address ranges: 1002e9ad-1002ea00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002e9ad(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1002e784();
  DAT_1003f438 = TlsAlloc();
  if (DAT_1003f438 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10030f11(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1003f438,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1002ea1f(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

