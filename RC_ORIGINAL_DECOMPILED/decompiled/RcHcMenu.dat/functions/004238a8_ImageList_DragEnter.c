/*
 * COMCTL32.DLL::ImageList_DragEnter at 004238a8
 * BOOL __stdcall ImageList_DragEnter(HWND hwndLock, int x, int y)
 * Address ranges: 004238a8-004238ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMCTL32.DLL::ImageList_DragEnter
 */

BOOL __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004238a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ImageList_DragEnter(hwndLock,x,y);
  return BVar1;
}

