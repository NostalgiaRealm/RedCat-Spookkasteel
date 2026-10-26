/*
 * FUN_0040439e at 0040439e
 * int __cdecl FUN_0040439e(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0040439e-00404426
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_0040439e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004080d4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004080d4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_004080d4 != (FARPROC)0x0) {
        DAT_004080d8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_004080dc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_004043ed;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004043ed:
    if (DAT_004080d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_004080d8)();
      if ((iVar1 != 0) && (DAT_004080dc != (FARPROC)0x0)) {
        iVar1 = (*DAT_004080dc)(iVar1);
      }
    }
    iVar1 = (*DAT_004080d4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

