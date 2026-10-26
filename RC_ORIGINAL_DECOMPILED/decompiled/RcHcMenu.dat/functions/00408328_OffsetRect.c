/*
 * USER32.DLL::OffsetRect at 00408328
 * BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
 * Address ranges: 00408328-0040832d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::OffsetRect
 */

BOOL __stdcall OffsetRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OffsetRect(lprc,dx,dy);
  return BVar1;
}

