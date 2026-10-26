/*
 * GDI32.DLL::GdiFlush at 00407d90
 * BOOL __stdcall GdiFlush(void)
 * Address ranges: 00407d90-00407d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GdiFlush
 */

BOOL __stdcall GdiFlush(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GdiFlush();
  return BVar1;
}

