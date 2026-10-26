/*
 * USER32.DLL::SetWindowRgn at 00408470
 * int __stdcall SetWindowRgn(HWND hWnd, HRGN hRgn, BOOL bRedraw)
 * Address ranges: 00408470-00408475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetWindowRgn
 */

int __stdcall SetWindowRgn(HWND hWnd,HRGN hRgn,BOOL bRedraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetWindowRgn(hWnd,hRgn,bRedraw);
  return iVar1;
}

