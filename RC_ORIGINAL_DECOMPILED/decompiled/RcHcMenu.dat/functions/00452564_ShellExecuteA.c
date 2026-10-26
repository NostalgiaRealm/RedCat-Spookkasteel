/*
 * SHELL32.DLL::ShellExecuteA at 00452564
 * HINSTANCE __stdcall ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd)
 * Address ranges: 00452564-00452569
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to SHELL32.DLL::ShellExecuteA
 */

HINSTANCE __stdcall
ShellExecuteA(HWND hwnd,LPCSTR lpOperation,LPCSTR lpFile,LPCSTR lpParameters,LPCSTR lpDirectory,
             INT nShowCmd)

{
  HINSTANCE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00452564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ShellExecuteA(hwnd,lpOperation,lpFile,lpParameters,lpDirectory,nShowCmd);
  return pHVar1;
}

