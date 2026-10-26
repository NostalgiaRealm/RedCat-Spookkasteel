/*
 * USER32.DLL::RegisterClipboardFormatA at 00408368
 * UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat)
 * Address ranges: 00408368-0040836d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::RegisterClipboardFormatA
 */

UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterClipboardFormatA(lpszFormat);
  return UVar1;
}

