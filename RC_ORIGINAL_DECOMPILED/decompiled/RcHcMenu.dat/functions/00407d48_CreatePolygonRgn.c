/*
 * GDI32.DLL::CreatePolygonRgn at 00407d48
 * HRGN __stdcall CreatePolygonRgn(POINT * pptl, int cPoint, int iMode)
 * Address ranges: 00407d48-00407d4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreatePolygonRgn
 */

HRGN __stdcall CreatePolygonRgn(POINT *pptl,int cPoint,int iMode)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePolygonRgn(pptl,cPoint,iMode);
  return pHVar1;
}

