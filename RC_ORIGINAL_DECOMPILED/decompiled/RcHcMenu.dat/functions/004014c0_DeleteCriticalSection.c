/*
 * KERNEL32.DLL::DeleteCriticalSection at 004014c0
 * void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 004014c0-004014c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::DeleteCriticalSection
 */

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x004014c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

