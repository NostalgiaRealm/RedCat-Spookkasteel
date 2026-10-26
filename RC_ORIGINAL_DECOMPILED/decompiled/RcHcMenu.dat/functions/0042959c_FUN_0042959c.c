/*
 * FUN_0042959c at 0042959c
 * undefined1 __register FUN_0042959c(int * param_1)
 * Address ranges: 0042959c-004295d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0042959c(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  LRESULT LVar2;
  undefined1 uVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar3 = *(undefined1 *)((int)param_1 + 0x1fd);
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    lParam = 0;
    wParam = 0;
    Msg = 0xb8;
    hWnd = (HWND)FUN_00438988(param_1);
    LVar2 = SendMessageA(hWnd,Msg,wParam,lParam);
    uVar3 = LVar2 != 0;
  }
  return uVar3;
}

