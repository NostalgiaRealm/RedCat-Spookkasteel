/*
 * FUN_0040984f at 0040984f
 * undefined __cdecl FUN_0040984f(LPBYTE param_1)
 * Address ranges: 0040984f-00409895
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040984f(LPBYTE param_1)

{
  int iVar1;
  HDDEDATA pData;
  DWORD cbOff;
  HSZ hszItem;
  UINT wFmt;
  UINT afCmd;
  
  if (DAT_00413728 != (HCONV)0x0) {
    afCmd = 0;
    wFmt = 0;
    hszItem = (HSZ)0x0;
    cbOff = 0;
    iVar1 = lstrlenA((LPCSTR)param_1);
    pData = DdeCreateDataHandle(DAT_004136bc,param_1,iVar1 + 1,cbOff,hszItem,wFmt,afCmd);
    DdeClientTransaction((LPBYTE)pData,0xffffffff,DAT_00413728,(HSZ)0x0,0,0x4050,1000,(LPDWORD)0x0);
  }
  return;
}

