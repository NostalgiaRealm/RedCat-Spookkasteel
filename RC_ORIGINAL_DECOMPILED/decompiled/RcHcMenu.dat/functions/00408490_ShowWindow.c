/*
 * USER32.DLL::ShowWindow at 00408490
 * BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow)
 * Address ranges: 00408490-00408495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ShowWindow
 */

BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowWindow(hWnd,nCmdShow);
  return BVar1;
}

