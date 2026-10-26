/*
 * KERNEL32.DLL::SearchPathA at 00407c48
 * DWORD __stdcall SearchPathA(LPCSTR lpPath, LPCSTR lpFileName, LPCSTR lpExtension, DWORD nBufferLength, LPSTR lpBuffer, LPSTR * lpFilePart)
 * Address ranges: 00407c48-00407c4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SearchPathA
 */

DWORD __stdcall
SearchPathA(LPCSTR lpPath,LPCSTR lpFileName,LPCSTR lpExtension,DWORD nBufferLength,LPSTR lpBuffer,
           LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SearchPathA(lpPath,lpFileName,lpExtension,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

