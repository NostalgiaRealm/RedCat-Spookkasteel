/*
 * KERNEL32.DLL::FreeLibrary at 00407ae0
 * BOOL __stdcall FreeLibrary(HMODULE hLibModule)
 * Address ranges: 00407ae0-00407ae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::FreeLibrary
 */

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}

