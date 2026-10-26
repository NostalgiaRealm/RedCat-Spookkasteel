/*
 * GDI32.DLL::GetStockObject at 00407e10
 * HGDIOBJ __stdcall GetStockObject(int i)
 * Address ranges: 00407e10-00407e15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetStockObject
 */

HGDIOBJ __stdcall GetStockObject(int i)

{
  HGDIOBJ pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStockObject(i);
  return pvVar1;
}

