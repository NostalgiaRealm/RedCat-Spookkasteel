/*
 * USER32.DLL::SetForegroundWindow at 004083f0
 * BOOL __stdcall SetForegroundWindow(HWND hWnd)
 * Address ranges: 004083f0-004083f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetForegroundWindow
 */

BOOL __stdcall SetForegroundWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetForegroundWindow(hWnd);
  return BVar1;
}

