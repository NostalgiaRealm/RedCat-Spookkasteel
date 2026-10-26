/*
 * USER32.DLL::SetParent at 00408410
 * HWND __stdcall SetParent(HWND hWndChild, HWND hWndNewParent)
 * Address ranges: 00408410-00408415
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetParent
 */

HWND __stdcall SetParent(HWND hWndChild,HWND hWndNewParent)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetParent(hWndChild,hWndNewParent);
  return pHVar1;
}

