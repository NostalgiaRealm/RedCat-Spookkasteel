/*
 * USER32.DLL::UpdateWindow at 004084c8
 * BOOL __stdcall UpdateWindow(HWND hWnd)
 * Address ranges: 004084c8-004084cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::UpdateWindow
 */

BOOL __stdcall UpdateWindow(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004084c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateWindow(hWnd);
  return BVar1;
}

