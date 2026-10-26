/*
 * GDI32.DLL::SetWinMetaFileBits at 00407f40
 * HENHMETAFILE __stdcall SetWinMetaFileBits(UINT nSize, BYTE * lpMeta16Data, HDC hdcRef, METAFILEPICT * lpMFP)
 * Address ranges: 00407f40-00407f45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetWinMetaFileBits
 */

HENHMETAFILE __stdcall
SetWinMetaFileBits(UINT nSize,BYTE *lpMeta16Data,HDC hdcRef,METAFILEPICT *lpMFP)

{
  HENHMETAFILE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetWinMetaFileBits(nSize,lpMeta16Data,hdcRef,lpMFP);
  return pHVar1;
}

