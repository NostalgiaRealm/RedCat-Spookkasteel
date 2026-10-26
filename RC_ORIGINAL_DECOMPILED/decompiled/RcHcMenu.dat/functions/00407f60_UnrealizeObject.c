/*
 * GDI32.DLL::UnrealizeObject at 00407f60
 * BOOL __stdcall UnrealizeObject(HGDIOBJ h)
 * Address ranges: 00407f60-00407f65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::UnrealizeObject
 */

BOOL __stdcall UnrealizeObject(HGDIOBJ h)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnrealizeObject(h);
  return BVar1;
}

