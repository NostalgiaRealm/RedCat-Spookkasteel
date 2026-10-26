/*
 * USER32.DLL::DdeCreateStringHandleA at 0040be90
 * HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 * Address ranges: 0040be90-0040be95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeCreateStringHandleA
 */

HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}

