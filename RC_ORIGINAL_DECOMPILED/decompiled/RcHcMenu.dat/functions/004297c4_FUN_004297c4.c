/*
 * FUN_004297c4 at 004297c4
 * undefined __register FUN_004297c4(int * param_1)
 * Address ranges: 004297c4-004297de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004297c4(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = -1;
  wParam = 0;
  Msg = 0xb1;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

