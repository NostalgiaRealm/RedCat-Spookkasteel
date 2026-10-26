/*
 * USER32.DLL::SetClassLongA at 004083c8
 * DWORD __stdcall SetClassLongA(HWND hWnd, int nIndex, LONG dwNewLong)
 * Address ranges: 004083c8-004083cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetClassLongA
 */

DWORD __stdcall SetClassLongA(HWND hWnd,int nIndex,LONG dwNewLong)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetClassLongA(hWnd,nIndex,dwNewLong);
  return DVar1;
}

