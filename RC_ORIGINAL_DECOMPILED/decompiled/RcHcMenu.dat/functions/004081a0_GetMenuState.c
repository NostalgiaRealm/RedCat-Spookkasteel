/*
 * USER32.DLL::GetMenuState at 004081a0
 * UINT __stdcall GetMenuState(HMENU hMenu, UINT uId, UINT uFlags)
 * Address ranges: 004081a0-004081a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetMenuState
 */

UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuState(hMenu,uId,uFlags);
  return UVar1;
}

