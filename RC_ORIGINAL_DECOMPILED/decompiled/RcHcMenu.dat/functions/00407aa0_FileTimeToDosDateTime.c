/*
 * KERNEL32.DLL::FileTimeToDosDateTime at 00407aa0
 * BOOL __stdcall FileTimeToDosDateTime(FILETIME * lpFileTime, LPWORD lpFatDate, LPWORD lpFatTime)
 * Address ranges: 00407aa0-00407aa5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::FileTimeToDosDateTime
 */

BOOL __stdcall FileTimeToDosDateTime(FILETIME *lpFileTime,LPWORD lpFatDate,LPWORD lpFatTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToDosDateTime(lpFileTime,lpFatDate,lpFatTime);
  return BVar1;
}

