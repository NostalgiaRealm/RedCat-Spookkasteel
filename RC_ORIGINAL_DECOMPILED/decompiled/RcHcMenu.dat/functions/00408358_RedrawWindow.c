/*
 * USER32.DLL::RedrawWindow at 00408358
 * BOOL __stdcall RedrawWindow(HWND hWnd, RECT * lprcUpdate, HRGN hrgnUpdate, UINT flags)
 * Address ranges: 00408358-0040835d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::RedrawWindow
 */

BOOL __stdcall RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RedrawWindow(hWnd,lprcUpdate,hrgnUpdate,flags);
  return BVar1;
}

