/*
 * FUN_0042bf60 at 0042bf60
 * undefined __register FUN_0042bf60(int param_1)
 * Address ranges: 0042bf60-0042bf7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bf60(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x18b;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

