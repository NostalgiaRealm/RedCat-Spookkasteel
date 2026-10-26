/*
 * VERSION.DLL::GetFileVersionInfoA at 00407cc8
 * BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
 * Address ranges: 00407cc8-00407ccd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to VERSION.DLL::GetFileVersionInfoA
 */

BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoA(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}

