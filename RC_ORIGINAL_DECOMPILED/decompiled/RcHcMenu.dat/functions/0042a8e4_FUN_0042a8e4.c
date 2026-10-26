/*
 * FUN_0042a8e4 at 0042a8e4
 * bool __register FUN_0042a8e4(int * param_1)
 * Address ranges: 0042a8e4-0042a904
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0042a8e4(int *param_1)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0x157;
  hWnd = (HWND)FUN_00438988(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  return LVar1 != 0;
}

