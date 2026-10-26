/*
 * COMCTL32.DLL::ImageList_Replace at 00423880
 * BOOL __stdcall ImageList_Replace(HIMAGELIST himl, int i, HBITMAP hbmImage, HBITMAP hbmMask)
 * Address ranges: 00423880-00423885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_Replace
 */

BOOL __stdcall ImageList_Replace(HIMAGELIST himl,int i,HBITMAP hbmImage,HBITMAP hbmMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00423880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_Replace(himl,i,hbmImage,hbmMask);
  return BVar1;
}

