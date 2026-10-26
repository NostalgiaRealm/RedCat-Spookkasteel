/*
 * USER32.DLL::GetWindowThreadProcessId at 00408248
 * DWORD __stdcall GetWindowThreadProcessId(HWND hWnd, LPDWORD lpdwProcessId)
 * Address ranges: 00408248-0040824d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetWindowThreadProcessId
 */

DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetWindowThreadProcessId(hWnd,lpdwProcessId);
  return DVar1;
}

