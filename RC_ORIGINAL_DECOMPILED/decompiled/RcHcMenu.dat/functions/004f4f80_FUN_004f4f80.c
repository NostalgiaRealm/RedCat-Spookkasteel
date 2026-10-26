/*
 * FUN_004f4f80 at 004f4f80
 * undefined __register FUN_004f4f80(int * param_1, int param_2)
 * Address ranges: 004f4f80-004f4faa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f4f80(int *param_1,int param_2)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  int lParam;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  wParam = 0;
  Msg = 0x1328;
  lParam = param_2;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 2;
  return;
}

