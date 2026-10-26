/*
 * KERNEL32.DLL::SetThreadLocale at 00407c78
 * BOOL __stdcall SetThreadLocale(LCID Locale)
 * Address ranges: 00407c78-00407c7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SetThreadLocale
 */

BOOL __stdcall SetThreadLocale(LCID Locale)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadLocale(Locale);
  return BVar1;
}

