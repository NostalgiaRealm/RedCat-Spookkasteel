/*
 * OLE32.DLL::CoCreateInstance at 0040f324
 * HRESULT __stdcall CoCreateInstance(IID * rclsid, LPUNKNOWN pUnkOuter, DWORD dwClsContext, IID * riid, LPVOID * ppv)
 * Address ranges: 0040f324-0040f329
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLE32.DLL::CoCreateInstance
 */

HRESULT __stdcall
CoCreateInstance(IID *rclsid,LPUNKNOWN pUnkOuter,DWORD dwClsContext,IID *riid,LPVOID *ppv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040f324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = CoCreateInstance(rclsid,pUnkOuter,dwClsContext,riid,ppv);
  return HVar1;
}

