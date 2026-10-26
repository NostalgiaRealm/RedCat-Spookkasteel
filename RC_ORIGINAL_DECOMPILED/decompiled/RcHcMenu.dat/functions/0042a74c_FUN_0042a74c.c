/*
 * FUN_0042a74c at 0042a74c
 * undefined __register FUN_0042a74c(int param_1, undefined * param_2)
 * Address ranges: 0042a74c-0042a771
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 20 for TComboBoxStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428934 slot 20 for
   TComboBoxStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a74c(int param_1,undefined *param_2)

{
  undefined *lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  lParam = FUN_004041f4(param_2);
  wParam = 0xffffffff;
  Msg = 0x158;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  return;
}

