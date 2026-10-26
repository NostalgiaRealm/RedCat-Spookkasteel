/*
 * KERNEL32.DLL::GetSystemTime at 004012cc
 * void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)
 * Address ranges: 004012cc-004012d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetSystemTime
 */

void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x004012cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}

