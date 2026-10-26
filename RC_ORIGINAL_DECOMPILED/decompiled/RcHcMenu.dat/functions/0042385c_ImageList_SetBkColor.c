/*
 * COMCTL32.DLL::ImageList_SetBkColor at 0042385c
 * COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl, COLORREF clrBk)
 * Address ranges: 0042385c-00423861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_SetBkColor
 */

COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_SetBkColor(himl,clrBk);
  return CVar1;
}

