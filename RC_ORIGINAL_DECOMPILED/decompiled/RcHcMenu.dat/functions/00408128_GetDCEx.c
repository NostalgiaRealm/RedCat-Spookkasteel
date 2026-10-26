/*
 * USER32.DLL::GetDCEx at 00408128
 * HDC __stdcall GetDCEx(HWND hWnd, HRGN hrgnClip, DWORD flags)
 * Address ranges: 00408128-0040812d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetDCEx
 */

HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetDCEx(hWnd,hrgnClip,flags);
  return pHVar1;
}

