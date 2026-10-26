/*
 * KERNEL32.DLL::FreeResource at 00407af8
 * BOOL __stdcall FreeResource(HGLOBAL hResData)
 * Address ranges: 00407af8-00407afd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::FreeResource
 */

BOOL __stdcall FreeResource(HGLOBAL hResData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeResource(hResData);
  return BVar1;
}

