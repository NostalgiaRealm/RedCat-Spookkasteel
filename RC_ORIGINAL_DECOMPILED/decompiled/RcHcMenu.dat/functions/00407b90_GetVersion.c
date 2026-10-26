/*
 * KERNEL32.DLL::GetVersion at 00407b90
 * DWORD __stdcall GetVersion(void)
 * Address ranges: 00407b90-00407b95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetVersion
 */

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}

