/*
 * COMCTL32.DLL::ImageList_Remove at 00423890
 * BOOL __stdcall ImageList_Remove(HIMAGELIST himl, int i)
 * Address ranges: 00423890-00423895
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_Remove
 */

BOOL __stdcall ImageList_Remove(HIMAGELIST himl,int i)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00423890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Remove(himl,i);
  return BVar1;
}

