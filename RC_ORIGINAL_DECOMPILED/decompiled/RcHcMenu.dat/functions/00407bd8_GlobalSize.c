/*
 * KERNEL32.DLL::GlobalSize at 00407bd8
 * SIZE_T __stdcall GlobalSize(HGLOBAL hMem)
 * Address ranges: 00407bd8-00407bdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalSize
 */

SIZE_T __stdcall GlobalSize(HGLOBAL hMem)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GlobalSize(hMem);
  return SVar1;
}

