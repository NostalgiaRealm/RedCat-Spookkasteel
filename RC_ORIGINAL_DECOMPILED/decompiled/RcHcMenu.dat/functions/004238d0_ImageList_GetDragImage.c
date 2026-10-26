/*
 * COMCTL32.DLL::ImageList_GetDragImage at 004238d0
 * HIMAGELIST __stdcall ImageList_GetDragImage(POINT * ppt, POINT * pptHotspot)
 * Address ranges: 004238d0-004238d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_GetDragImage
 */

HIMAGELIST __stdcall ImageList_GetDragImage(POINT *ppt,POINT *pptHotspot)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x004238d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_GetDragImage(ppt,pptHotspot);
  return p_Var1;
}

