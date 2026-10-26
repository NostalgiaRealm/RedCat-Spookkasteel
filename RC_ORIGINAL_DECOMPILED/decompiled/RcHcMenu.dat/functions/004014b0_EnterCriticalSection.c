/*
 * KERNEL32.DLL::EnterCriticalSection at 004014b0
 * void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 004014b0-004014b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::EnterCriticalSection
 */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004014b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

