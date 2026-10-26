/*
 * KERNEL32.DLL::GlobalDeleteAtom at 00407bb0
 * ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
 * Address ranges: 00407bb0-00407bb5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalDeleteAtom
 */

ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = GlobalDeleteAtom(nAtom);
  return AVar1;
}

