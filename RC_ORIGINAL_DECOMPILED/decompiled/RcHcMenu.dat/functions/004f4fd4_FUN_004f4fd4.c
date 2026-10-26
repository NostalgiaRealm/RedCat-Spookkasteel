/*
 * FUN_004f4fd4 at 004f4fd4
 * undefined __register FUN_004f4fd4(int * param_1)
 * Address ranges: 004f4fd4-004f4fee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f4fd4(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x130b;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

