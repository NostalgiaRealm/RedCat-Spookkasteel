/*
 * FUN_004f48fc at 004f48fc
 * undefined __register FUN_004f48fc(int param_1)
 * Address ranges: 004f48fc-004f4917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 5 for TTabStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f463c slot 5 for
   TTabStrings. Original bytes unchanged; names and types still inferred. */

void FUN_004f48fc(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x1304;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

