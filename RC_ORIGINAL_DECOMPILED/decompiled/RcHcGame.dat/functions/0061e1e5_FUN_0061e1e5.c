/*
 * FUN_0061e1e5 at 0061e1e5
 * undefined FUN_0061e1e5(void)
 * Address ranges: 0061e1e5-0061e26d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061e1e5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00710368 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00710368 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_00710368 != (FARPROC)0x0) {
        DAT_0071036c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_00710370 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0061e234;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0061e234:
    if (DAT_0071036c != (FARPROC)0x0) {
      iVar1 = (*DAT_0071036c)();
      if ((iVar1 != 0) && (DAT_00710370 != (FARPROC)0x0)) {
        iVar1 = (*DAT_00710370)(iVar1);
      }
    }
    iVar1 = (*DAT_00710368)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

