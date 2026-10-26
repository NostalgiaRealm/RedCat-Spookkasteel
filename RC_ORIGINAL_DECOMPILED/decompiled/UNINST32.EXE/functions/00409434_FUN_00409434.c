/*
 * FUN_00409434 at 00409434
 * undefined __stdcall FUN_00409434(void)
 * Address ranges: 00409434-00409600
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00409434(void)

{
  UINT UVar1;
  HSZ pHVar2;
  HDDEDATA hData;
  int iVar3;
  LPCSTR pCVar4;
  undefined4 *puVar5;
  char *_Source;
  CHAR local_10c [256];
  int local_c;
  HDDEDATA local_8;
  
  UVar1 = DdeInitializeA(&DAT_004136bc,(PFNCALLBACK)&LAB_00403d26,0x3f000,0);
  if (UVar1 == 0) {
    pHVar2 = DdeCreateStringHandleA(DAT_004136bc,s_PROGMAN_004125f8,0x3ec);
    DAT_00413728 = DdeConnect(DAT_004136bc,pHVar2,pHVar2,(PCONVCONTEXT)0x0);
    if (DAT_00413728 != (HCONV)0x0) {
      pHVar2 = DdeCreateStringHandleA(DAT_004136bc,s_GROUPS_004125f0,0x3ec);
      hData = DdeClientTransaction((LPBYTE)0x0,0,DAT_00413728,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
      if (hData != (HDDEDATA)0x0) {
        DdeGetData(hData,DAT_00413b10,0x4000,0);
        iVar3 = lstrlenA((LPCSTR)DAT_00413b10);
        DAT_004136dc = (char *)FUN_0040b671(iVar3 + 1);
        lstrcpyA(DAT_004136dc,(LPCSTR)DAT_00413b10);
        DdeFreeDataHandle(hData);
        if (*DAT_004136dc != '\0') {
          local_c = 0;
          _Source = DAT_004136dc;
          do {
            pCVar4 = FUN_0040be4c(_Source,0xd);
            if (pCVar4 == (LPCSTR)0x0) {
              lstrcpyA(local_10c,_Source);
            }
            else {
              local_8 = (HDDEDATA)(pCVar4 + -(int)_Source);
              _strncpy(local_10c,_Source,(size_t)local_8);
              local_10c[(int)local_8] = '\0';
            }
            pHVar2 = DdeCreateStringHandleA(DAT_004136bc,local_10c,0x3ec);
            local_8 = DdeClientTransaction
                                ((LPBYTE)0x0,0,DAT_00413728,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
            if (local_8 != (HDDEDATA)0x0) {
              DdeGetData(local_8,DAT_00413b10,0x4000,0);
              iVar3 = lstrlenA((LPCSTR)DAT_00413b10);
              puVar5 = FUN_0040b671(iVar3 + 1);
              *(undefined4 **)(local_c + DAT_00413790) = puVar5;
              lstrcpyA(*(LPSTR *)(local_c + DAT_00413790),(LPCSTR)DAT_00413b10);
              local_c = local_c + 4;
              DdeFreeDataHandle(local_8);
            }
            for (; (*_Source != '\0' && (*_Source != '\r')); _Source = _Source + 1) {
            }
            for (; (*_Source == '\r' || (*_Source == '\n')); _Source = _Source + 1) {
            }
          } while (*_Source != '\0');
        }
      }
    }
  }
  return;
}

