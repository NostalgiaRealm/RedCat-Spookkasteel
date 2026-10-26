/*
 * KERNEL32.DLL::SetEvent at 00407c60
 * BOOL __stdcall SetEvent(HANDLE hEvent)
 * Address ranges: 00407c60-00407c65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SetEvent
 */

BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}

