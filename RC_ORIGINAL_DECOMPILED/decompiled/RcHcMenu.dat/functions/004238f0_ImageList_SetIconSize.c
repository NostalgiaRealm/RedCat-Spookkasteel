/*
 * COMCTL32.DLL::ImageList_SetIconSize at 004238f0
 * BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl, int cx, int cy)
 * Address ranges: 004238f0-004238f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_SetIconSize
 */

BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004238f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_SetIconSize(himl,cx,cy);
  return BVar1;
}

