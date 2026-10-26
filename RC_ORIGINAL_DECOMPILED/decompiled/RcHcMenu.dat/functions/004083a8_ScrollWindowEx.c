/*
 * USER32.DLL::ScrollWindowEx at 004083a8
 * int __stdcall ScrollWindowEx(HWND hWnd, int dx, int dy, RECT * prcScroll, RECT * prcClip, HRGN hrgnUpdate, LPRECT prcUpdate, UINT flags)
 * Address ranges: 004083a8-004083ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ScrollWindowEx
 */

int __stdcall
ScrollWindowEx(HWND hWnd,int dx,int dy,RECT *prcScroll,RECT *prcClip,HRGN hrgnUpdate,
              LPRECT prcUpdate,UINT flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ScrollWindowEx(hWnd,dx,dy,prcScroll,prcClip,hrgnUpdate,prcUpdate,flags);
  return iVar1;
}

