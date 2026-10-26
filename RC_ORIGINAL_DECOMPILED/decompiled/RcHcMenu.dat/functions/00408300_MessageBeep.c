/*
 * USER32.DLL::MessageBeep at 00408300
 * BOOL __stdcall MessageBeep(UINT uType)
 * Address ranges: 00408300-00408305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::MessageBeep
 */

BOOL __stdcall MessageBeep(UINT uType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MessageBeep(uType);
  return BVar1;
}

