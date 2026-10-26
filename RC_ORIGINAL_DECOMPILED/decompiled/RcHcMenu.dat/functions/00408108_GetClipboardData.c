/*
 * USER32.DLL::GetClipboardData at 00408108
 * HANDLE __stdcall GetClipboardData(UINT uFormat)
 * Address ranges: 00408108-0040810d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetClipboardData
 */

HANDLE __stdcall GetClipboardData(UINT uFormat)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetClipboardData(uFormat);
  return pvVar1;
}

