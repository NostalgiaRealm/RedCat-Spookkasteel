/*
 * FUN_004294d8 at 004294d8
 * undefined __register FUN_004294d8(int * param_1, WPARAM param_2)
 * Address ranges: 004294d8-004294f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 45 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 45 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

void FUN_004294d8(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0xc5;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

