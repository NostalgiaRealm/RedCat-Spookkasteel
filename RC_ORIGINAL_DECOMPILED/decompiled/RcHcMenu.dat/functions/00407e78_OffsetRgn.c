/*
 * GDI32.DLL::OffsetRgn at 00407e78
 * int __stdcall OffsetRgn(HRGN hrgn, int x, int y)
 * Address ranges: 00407e78-00407e7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::OffsetRgn
 */

int __stdcall OffsetRgn(HRGN hrgn,int x,int y)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = OffsetRgn(hrgn,x,y);
  return iVar1;
}

