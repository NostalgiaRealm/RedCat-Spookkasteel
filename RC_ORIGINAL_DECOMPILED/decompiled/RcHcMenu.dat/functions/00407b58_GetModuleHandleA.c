/*
 * KERNEL32.DLL::GetModuleHandleA at 00407b58
 * HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
 * Address ranges: 00407b58-00407b5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetModuleHandleA
 */

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}

