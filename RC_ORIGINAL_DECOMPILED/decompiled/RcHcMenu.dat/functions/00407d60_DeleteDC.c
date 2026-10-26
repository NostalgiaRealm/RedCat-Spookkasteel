/*
 * GDI32.DLL::DeleteDC at 00407d60
 * BOOL __stdcall DeleteDC(HDC hdc)
 * Address ranges: 00407d60-00407d65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::DeleteDC
 */

BOOL __stdcall DeleteDC(HDC hdc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteDC(hdc);
  return BVar1;
}

