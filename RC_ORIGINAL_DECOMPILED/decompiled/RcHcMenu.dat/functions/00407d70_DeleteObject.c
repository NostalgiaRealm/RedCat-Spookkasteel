/*
 * GDI32.DLL::DeleteObject at 00407d70
 * BOOL __stdcall DeleteObject(HGDIOBJ ho)
 * Address ranges: 00407d70-00407d75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::DeleteObject
 */

BOOL __stdcall DeleteObject(HGDIOBJ ho)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteObject(ho);
  return BVar1;
}

