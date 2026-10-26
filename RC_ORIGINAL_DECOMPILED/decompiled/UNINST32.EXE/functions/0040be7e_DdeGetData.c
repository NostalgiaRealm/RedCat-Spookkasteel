/*
 * USER32.DLL::DdeGetData at 0040be7e
 * DWORD __stdcall DdeGetData(HDDEDATA hData, LPBYTE pDst, DWORD cbMax, DWORD cbOff)
 * Address ranges: 0040be7e-0040be83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeGetData
 */

DWORD DdeGetData(HDDEDATA hData,LPBYTE pDst,DWORD cbMax,DWORD cbOff)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeGetData(hData,pDst,cbMax,cbOff);
  return DVar1;
}

