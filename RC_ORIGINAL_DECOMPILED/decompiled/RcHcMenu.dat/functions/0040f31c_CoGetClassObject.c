/*
 * OLE32.DLL::CoGetClassObject at 0040f31c
 * HRESULT __stdcall CoGetClassObject(IID * rclsid, DWORD dwClsContext, LPVOID pvReserved, IID * riid, LPVOID * ppv)
 * Address ranges: 0040f31c-0040f321
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLE32.DLL::CoGetClassObject
 */

HRESULT __stdcall
CoGetClassObject(IID *rclsid,DWORD dwClsContext,LPVOID pvReserved,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoGetClassObject(rclsid,dwClsContext,pvReserved,riid,ppv);
  return HVar1;
}

