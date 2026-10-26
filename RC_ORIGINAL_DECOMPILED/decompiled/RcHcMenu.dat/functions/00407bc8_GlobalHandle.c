/*
 * KERNEL32.DLL::GlobalHandle at 00407bc8
 * HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)
 * Address ranges: 00407bc8-00407bcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalHandle
 */

HGLOBAL __stdcall GlobalHandle(LPCVOID pMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalHandle(pMem);
  return pvVar1;
}

