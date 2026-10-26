/*
 * KERNEL32.DLL::LeaveCriticalSection at 004014b8
 * void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 004014b8-004014bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LeaveCriticalSection
 */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004014b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

