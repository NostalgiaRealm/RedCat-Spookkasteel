/*
 * FUN_00429714 at 00429714
 * int __register FUN_00429714(int * param_1)
 * Address ranges: 00429714-00429740
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 46 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 46 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

int FUN_00429714(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  int *wParam;
  int *lParam;
  int local_c;
  int local_8;
  
  wParam = &local_c;
  lParam = &local_8;
  Msg = 0xb0;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
  return local_8 - local_c;
}

