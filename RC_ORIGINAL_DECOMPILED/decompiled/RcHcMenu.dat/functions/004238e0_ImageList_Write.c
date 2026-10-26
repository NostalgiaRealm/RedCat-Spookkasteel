/*
 * COMCTL32.DLL::ImageList_Write at 004238e0
 * BOOL __stdcall ImageList_Write(HIMAGELIST himl, IStream * pstm)
 * Address ranges: 004238e0-004238e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_Write
 */

BOOL __stdcall ImageList_Write(HIMAGELIST himl,IStream *pstm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004238e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Write(himl,pstm);
  return BVar1;
}

