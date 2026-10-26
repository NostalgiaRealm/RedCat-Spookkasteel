/*
 * USER32.DLL::SetScrollPos at 00408430
 * int __stdcall SetScrollPos(HWND hWnd, int nBar, int nPos, BOOL bRedraw)
 * Address ranges: 00408430-00408435
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetScrollPos
 */

int __stdcall SetScrollPos(HWND hWnd,int nBar,int nPos,BOOL bRedraw)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetScrollPos(hWnd,nBar,nPos,bRedraw);
  return iVar1;
}

