/*
 * KERNEL32.DLL::GetSystemInfo at 00407b78
 * void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
 * Address ranges: 00407b78-00407b7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetSystemInfo
 */

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00407b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}

