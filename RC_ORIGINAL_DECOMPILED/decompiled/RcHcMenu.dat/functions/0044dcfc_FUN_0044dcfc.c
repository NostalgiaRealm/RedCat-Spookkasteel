/*
 * FUN_0044dcfc at 0044dcfc
 * undefined __register FUN_0044dcfc(int * param_1)
 * Address ranges: 0044dcfc-0044dd16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044dcfc(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xb021;
  hWnd = (HWND)FUN_00438988(param_1);
  PostMessageA(hWnd,Msg,wParam,lParam);
  return;
}

