/*
 * KERNEL32.DLL::ReleaseMutex at 00407c40
 * BOOL __stdcall ReleaseMutex(HANDLE hMutex)
 * Address ranges: 00407c40-00407c45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::ReleaseMutex
 */

BOOL __stdcall ReleaseMutex(HANDLE hMutex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseMutex(hMutex);
  return BVar1;
}

