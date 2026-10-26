/*
 * USER32.DLL::ShowCursor at 00408478
 * int __stdcall ShowCursor(BOOL bShow)
 * Address ranges: 00408478-0040847d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ShowCursor
 */

int __stdcall ShowCursor(BOOL bShow)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ShowCursor(bShow);
  return iVar1;
}

