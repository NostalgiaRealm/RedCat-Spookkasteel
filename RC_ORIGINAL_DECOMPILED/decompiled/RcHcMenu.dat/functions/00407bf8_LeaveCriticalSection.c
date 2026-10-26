/*
 * KERNEL32.DLL::LeaveCriticalSection at 00407bf8
 * void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 00407bf8-00407bfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LeaveCriticalSection
 */

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00407bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

