/*
 * FUN_0042a03c at 0042a03c
 * undefined __register FUN_0042a03c(int param_1, byte param_2)
 * Address ranges: 0042a03c-0042a08a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x428840 slot 12 for TMemoStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x428840 slot 12 for
   TMemoStrings. Original bytes unchanged; names and types still inferred. */

void FUN_0042a03c(int param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  bVar1 = FUN_00438c84(*(int *)(param_1 + 0xc));
  if (bVar1) {
    lParam = 0;
    wParam = (param_2 ^ 1) & 0x7f;
    Msg = 0xb;
    hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    SendMessageA(hWnd,Msg,wParam,lParam);
    if (param_2 != 1) {
      FUN_00433700(*(int *)(param_1 + 0xc),0xb019,0,0);
      FUN_00432c38(*(int **)(param_1 + 0xc));
    }
  }
  return;
}

