/*
 * FUN_1000ca6c at 1000ca6c
 * undefined4 __stdcall FUN_1000ca6c(void)
 * Address ranges: 1000ca6c-1000cabf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ca6c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000b235();
  DAT_100190f0 = TlsAlloc();
  if (DAT_100190f0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000e234(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100190f0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000cade((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

