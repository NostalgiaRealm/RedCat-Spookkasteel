/*
 * GDI32.DLL::GetEnhMetaFilePaletteEntries at 00407df0
 * UINT __stdcall GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf, UINT nNumEntries, LPPALETTEENTRY lpPaletteEntries)
 * Address ranges: 00407df0-00407df5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetEnhMetaFilePaletteEntries
 */

UINT __stdcall
GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFilePaletteEntries(hemf,nNumEntries,lpPaletteEntries);
  return UVar1;
}

