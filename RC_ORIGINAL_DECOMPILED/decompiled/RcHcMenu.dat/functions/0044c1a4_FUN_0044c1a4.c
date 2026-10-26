/*
 * FUN_0044c1a4 at 0044c1a4
 * undefined __register FUN_0044c1a4(int * param_1)
 * Address ranges: 0044c1a4-0044c1e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 39 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 39 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044c1a4(int *param_1)

{
  WPARAM wParam;
  LPARAM lParam;
  
  if ((*(byte *)(param_1 + 0xb3) & 0x10) == 0) {
    FUN_00435c58((int)param_1);
  }
  else {
    lParam = 0;
    wParam = FUN_00438988(param_1);
    SendMessageA(*(HWND *)(*(int *)(DAT_005737d4 + 0x38) + 0x23c),0x221,wParam,lParam);
  }
  param_1[0x8f] = 0;
  return;
}

