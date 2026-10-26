/*
 * FUN_0043885c at 0043885c
 * undefined __register FUN_0043885c(int param_1)
 * Address ranges: 0043885c-00438877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 32 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 32 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_0043885c(int param_1)

{
  bool bVar1;
  
  bVar1 = FUN_00438c84(param_1);
  if (bVar1) {
    UpdateWindow(*(HWND *)(param_1 + 0x14c));
  }
  return;
}

