/*
 * USER32.DLL::GetMenuItemID at 00408190
 * UINT __stdcall GetMenuItemID(HMENU hMenu, int nPos)
 * Address ranges: 00408190-00408195
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetMenuItemID
 */

UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetMenuItemID(hMenu,nPos);
  return UVar1;
}

