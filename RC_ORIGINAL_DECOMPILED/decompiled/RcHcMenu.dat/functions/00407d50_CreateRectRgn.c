/*
 * GDI32.DLL::CreateRectRgn at 00407d50
 * HRGN __stdcall CreateRectRgn(int x1, int y1, int x2, int y2)
 * Address ranges: 00407d50-00407d55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateRectRgn
 */

HRGN __stdcall CreateRectRgn(int x1,int y1,int x2,int y2)

{
  HRGN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateRectRgn(x1,y1,x2,y2);
  return pHVar1;
}

