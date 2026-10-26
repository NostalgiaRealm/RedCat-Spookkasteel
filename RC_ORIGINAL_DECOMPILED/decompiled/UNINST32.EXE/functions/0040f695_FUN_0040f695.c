/*
 * FUN_0040f695 at 0040f695
 * int __cdecl FUN_0040f695(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0040f695-0040f71d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_0040f695(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00413678 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00413678 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_00413678 != (FARPROC)0x0) {
        DAT_0041367c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_00413680 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0040f6e4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0040f6e4:
    if (DAT_0041367c != (FARPROC)0x0) {
      iVar1 = (*DAT_0041367c)();
      if ((iVar1 != 0) && (DAT_00413680 != (FARPROC)0x0)) {
        iVar1 = (*DAT_00413680)(iVar1);
      }
    }
    iVar1 = (*DAT_00413678)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

