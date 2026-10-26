/*
 * FUN_100324a9 at 100324a9
 * undefined FUN_100324a9(void)
 * Address ranges: 100324a9-10032531
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100324a9(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1052a5c4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1052a5c4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1052a5c4 != (FARPROC)0x0) {
        DAT_1052a5c8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1052a5cc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100324f8;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100324f8:
    if (DAT_1052a5c8 != (FARPROC)0x0) {
      iVar1 = (*DAT_1052a5c8)();
      if ((iVar1 != 0) && (DAT_1052a5cc != (FARPROC)0x0)) {
        iVar1 = (*DAT_1052a5cc)(iVar1);
      }
    }
    iVar1 = (*DAT_1052a5c4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

