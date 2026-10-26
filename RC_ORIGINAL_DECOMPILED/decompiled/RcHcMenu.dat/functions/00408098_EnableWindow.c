/*
 * USER32.DLL::EnableWindow at 00408098
 * BOOL __stdcall EnableWindow(HWND hWnd, BOOL bEnable)
 * Address ranges: 00408098-0040809d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::EnableWindow
 */

BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EnableWindow(hWnd,bEnable);
  return BVar1;
}

