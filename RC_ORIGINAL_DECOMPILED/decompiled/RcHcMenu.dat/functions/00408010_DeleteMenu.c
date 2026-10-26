/*
 * USER32.DLL::DeleteMenu at 00408010
 * BOOL __stdcall DeleteMenu(HMENU hMenu, UINT uPosition, UINT uFlags)
 * Address ranges: 00408010-00408015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DeleteMenu
 */

BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteMenu(hMenu,uPosition,uFlags);
  return BVar1;
}

