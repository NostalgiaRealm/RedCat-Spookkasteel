/*
 * FUN_004296d0 at 004296d0
 * undefined4 __register FUN_004296d0(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004296d0-004296f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 47 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 47 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004296d0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  HWND hWnd;
  UINT Msg;
  undefined4 *wParam;
  LPARAM lParam;
  undefined4 local_8;
  
  wParam = &local_8;
  lParam = 0;
  Msg = 0xb0;
  local_8 = param_3;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,(WPARAM)wParam,lParam);
  return local_8;
}

