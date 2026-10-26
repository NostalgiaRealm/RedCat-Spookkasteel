/*
 * KERNEL32.DLL::lstrlenA at 004013ac
 * int __stdcall lstrlenA(LPCSTR lpString)
 * Address ranges: 004013ac-004013b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::lstrlenA
 */

int __stdcall lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}

