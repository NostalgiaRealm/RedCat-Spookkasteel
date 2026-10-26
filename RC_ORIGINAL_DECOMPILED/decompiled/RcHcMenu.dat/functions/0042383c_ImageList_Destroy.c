/*
 * COMCTL32.DLL::ImageList_Destroy at 0042383c
 * BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
 * Address ranges: 0042383c-00423841
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_Destroy
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0042383c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}

