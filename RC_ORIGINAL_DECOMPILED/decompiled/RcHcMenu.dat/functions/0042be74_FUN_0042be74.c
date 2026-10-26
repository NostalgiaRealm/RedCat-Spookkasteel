/*
 * FUN_0042be74 at 0042be74
 * undefined __register FUN_0042be74(int * param_1)
 * Address ranges: 0042be74-0042be9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x427f08 slot 38 for TRadioButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x427f08 slot 38 for
   TRadioButton. Original bytes unchanged; names and types still inferred. */

void FUN_0042be74(int *param_1)

{
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  FUN_00435a24(param_1);
  lParam = 0;
  wParam = (uint)*(byte *)((int)param_1 + 0x1f9);
  Msg = 0xf1;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

