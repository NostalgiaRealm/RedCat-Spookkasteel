/*
 * USER32.DLL::EnumClipboardFormats at 004080a8
 * UINT __stdcall EnumClipboardFormats(UINT format)
 * Address ranges: 004080a8-004080ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::EnumClipboardFormats
 */

UINT __stdcall EnumClipboardFormats(UINT format)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004080a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EnumClipboardFormats(format);
  return UVar1;
}

