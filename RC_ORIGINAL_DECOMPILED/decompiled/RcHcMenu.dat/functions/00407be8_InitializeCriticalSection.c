/*
 * KERNEL32.DLL::InitializeCriticalSection at 00407be8
 * void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 00407be8-00407bed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::InitializeCriticalSection
 */

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00407be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}

