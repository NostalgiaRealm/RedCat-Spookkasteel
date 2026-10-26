/*
 * FUN_004f54bc at 004f54bc
 * undefined __register FUN_004f54bc(int * param_1)
 * Address ranges: 004f54bc-004f54e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f54bc(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  
  lParam = param_1[0x85];
  wParam = 0;
  Msg = 0x1329;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  FUN_004f547c(param_1);
  return;
}

