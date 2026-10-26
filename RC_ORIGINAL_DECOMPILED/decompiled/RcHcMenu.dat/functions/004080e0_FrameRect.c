/*
 * USER32.DLL::FrameRect at 004080e0
 * int __stdcall FrameRect(HDC hDC, RECT * lprc, HBRUSH hbr)
 * Address ranges: 004080e0-004080e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::FrameRect
 */

int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004080e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = FrameRect(hDC,lprc,hbr);
  return iVar1;
}

