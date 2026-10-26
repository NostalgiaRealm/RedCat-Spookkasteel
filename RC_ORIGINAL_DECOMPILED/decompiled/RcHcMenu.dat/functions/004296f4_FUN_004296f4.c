/*
 * FUN_004296f4 at 004296f4
 * undefined __register FUN_004296f4(int * param_1, WPARAM param_2)
 * Address ranges: 004296f4-00429710
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 50 for TCustomEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x425714 slot 50 for
   TCustomEdit. Original bytes unchanged; names and types still inferred. */

void FUN_004296f4(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM lParam;
  
  Msg = 0xb1;
  lParam = param_2;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

