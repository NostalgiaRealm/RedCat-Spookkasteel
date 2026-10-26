/*
 * USER32.DLL::DdeUninitialize at 0040be6c
 * BOOL __stdcall DdeUninitialize(DWORD idInst)
 * Address ranges: 0040be6c-0040be71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeUninitialize
 */

BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}

