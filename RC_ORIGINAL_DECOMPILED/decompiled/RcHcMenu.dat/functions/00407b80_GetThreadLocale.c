/*
 * KERNEL32.DLL::GetThreadLocale at 00407b80
 * LCID __stdcall GetThreadLocale(void)
 * Address ranges: 00407b80-00407b85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetThreadLocale
 */

LCID __stdcall GetThreadLocale(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetThreadLocale();
  return LVar1;
}

