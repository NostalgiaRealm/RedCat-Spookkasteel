/*
 * KERNEL32.DLL::SizeofResource at 00407c80
 * DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
 * Address ranges: 00407c80-00407c85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SizeofResource
 */

DWORD __stdcall SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}

