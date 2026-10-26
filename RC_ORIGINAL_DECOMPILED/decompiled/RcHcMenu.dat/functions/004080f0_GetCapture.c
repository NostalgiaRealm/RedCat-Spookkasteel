/*
 * USER32.DLL::GetCapture at 004080f0
 * HWND __stdcall GetCapture(void)
 * Address ranges: 004080f0-004080f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetCapture
 */

HWND __stdcall GetCapture(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004080f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetCapture();
  return pHVar1;
}

