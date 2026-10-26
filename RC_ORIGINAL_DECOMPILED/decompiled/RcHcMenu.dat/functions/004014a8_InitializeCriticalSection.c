/*
 * KERNEL32.DLL::InitializeCriticalSection at 004014a8
 * void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 004014a8-004014ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::InitializeCriticalSection
 */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004014a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}

