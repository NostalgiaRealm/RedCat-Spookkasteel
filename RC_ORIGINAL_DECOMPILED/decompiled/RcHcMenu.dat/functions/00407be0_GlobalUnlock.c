/*
 * KERNEL32.DLL::GlobalUnlock at 00407be0
 * BOOL __stdcall GlobalUnlock(HGLOBAL hMem)
 * Address ranges: 00407be0-00407be5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GlobalUnlock
 */

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}

