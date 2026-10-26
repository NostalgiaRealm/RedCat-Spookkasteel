/*
 * FUN_0042a560 at 0042a560
 * undefined __register FUN_0042a560(int param_1, WPARAM param_2, LPARAM param_3)
 * Address ranges: 0042a560-0042a581
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 9 for TComboBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 9 for
   TComboBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a560(int param_1,WPARAM param_2,LPARAM param_3)

{
  HWND hWnd;
  UINT Msg;
  
  Msg = 0x151;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,param_2,param_3);
  return;
}

