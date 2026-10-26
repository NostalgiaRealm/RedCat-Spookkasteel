/*
 * COMCTL32.DLL::ImageList_GetIconSize at 004238e8
 * BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl, int * cx, int * cy)
 * Address ranges: 004238e8-004238ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_GetIconSize
 */

BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl,int *cx,int *cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004238e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_GetIconSize(himl,cx,cy);
  return BVar1;
}

