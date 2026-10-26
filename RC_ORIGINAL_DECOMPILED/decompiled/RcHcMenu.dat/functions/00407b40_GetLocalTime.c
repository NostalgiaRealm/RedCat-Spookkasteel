/*
 * KERNEL32.DLL::GetLocalTime at 00407b40
 * void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)
 * Address ranges: 00407b40-00407b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetLocalTime
 */

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00407b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}

