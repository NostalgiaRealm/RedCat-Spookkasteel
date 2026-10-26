/*
 * COMCTL32.DLL::ImageList_DragMove at 004238b8
 * BOOL __stdcall ImageList_DragMove(int x, int y)
 * Address ranges: 004238b8-004238bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_DragMove
 */

BOOL __stdcall ImageList_DragMove(int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004238b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragMove(x,y);
  return BVar1;
}

