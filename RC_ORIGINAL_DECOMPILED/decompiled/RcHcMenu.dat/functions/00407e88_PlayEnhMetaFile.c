/*
 * GDI32.DLL::PlayEnhMetaFile at 00407e88
 * BOOL __stdcall PlayEnhMetaFile(HDC hdc, HENHMETAFILE hmf, RECT * lprect)
 * Address ranges: 00407e88-00407e8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::PlayEnhMetaFile
 */

BOOL __stdcall PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,RECT *lprect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PlayEnhMetaFile(hdc,hmf,lprect);
  return BVar1;
}

