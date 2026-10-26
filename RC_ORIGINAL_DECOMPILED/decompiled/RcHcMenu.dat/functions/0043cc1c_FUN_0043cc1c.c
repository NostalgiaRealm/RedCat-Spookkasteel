/*
 * FUN_0043cc1c at 0043cc1c
 * undefined __register FUN_0043cc1c(void)
 * Address ranges: 0043cc1c-0043cd81;0043cd89-0043cd8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043cc1c(void)

{
  UINT uMode;
  HMODULE hModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  
  if (PTR_DAT_0057261c[8] != '\0') {
    uMode = SetErrorMode(0x8000);
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    if (DAT_00573790 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("USER32");
      DAT_00573790 = GetProcAddress(hModule,"WINNLSEnableIME");
    }
    if (DAT_0056f8b8 == (HMODULE)0x0) {
      DAT_0056f8b8 = LoadLibraryA("IMM32.DLL");
      if (DAT_0056f8b8 != (HMODULE)0x0) {
        DAT_00573794 = GetProcAddress(DAT_0056f8b8,"ImmGetContext");
        DAT_00573798 = GetProcAddress(DAT_0056f8b8,"ImmReleaseContext");
        DAT_0057379c = GetProcAddress(DAT_0056f8b8,"ImmGetConversionStatus");
        DAT_005737a0 = GetProcAddress(DAT_0056f8b8,"ImmSetConversionStatus");
        DAT_005737a4 = GetProcAddress(DAT_0056f8b8,"ImmSetOpenStatus");
        _DAT_005737a8 = GetProcAddress(DAT_0056f8b8,"ImmSetCompositionWindow");
        _DAT_005737ac = GetProcAddress(DAT_0056f8b8,"ImmSetCompositionFontA");
        _DAT_005737b0 = GetProcAddress(DAT_0056f8b8,"ImmGetCompositionStringA");
        DAT_005737b4 = GetProcAddress(DAT_0056f8b8,"ImmIsIME");
        _DAT_005737b8 = GetProcAddress(DAT_0056f8b8,"ImmNotifyIME");
      }
    }
    *in_FS_OFFSET = uStack_18;
    uStack_18 = 0x43cd81;
    SetErrorMode(uMode);
    return;
  }
  return;
}

