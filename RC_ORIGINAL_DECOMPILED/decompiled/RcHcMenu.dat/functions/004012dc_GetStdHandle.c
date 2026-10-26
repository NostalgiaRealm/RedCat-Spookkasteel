/*
 * KERNEL32.DLL::GetStdHandle at 004012dc
 * HANDLE __stdcall GetStdHandle(DWORD nStdHandle)
 * Address ranges: 004012dc-004012e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetStdHandle
 */

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

