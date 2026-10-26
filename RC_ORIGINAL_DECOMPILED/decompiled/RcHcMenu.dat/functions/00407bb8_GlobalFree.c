/*
 * KERNEL32.DLL::GlobalFree at 00407bb8
 * HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
 * Address ranges: 00407bb8-00407bbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalFree
 */

HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalFree(hMem);
  return pvVar1;
}

