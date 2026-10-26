/*
 * FUN_0042a718 at 0042a718
 * undefined __register FUN_0042a718(int param_1, byte param_2)
 * Address ranges: 0042a718-0042a749
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 12 for TComboBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 12 for
   TComboBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a718(int param_1,byte param_2)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  wParam = (param_2 ^ 1) & 0x7f;
  Msg = 0xb;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  if (param_2 != 1) {
    FUN_00432c38(*(int **)(param_1 + 0xc));
  }
  return;
}

