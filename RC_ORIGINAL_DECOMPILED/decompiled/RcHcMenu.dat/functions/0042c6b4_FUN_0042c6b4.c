/*
 * FUN_0042c6b4 at 0042c6b4
 * undefined __register FUN_0042c6b4(int * param_1)
 * Address ranges: 0042c6b4-0042c6f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c6b4(int *param_1)

{
  int iVar1;
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  iVar1 = param_1[0x7f];
  if ((0 < iVar1) && (0 < param_1[0xe])) {
    wParam = (param_1[0xe] + iVar1 + -3) / iVar1;
    if ((int)wParam < 1) {
      wParam = 1;
    }
    lParam = 0;
    Msg = 0x195;
    hWnd = (HWND)FUN_00438988(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  return;
}

