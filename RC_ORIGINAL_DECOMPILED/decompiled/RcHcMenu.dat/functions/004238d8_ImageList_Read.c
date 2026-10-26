/*
 * COMCTL32.DLL::ImageList_Read at 004238d8
 * HIMAGELIST __stdcall ImageList_Read(IStream * pstm)
 * Address ranges: 004238d8-004238dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_Read
 */

HIMAGELIST __stdcall ImageList_Read(IStream *pstm)

{
  HIMAGELIST p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x004238d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = ImageList_Read(pstm);
  return p_Var1;
}

