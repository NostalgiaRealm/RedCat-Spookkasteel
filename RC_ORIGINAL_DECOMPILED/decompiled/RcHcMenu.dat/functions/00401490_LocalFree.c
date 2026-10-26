/*
 * KERNEL32.DLL::LocalFree at 00401490
 * HLOCAL __stdcall LocalFree(HLOCAL hMem)
 * Address ranges: 00401490-00401495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LocalFree
 */

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

