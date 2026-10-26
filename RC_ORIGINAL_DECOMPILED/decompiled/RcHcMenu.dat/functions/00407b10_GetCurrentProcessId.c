/*
 * KERNEL32.DLL::GetCurrentProcessId at 00407b10
 * DWORD __stdcall GetCurrentProcessId(void)
 * Address ranges: 00407b10-00407b15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetCurrentProcessId
 */

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

