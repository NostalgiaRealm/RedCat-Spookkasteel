/*
 * GDI32.DLL::Polyline at 00407e90
 * BOOL __stdcall Polyline(HDC hdc, POINT * apt, int cpt)
 * Address ranges: 00407e90-00407e95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::Polyline
 */

BOOL __stdcall Polyline(HDC hdc,POINT *apt,int cpt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Polyline(hdc,apt,cpt);
  return BVar1;
}

