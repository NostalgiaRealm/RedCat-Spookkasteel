/*
 * FUN_0040b02c at 0040b02c
 * undefined __stdcall FUN_0040b02c(void)
 * Address ranges: 0040b02c-0040b2c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b02c(void)

{
  char cVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  DWORD DVar4;
  LPCSTR pCVar5;
  UINT uBytes;
  LPCSTR pCVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_148 [256];
  CHAR local_48 [64];
  char *local_8;
  
  if (DAT_004137e0 != '\0') {
    hModule = LoadLibraryA(s_ismif32_dll_00412e94);
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,s_InstallStatusMIF_00412e80);
      if (pFVar2 != (FARPROC)0x0) {
        pcVar8 = s_Uninstall_canceled_by_user_00412e64;
        if (DAT_00413724 == 0) {
          pcVar8 = s_Uninstall_successful_00412e4c;
        }
        iVar3 = (*pFVar2)(&DAT_004137e0,&DAT_00413860,&DAT_004138e0,&DAT_00413960,&DAT_00412e48,
                          &DAT_004139e0,pcVar8,(uint)(DAT_00413724 == 0));
        if (iVar3 != 0) {
          FreeLibrary(hModule);
          return;
        }
      }
      FreeLibrary(hModule);
    }
    GetWindowsDirectoryA(local_148,0x100);
    iVar3 = lstrlenA(local_148);
    if (local_148[iVar3 + -1] != '\\') {
      lstrcatA(local_148,&DAT_004120e0);
    }
    lstrcatA(local_148,&DAT_004137e0);
    local_8 = (char *)_lcreat(local_148,0);
    if (local_8 != (char *)0xffffffff) {
      DVar4 = GetPrivateProfileStringA
                        (s_Language_004127a0,s_Msg1000_00412e40,&DAT_004127ac,DAT_00413b10,0x4000,
                         DAT_00413abc);
      if ((*DAT_00413b10 == '\x7f') && (DVar4 == 1)) {
        lstrcpyA(DAT_00413b10,s_START_COMPONENT_NAME____WORKSTAT_00412858);
      }
      else {
        while (pCVar5 = FUN_0040be4c(DAT_00413b10,0x5e), pCVar5 != (LPCSTR)0x0) {
          pCVar6 = pCVar5;
          if (*pCVar5 == '\0') goto LAB_0040b1db;
          do {
            pCVar6 = pCVar6 + 1;
          } while (*pCVar6 != '\0');
          for (; pCVar5 <= pCVar6; pCVar6 = pCVar6 + -1) {
LAB_0040b1db:
            pCVar6[1] = *pCVar6;
          }
          *pCVar5 = '\r';
          pCVar5[1] = '\n';
        }
      }
      FUN_0040b2ca(local_48);
      cVar1 = *DAT_00413b10;
      pcVar9 = DAT_00413b10;
      pcVar8 = local_8;
      while (cVar1 != '\0') {
        if ((((cVar1 == '%') && (cVar1 = pcVar9[1], '0' < cVar1)) && (cVar1 < '9')) &&
           (pcVar9[2] == '%')) {
          if (cVar1 < '5') {
            pcVar8 = &DAT_004137e0 + (cVar1 + -0x30) * 0x80;
          }
          else if (cVar1 == '5') {
            if (DAT_00413770 == 0) {
              pcVar8 = s_Uninstall_00412840;
            }
            else {
              pcVar8 = s_Rollback_0041284c;
            }
          }
          else if (cVar1 == '6') {
            pcVar8 = local_48;
          }
          else if (cVar1 == '7') {
            if (DAT_00413724 == 0) {
              pcVar8 = s_Success_00412830;
            }
            else {
              pcVar8 = s_Failed_00412838;
            }
          }
          else if ((cVar1 == '8') && (pcVar8 = s_Canceled_by_user_0041281c, DAT_00413724 == 0)) {
            pcVar8 = &DAT_004134d0;
          }
          iVar3 = lstrlenA(pcVar8);
          iVar3 = iVar3 + -3;
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              for (pcVar7 = pcVar9 + 3; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
                pcVar7[iVar3] = *pcVar7;
              }
              pcVar7[iVar3] = '\0';
            }
          }
          else {
            for (pcVar7 = pcVar9 + 3; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
            }
            for (; pcVar9 + 3 <= pcVar7; pcVar7 = pcVar7 + -1) {
              pcVar7[iVar3] = *pcVar7;
            }
          }
          for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
            *pcVar9 = *pcVar8;
            pcVar9 = pcVar9 + 1;
          }
          pcVar9 = pcVar9 + -1;
        }
        pcVar7 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar1 = *pcVar7;
      }
      uBytes = lstrlenA(DAT_00413b10);
      _lwrite((HFILE)local_8,DAT_00413b10,uBytes);
      _lclose((HFILE)local_8);
    }
  }
  return;
}

