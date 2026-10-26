/*
 * KERNEL32.DLL::FileTimeToLocalFileTime at 00407aa8
 * BOOL __stdcall FileTimeToLocalFileTime(FILETIME * lpFileTime, LPFILETIME lpLocalFileTime)
 * Address ranges: 00407aa8-00407aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::FileTimeToLocalFileTime
 */

BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToLocalFileTime(lpFileTime,lpLocalFileTime);
  return BVar1;
}

