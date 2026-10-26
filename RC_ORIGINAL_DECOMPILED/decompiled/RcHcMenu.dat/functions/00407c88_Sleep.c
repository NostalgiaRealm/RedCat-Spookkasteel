/*
 * KERNEL32.DLL::Sleep at 00407c88
 * void __stdcall Sleep(DWORD dwMilliseconds)
 * Address ranges: 00407c88-00407c8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::Sleep
 */

void __stdcall Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x00407c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}

