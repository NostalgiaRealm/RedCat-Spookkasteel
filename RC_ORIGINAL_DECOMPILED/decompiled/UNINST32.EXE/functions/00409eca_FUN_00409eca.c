/*
 * FUN_00409eca at 00409eca
 * undefined __cdecl FUN_00409eca(LPCSTR param_1, LPCSTR param_2, int param_3)
 * Address ranges: 00409eca-0040a079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00409eca(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  HWND pHVar1;
  uint *puVar2;
  int iVar3;
  LPCSTR lpString1;
  BOOL BVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HMODULE hModule_00;
  char *lpProcName;
  LPSTR pCVar6;
  CHAR local_458 [512];
  uint local_258 [64];
  uint local_158 [64];
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  lstrcpyA(DAT_00413754,param_1);
  lstrcatA(DAT_00413754,param_2);
  pCVar6 = DAT_00413754;
  pHVar1 = GetDlgItem(DAT_00413690,0x3ef);
  FUN_004098d8(pHVar1,pCVar6);
  FUN_00409026((int)DAT_00413754);
  lstrcpyA((LPSTR)local_158,param_2);
  puVar2 = (uint *)FUN_0040b53f((LPCSTR)local_158);
  if (local_158 < puVar2) {
    *(char *)((int)puVar2 + -1) = '\0';
  }
  FUN_0040a794(local_158,0);
  FUN_0040bea8((LPCSTR)local_158);
  iVar3 = lstrlenA(param_2);
  lpString1 = param_2 + iVar3 + -3;
  if (param_2 + iVar3 + -3 < param_2) {
    lpString1 = param_2;
  }
  iVar3 = lstrcmpiA(lpString1,&DAT_00412150);
  if (iVar3 == 0) {
    lstrcpyA((LPSTR)local_258,param_2);
    FUN_0040a794(local_258,0);
    _memset(&local_58,0,0x44);
    local_58.cb = 0x44;
    wsprintfA(local_458,s__s__UNREGSERVER_004126c8,local_258);
    BVar4 = CreateProcessA((LPCSTR)0x0,local_458,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_58,
                           &local_14);
    if (BVar4 != 0) {
      WaitForSingleObject(local_14.hProcess,0xffffffff);
    }
  }
  else {
    iVar3 = FUN_0040a949(param_2);
    if (iVar3 != 0) {
      hModule = LoadLibraryA(s_OLE32_DLL_004126bc);
      if (hModule != (HMODULE)0x0) {
        pFVar5 = GetProcAddress(hModule,s_OleInitialize_004126ac);
        if (pFVar5 != (FARPROC)0x0) {
          iVar3 = (*pFVar5)(0);
          if (iVar3 == 0) {
            hModule_00 = LoadLibraryA(param_2);
            if (hModule_00 != (HMODULE)0x0) {
              lpProcName = s_DllRegisterServer_00412698;
              if (param_3 == 0) {
                lpProcName = s_DllUnregisterServer_00412684;
              }
              pFVar5 = GetProcAddress(hModule_00,lpProcName);
              if (pFVar5 != (FARPROC)0x0) {
                (*pFVar5)();
              }
              FreeLibrary(hModule_00);
            }
          }
        }
        pFVar5 = GetProcAddress(hModule,s_OleUninitialize_00412674);
        if (pFVar5 != (FARPROC)0x0) {
          (*pFVar5)();
        }
        FreeLibrary(hModule);
      }
    }
  }
  return;
}

