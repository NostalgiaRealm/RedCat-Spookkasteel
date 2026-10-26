/*
 * KERNEL32.DLL::LoadResource at 00407c10
 * HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
 * Address ranges: 00407c10-00407c15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LoadResource
 */

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}

