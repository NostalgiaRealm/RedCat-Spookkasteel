/*
 * FUN_0040b32f at 0040b32f
 * undefined __cdecl FUN_0040b32f(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 0040b32f-0040b4f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040b32f(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  char *pcVar2;
  int iVar3;
  HFILE hFile;
  UINT uBytes;
  LPCSTR pCVar4;
  CHAR local_504 [512];
  CHAR local_304 [256];
  uint local_204 [63];
  char acStack_105 [257];
  
  BVar1 = CopyFileA(param_1,param_2,0);
  pCVar4 = param_1;
  if (BVar1 == 0) {
    FUN_0040b4fa(local_304,param_2);
    BVar1 = CopyFileA(param_1,local_304,0);
    pCVar4 = param_2;
    if (BVar1 != 0) {
      DAT_004136f4 = 1;
      FUN_00409e3a(param_1);
      lstrcpyA((LPSTR)local_204,local_304);
      lstrcpyA(acStack_105 + 1,param_2);
      FUN_0040a794(local_204,0);
      FUN_0040a794((uint *)(acStack_105 + 1),0);
      if (DAT_004136b0 == 2) {
        WritePrivateProfileStringA
                  (s_rename_00412ed0,acStack_105 + 1,(LPCSTR)local_204,s_WININIT_INI_00412790);
        return;
      }
      if (DAT_004136b0 == 1) {
        MoveFileExA(param_2,(LPCSTR)0x0,4);
        MoveFileExA((LPCSTR)local_204,param_2,4);
        return;
      }
      pcVar2 = FUN_0040b53f(acStack_105 + 1);
      wsprintfA(local_504,s_del__s_rename__s__s_00412eb8,acStack_105 + 1,local_204,pcVar2);
      GetWindowsDirectoryA(acStack_105 + 1,0x100);
      iVar3 = lstrlenA(acStack_105 + 1);
      if (acStack_105[iVar3] != '\\') {
        lstrcatA(acStack_105 + 1,&DAT_004120e0);
      }
      lstrcatA(acStack_105 + 1,s__MSSETUP_BAT_0041275c);
      hFile = _lopen(acStack_105 + 1,1);
      if (hFile == -1) {
        hFile = _lcreat(acStack_105 + 1,0);
      }
      else {
        _llseek(hFile,0,2);
      }
      if (hFile == -1) {
        return;
      }
      uBytes = lstrlenA(local_504);
      _lwrite(hFile,local_504,uBytes);
      _lclose(hFile);
      return;
    }
  }
  FUN_00409e3a(pCVar4);
  return;
}

