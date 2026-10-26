/*
 * FUN_0042a488 at 0042a488
 * undefined __register FUN_0042a488(int param_1)
 * Address ranges: 0042a488-0042a4a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a488(int param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x146;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

