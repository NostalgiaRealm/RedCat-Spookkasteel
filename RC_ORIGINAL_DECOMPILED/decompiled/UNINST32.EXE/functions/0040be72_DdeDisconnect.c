/*
 * USER32.DLL::DdeDisconnect at 0040be72
 * BOOL __stdcall DdeDisconnect(HCONV hConv)
 * Address ranges: 0040be72-0040be77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeDisconnect
 */

BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}

