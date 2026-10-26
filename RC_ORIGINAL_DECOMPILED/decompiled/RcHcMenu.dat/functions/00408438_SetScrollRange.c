/*
 * USER32.DLL::SetScrollRange at 00408438
 * BOOL __stdcall SetScrollRange(HWND hWnd, int nBar, int nMinPos, int nMaxPos, BOOL bRedraw)
 * Address ranges: 00408438-0040843d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetScrollRange
 */

BOOL __stdcall SetScrollRange(HWND hWnd,int nBar,int nMinPos,int nMaxPos,BOOL bRedraw)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetScrollRange(hWnd,nBar,nMinPos,nMaxPos,bRedraw);
  return BVar1;
}

