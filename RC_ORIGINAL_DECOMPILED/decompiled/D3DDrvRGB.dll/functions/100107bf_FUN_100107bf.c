/*
 * FUN_100107bf at 100107bf
 * int __cdecl FUN_100107bf(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100107bf-10010847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_100107bf(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100ec324 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100ec324 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100ec324 != (FARPROC)0x0) {
        DAT_100ec328 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100ec32c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1001080e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1001080e:
    if (DAT_100ec328 != (FARPROC)0x0) {
      iVar1 = (*DAT_100ec328)();
      if ((iVar1 != 0) && (DAT_100ec32c != (FARPROC)0x0)) {
        iVar1 = (*DAT_100ec32c)(iVar1);
      }
    }
    iVar1 = (*DAT_100ec324)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

