/*
 * FUN_004243bc at 004243bc
 * undefined __register FUN_004243bc(void)
 * Address ranges: 004243bc-0042451c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004243bc(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("comctl32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_00573730 = GetProcAddress(hModule,"InitializeFlatSB");
    _DAT_00573734 = GetProcAddress(hModule,"UninitializeFlatSB");
    _DAT_00573728 = GetProcAddress(hModule,"FlatSB_GetScrollProp");
    DAT_0057372c = GetProcAddress(hModule,"FlatSB_SetScrollProp");
    _DAT_00573704 = GetProcAddress(hModule,"FlatSB_EnableScrollBar");
    if (_DAT_00573704 == (FARPROC)0x0) {
      _DAT_00573704 = (FARPROC)&DAT_00408090;
    }
    _DAT_00573708 = GetProcAddress(hModule,"FlatSB_ShowScrollBar");
    if (_DAT_00573708 == (FARPROC)0x0) {
      _DAT_00573708 = (FARPROC)&DAT_00408488;
    }
    _DAT_0057370c = GetProcAddress(hModule,"FlatSB_GetScrollRange");
    if (_DAT_0057370c == (FARPROC)0x0) {
      _DAT_0057370c = GetScrollRange;
    }
    DAT_00573710 = GetProcAddress(hModule,"FlatSB_GetScrollInfo");
    if (DAT_00573710 == (FARPROC)0x0) {
      DAT_00573710 = (FARPROC)&DAT_004081d0;
    }
    DAT_00573714 = GetProcAddress(hModule,"FlatSB_GetScrollPos");
    if (DAT_00573714 == (FARPROC)0x0) {
      DAT_00573714 = GetScrollPos;
    }
    DAT_00573718 = GetProcAddress(hModule,"FlatSB_SetScrollPos");
    if (DAT_00573718 == (FARPROC)0x0) {
      DAT_00573718 = SetScrollPos;
    }
    DAT_0057371c = GetProcAddress(hModule,"FlatSB_SetScrollInfo");
    if (DAT_0057371c == (FARPROC)0x0) {
      DAT_0057371c = SetScrollInfo;
    }
    _DAT_00573720 = GetProcAddress(hModule,"FlatSB_SetScrollRange");
    if (_DAT_00573720 == (FARPROC)0x0) {
      _DAT_00573720 = SetScrollRange;
    }
  }
  return;
}

