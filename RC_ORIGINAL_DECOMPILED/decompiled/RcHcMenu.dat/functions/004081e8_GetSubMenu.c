/*
 * USER32.DLL::GetSubMenu at 004081e8
 * HMENU __stdcall GetSubMenu(HMENU hMenu, int nPos)
 * Address ranges: 004081e8-004081ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetSubMenu
 */

HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetSubMenu(hMenu,nPos);
  return pHVar1;
}

