/*
 * FUN_1001dcfa at 1001dcfa
 * undefined FUN_1001dcfa(void)
 * Address ranges: 1001dcfa-1001dd82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001dcfa(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10025e70 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10025e70 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10025e70 != (FARPROC)0x0) {
        DAT_10025e74 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10025e78 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1001dd49;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1001dd49:
    if (DAT_10025e74 != (FARPROC)0x0) {
      iVar1 = (*DAT_10025e74)();
      if ((iVar1 != 0) && (DAT_10025e78 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10025e78)(iVar1);
      }
    }
    iVar1 = (*DAT_10025e70)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

