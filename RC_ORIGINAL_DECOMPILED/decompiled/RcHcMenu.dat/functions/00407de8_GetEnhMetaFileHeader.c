/*
 * GDI32.DLL::GetEnhMetaFileHeader at 00407de8
 * UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf, UINT nSize, LPENHMETAHEADER lpEnhMetaHeader)
 * Address ranges: 00407de8-00407ded
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetEnhMetaFileHeader
 */

UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetEnhMetaFileHeader(hemf,nSize,lpEnhMetaHeader);
  return UVar1;
}

