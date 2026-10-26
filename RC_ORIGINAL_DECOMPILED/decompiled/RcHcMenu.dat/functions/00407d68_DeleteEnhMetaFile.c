/*
 * GDI32.DLL::DeleteEnhMetaFile at 00407d68
 * BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf)
 * Address ranges: 00407d68-00407d6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::DeleteEnhMetaFile
 */

BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteEnhMetaFile(hmf);
  return BVar1;
}

