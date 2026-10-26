/*
 * FUN_0042c68c at 0042c68c
 * undefined __register FUN_0042c68c(int * param_1)
 * Address ranges: 0042c68c-0042c6a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c68c(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x184;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

