/*
 * FUN_0040b561 at 0040b561
 * undefined __cdecl FUN_0040b561(LPCSTR param_1)
 * Address ranges: 0040b561-0040b670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040b561(LPCSTR param_1)

{
  int iVar1;
  HFILE hFile;
  UINT uBytes;
  CHAR local_304 [511];
  char acStack_105 [257];
  
  if (DAT_004136b0 == 2) {
    GetWindowsDirectoryA(acStack_105 + 1,0x100);
    iVar1 = lstrlenA(acStack_105 + 1);
    if (acStack_105[iVar1] != '\\') {
      lstrcatA(acStack_105 + 1,&DAT_004120e0);
    }
    lstrcatA(acStack_105 + 1,s_WININIT_INI_00412790);
    hFile = _lopen(acStack_105 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_105 + 1,0);
      if (hFile == -1) {
        return;
      }
      wsprintfA(local_304,s__rename__NUL__s_00412ee8,param_1);
      uBytes = lstrlenA(local_304);
    }
    else {
      wsprintfA(local_304,s_NUL__s_00412778,param_1);
      _llseek(hFile,0,2);
      uBytes = lstrlenA(local_304);
    }
    _lwrite(hFile,local_304,uBytes);
    _lclose(hFile);
  }
  else {
    MoveFileExA(param_1,(LPCSTR)0x0,4);
  }
  return;
}

