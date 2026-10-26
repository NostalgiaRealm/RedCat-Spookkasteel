/*
 * GDI32.DLL::SetEnhMetaFileBits at 00407f00
 * HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize, BYTE * pb)
 * Address ranges: 00407f00-00407f05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetEnhMetaFileBits
 */

HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize,BYTE *pb)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetEnhMetaFileBits(nSize,pb);
  return pHVar1;
}

