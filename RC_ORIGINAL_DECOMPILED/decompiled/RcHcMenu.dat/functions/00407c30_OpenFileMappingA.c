/*
 * KERNEL32.DLL::OpenFileMappingA at 00407c30
 * HANDLE __stdcall OpenFileMappingA(DWORD dwDesiredAccess, BOOL bInheritHandle, LPCSTR lpName)
 * Address ranges: 00407c30-00407c35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::OpenFileMappingA
 */

HANDLE __stdcall OpenFileMappingA(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenFileMappingA(dwDesiredAccess,bInheritHandle,lpName);
  return pvVar1;
}

