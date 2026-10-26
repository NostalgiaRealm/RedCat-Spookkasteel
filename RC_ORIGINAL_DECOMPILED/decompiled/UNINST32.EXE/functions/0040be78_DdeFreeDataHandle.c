/*
 * USER32.DLL::DdeFreeDataHandle at 0040be78
 * BOOL __stdcall DdeFreeDataHandle(HDDEDATA hData)
 * Address ranges: 0040be78-0040be7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeFreeDataHandle
 */

BOOL DdeFreeDataHandle(HDDEDATA hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeDataHandle(hData);
  return BVar1;
}

