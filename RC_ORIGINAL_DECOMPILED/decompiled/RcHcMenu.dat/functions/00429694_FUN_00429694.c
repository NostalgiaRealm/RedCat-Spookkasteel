/*
 * FUN_00429694 at 00429694
 * undefined __register FUN_00429694(int * param_1, byte param_2)
 * Address ranges: 00429694-004296ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429694(int *param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(byte *)((int)param_1 + 0x1f6)) {
    *(byte *)((int)param_1 + 0x1f6) = param_2;
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      lParam = 0;
      wParam = (uint)param_2;
      Msg = 0xcf;
      hWnd = (HWND)FUN_00438988(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
  }
  return;
}

