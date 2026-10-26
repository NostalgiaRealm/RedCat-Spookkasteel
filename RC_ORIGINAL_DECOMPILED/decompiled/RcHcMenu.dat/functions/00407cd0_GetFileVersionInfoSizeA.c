/*
 * VERSION.DLL::GetFileVersionInfoSizeA at 00407cd0
 * DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
 * Address ranges: 00407cd0-00407cd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to VERSION.DLL::GetFileVersionInfoSizeA
 */

DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeA(lptstrFilename,lpdwHandle);
  return DVar1;
}

