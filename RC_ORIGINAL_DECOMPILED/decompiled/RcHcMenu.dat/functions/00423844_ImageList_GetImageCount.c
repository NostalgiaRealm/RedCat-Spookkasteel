/*
 * COMCTL32.DLL::ImageList_GetImageCount at 00423844
 * int __stdcall ImageList_GetImageCount(HIMAGELIST himl)
 * Address ranges: 00423844-00423849
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_GetImageCount
 */

int __stdcall ImageList_GetImageCount(HIMAGELIST himl)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00423844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ImageList_GetImageCount(himl);
  return iVar1;
}

