/*
 * KERNEL32.DLL::GetStartupInfoA at 0040137c
 * void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)
 * Address ranges: 0040137c-00401381
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetStartupInfoA
 */

void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0040137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoA(lpStartupInfo);
  return;
}

