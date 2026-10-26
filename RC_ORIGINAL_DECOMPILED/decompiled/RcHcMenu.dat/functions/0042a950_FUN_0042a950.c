/*
 * FUN_0042a950 at 0042a950
 * undefined __register FUN_0042a950(int * param_1)
 * Address ranges: 0042a950-0042a96a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a950(int *param_1)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x147;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,wParam,lParam);
  return;
}

