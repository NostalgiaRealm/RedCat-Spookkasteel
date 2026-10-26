/*
 * FUN_0042c8dc at 0042c8dc
 * undefined __register FUN_0042c8dc(int * param_1)
 * Address ranges: 0042c8dc-0042c8f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c8dc(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x18e;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

