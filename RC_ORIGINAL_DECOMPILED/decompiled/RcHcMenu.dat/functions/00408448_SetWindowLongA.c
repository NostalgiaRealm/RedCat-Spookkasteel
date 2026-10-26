/*
 * USER32.DLL::SetWindowLongA at 00408448
 * LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * Address ranges: 00408448-0040844d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetWindowLongA
 */

LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = SetWindowLongA(hWnd,nIndex,dwNewLong);
  return LVar1;
}

