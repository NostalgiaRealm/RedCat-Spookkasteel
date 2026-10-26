/*
 * KERNEL32.DLL::GetTickCount at 00407b88
 * DWORD __stdcall GetTickCount(void)
 * Address ranges: 00407b88-00407b8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetTickCount
 */

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}

