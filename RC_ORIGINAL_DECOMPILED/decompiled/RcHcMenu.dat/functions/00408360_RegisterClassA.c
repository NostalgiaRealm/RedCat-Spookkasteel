/*
 * USER32.DLL::RegisterClassA at 00408360
 * ATOM __stdcall RegisterClassA(WNDCLASSA * lpWndClass)
 * Address ranges: 00408360-00408365
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::RegisterClassA
 */

ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass)

{
  ATOM AVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AVar1 = RegisterClassA(lpWndClass);
  return AVar1;
}

