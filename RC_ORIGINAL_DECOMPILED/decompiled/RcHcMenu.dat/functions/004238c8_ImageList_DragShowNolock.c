/*
 * COMCTL32.DLL::ImageList_DragShowNolock at 004238c8
 * BOOL __stdcall ImageList_DragShowNolock(BOOL fShow)
 * Address ranges: 004238c8-004238cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_DragShowNolock
 */

BOOL __stdcall ImageList_DragShowNolock(BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004238c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragShowNolock(fShow);
  return BVar1;
}

