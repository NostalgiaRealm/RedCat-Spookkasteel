/*
 * FUN_0040a440 at 0040a440
 * uint __cdecl FUN_0040a440(LPCSTR param_1)
 * Address ranges: 0040a440-0040a6da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_0040a440(LPCSTR param_1)

{
  int iVar1;
  BOOL BVar2;
  HFILE hFile;
  UINT UVar3;
  uint local_308 [63];
  char acStack_209 [256];
  char acStack_109 [257];
  uint local_8;
  
  lstrcpyA((LPSTR)local_308,param_1);
  FUN_0040a794(local_308,1);
  iVar1 = lstrcmpiA((LPCSTR)local_308,DAT_0041375c);
  if (iVar1 == 0) {
    DAT_00413a88 = 1;
  }
  BVar2 = DeleteFileA(param_1);
  local_8 = (uint)(BVar2 == 0);
  if (DAT_004136ec != 0) {
    if (local_8 != 0) goto LAB_0040a4ce;
    if (DAT_00413b8c == (code *)0x0) {
      return 0;
    }
    (*DAT_00413b8c)(4,1,param_1,0);
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_0040a4ce:
  if (DAT_00413798 == 0) {
    return local_8;
  }
  lstrcpyA(acStack_109 + 1,param_1);
  FUN_0040a794((uint *)(acStack_109 + 1),1);
  iVar1 = lstrcmpiA(acStack_109 + 1,DAT_0041375c);
  if (iVar1 != 0) {
    DAT_004136f4 = 1;
  }
  FUN_0040a794((uint *)(acStack_109 + 1),0);
  if (DAT_004136b0 == 2) {
    GetWindowsDirectoryA(acStack_209 + 1,0x100);
    iVar1 = lstrlenA(acStack_209 + 1);
    if (acStack_209[iVar1] != '\\') {
      lstrcatA(acStack_209 + 1,&DAT_004120e0);
    }
    lstrcatA(acStack_209 + 1,s_WININIT_INI_00412790);
    hFile = _lopen(acStack_209 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_209 + 1,0);
      _lwrite(hFile,s__rename__00412784,10);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_NUL__s_00412778,acStack_109 + 1);
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,acStack_209 + 1,UVar3);
  }
  else {
    if (DAT_004136b0 == 1) {
      MoveFileExA(param_1,(LPCSTR)0x0,4);
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_del__s_0041276c,acStack_109 + 1);
    GetWindowsDirectoryA(acStack_109 + 1,0x100);
    iVar1 = lstrlenA(acStack_109 + 1);
    if (acStack_109[iVar1] != '\\') {
      lstrcatA(acStack_109 + 1,&DAT_004120e0);
    }
    lstrcatA(acStack_109 + 1,s__MSSETUP_BAT_0041275c);
    hFile = _lopen(acStack_109 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_109 + 1,0);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,(LPCCH)local_308,UVar3);
  }
  _lclose(hFile);
  return local_8;
}

