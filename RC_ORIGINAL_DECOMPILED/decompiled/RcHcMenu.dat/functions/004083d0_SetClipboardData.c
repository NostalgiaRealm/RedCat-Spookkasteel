/*
 * USER32.DLL::SetClipboardData at 004083d0
 * HANDLE __stdcall SetClipboardData(UINT uFormat, HANDLE hMem)
 * Address ranges: 004083d0-004083d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetClipboardData
 */

HANDLE __stdcall SetClipboardData(UINT uFormat,HANDLE hMem)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetClipboardData(uFormat,hMem);
  return pvVar1;
}

