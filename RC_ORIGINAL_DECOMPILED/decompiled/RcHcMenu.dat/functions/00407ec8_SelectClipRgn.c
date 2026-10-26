/*
 * GDI32.DLL::SelectClipRgn at 00407ec8
 * int __stdcall SelectClipRgn(HDC hdc, HRGN hrgn)
 * Address ranges: 00407ec8-00407ecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SelectClipRgn
 */

int __stdcall SelectClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SelectClipRgn(hdc,hrgn);
  return iVar1;
}

