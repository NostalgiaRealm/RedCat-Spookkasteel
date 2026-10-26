/*
 * FUN_0042a688 at 0042a688
 * undefined __register FUN_0042a688(int param_1, WPARAM param_2)
 * Address ranges: 0042a688-0042a6a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 17 for TComboBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 17 for
   TComboBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a688(int param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x144;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

