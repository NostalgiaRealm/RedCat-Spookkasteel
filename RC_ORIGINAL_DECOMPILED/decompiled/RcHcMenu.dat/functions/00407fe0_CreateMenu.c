/*
 * USER32.DLL::CreateMenu at 00407fe0
 * HMENU __stdcall CreateMenu(void)
 * Address ranges: 00407fe0-00407fe5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CreateMenu
 */

HMENU __stdcall CreateMenu(void)

{
  HMENU pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateMenu();
  return pHVar1;
}

