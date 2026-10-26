/*
 * WINMM.DLL::mciGetErrorStringA at 00497b80
 * BOOL __stdcall mciGetErrorStringA(MCIERROR mcierr, LPSTR pszText, UINT cchText)
 * Address ranges: 00497b80-00497b85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to WINMM.DLL::mciGetErrorStringA
 */

BOOL __stdcall mciGetErrorStringA(MCIERROR mcierr,LPSTR pszText,UINT cchText)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00497b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = mciGetErrorStringA(mcierr,pszText,cchText);
  return BVar1;
}

