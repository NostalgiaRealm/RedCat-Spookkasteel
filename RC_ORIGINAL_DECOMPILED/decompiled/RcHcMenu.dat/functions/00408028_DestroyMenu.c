/*
 * USER32.DLL::DestroyMenu at 00408028
 * BOOL __stdcall DestroyMenu(HMENU hMenu)
 * Address ranges: 00408028-0040802d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DestroyMenu
 */

BOOL __stdcall DestroyMenu(HMENU hMenu)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}

