/*
 * GDI32.DLL::RectVisible at 00407ea0
 * BOOL __stdcall RectVisible(HDC hdc, RECT * lprect)
 * Address ranges: 00407ea0-00407ea5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::RectVisible
 */

BOOL __stdcall RectVisible(HDC hdc,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RectVisible(hdc,lprect);
  return BVar1;
}

