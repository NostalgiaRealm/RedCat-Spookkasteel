/*
 * USER32.DLL::RemoveMenu at 00408388
 * BOOL __stdcall RemoveMenu(HMENU hMenu, UINT uPosition, UINT uFlags)
 * Address ranges: 00408388-0040838d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::RemoveMenu
 */

BOOL __stdcall RemoveMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveMenu(hMenu,uPosition,uFlags);
  return BVar1;
}

