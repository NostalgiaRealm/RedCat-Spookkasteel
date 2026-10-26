/*
 * FUN_10009c9d at 10009c9d
 * int __cdecl FUN_10009c9d(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10009c9d-10009d25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10009c9d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100e3c50 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100e3c50 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100e3c50 != (FARPROC)0x0) {
        DAT_100e3c54 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100e3c58 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10009cec;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10009cec:
    if (DAT_100e3c54 != (FARPROC)0x0) {
      iVar1 = (*DAT_100e3c54)();
      if ((iVar1 != 0) && (DAT_100e3c58 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100e3c58)(iVar1);
      }
    }
    iVar1 = (*DAT_100e3c50)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

