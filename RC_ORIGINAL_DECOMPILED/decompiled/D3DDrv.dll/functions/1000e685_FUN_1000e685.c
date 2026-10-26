/*
 * FUN_1000e685 at 1000e685
 * int __cdecl FUN_1000e685(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1000e685-1000e70d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000e685(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_101c38e0 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_101c38e0 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_101c38e0 != (FARPROC)0x0) {
        DAT_101c38e4 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_101c38e8 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000e6d4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000e6d4:
    if (DAT_101c38e4 != (FARPROC)0x0) {
      iVar1 = (*DAT_101c38e4)();
      if ((iVar1 != 0) && (DAT_101c38e8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_101c38e8)(iVar1);
      }
    }
    iVar1 = (*DAT_101c38e0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

