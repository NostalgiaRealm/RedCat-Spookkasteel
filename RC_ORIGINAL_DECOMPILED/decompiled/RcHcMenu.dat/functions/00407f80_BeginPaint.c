/*
 * USER32.DLL::BeginPaint at 00407f80
 * HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
 * Address ranges: 00407f80-00407f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::BeginPaint
 */

HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = BeginPaint(hWnd,lpPaint);
  return pHVar1;
}

