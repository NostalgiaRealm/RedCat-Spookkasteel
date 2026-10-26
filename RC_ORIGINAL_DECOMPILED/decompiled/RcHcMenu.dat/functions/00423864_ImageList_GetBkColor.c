/*
 * COMCTL32.DLL::ImageList_GetBkColor at 00423864
 * COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)
 * Address ranges: 00423864-00423869
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_GetBkColor
 */

COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00423864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = ImageList_GetBkColor(himl);
  return CVar1;
}

