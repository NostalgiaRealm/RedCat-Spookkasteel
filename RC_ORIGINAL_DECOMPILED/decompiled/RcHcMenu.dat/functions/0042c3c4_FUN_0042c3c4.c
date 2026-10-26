/*
 * FUN_0042c3c4 at 0042c3c4
 * undefined __register FUN_0042c3c4(int param_1, undefined * param_2)
 * Address ranges: 0042c3c4-0042c3e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 20 for TListBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428a30 slot 20 for
   TListBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042c3c4(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  lParam = FUN_004041f4(param_2);
  wParam = 0xffffffff;
  Msg = 0x1a2;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  return;
}

