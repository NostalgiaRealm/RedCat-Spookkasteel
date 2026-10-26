/*
 * USER32.DLL::ClientToScreen at 00407fc8
 * BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
 * Address ranges: 00407fc8-00407fcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ClientToScreen
 */

BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ClientToScreen(hWnd,lpPoint);
  return BVar1;
}

