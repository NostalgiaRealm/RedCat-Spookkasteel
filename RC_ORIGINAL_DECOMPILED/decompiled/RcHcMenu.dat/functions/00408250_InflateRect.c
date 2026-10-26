/*
 * USER32.DLL::InflateRect at 00408250
 * BOOL __stdcall InflateRect(LPRECT lprc, int dx, int dy)
 * Address ranges: 00408250-00408255
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::InflateRect
 */

BOOL __stdcall InflateRect(LPRECT lprc,int dx,int dy)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InflateRect(lprc,dx,dy);
  return BVar1;
}

