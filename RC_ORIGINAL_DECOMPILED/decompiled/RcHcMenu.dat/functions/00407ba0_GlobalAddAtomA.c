/*
 * KERNEL32.DLL::GlobalAddAtomA at 00407ba0
 * ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)
 * Address ranges: 00407ba0-00407ba5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalAddAtomA
 */

ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalAddAtomA(lpString);
  return AVar1;
}

