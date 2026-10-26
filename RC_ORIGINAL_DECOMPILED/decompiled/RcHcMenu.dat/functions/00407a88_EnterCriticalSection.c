/*
 * KERNEL32.DLL::EnterCriticalSection at 00407a88
 * void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
 * Address ranges: 00407a88-00407a8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::EnterCriticalSection
 */

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00407a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

