/*
 * USER32.DLL::DestroyWindow at 00408030
 * BOOL __stdcall DestroyWindow(HWND hWnd)
 * Address ranges: 00408030-00408035
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DestroyWindow
 */

BOOL __stdcall DestroyWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyWindow(hWnd);
  return BVar1;
}

