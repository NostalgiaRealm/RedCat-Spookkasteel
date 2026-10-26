/*
 * FUN_004295d4 at 004295d4
 * undefined __register FUN_004295d4(int * param_1, byte param_2)
 * Address ranges: 004295d4-00429609
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004295d4(int *param_1,byte param_2)

{
  bool bVar1;
  uint wParam;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    lParam = 0;
    wParam = (uint)param_2;
    Msg = 0xb9;
    hWnd = (HWND)FUN_00438988(param_1);
    SendMessageA(hWnd,Msg,wParam,lParam);
    return;
  }
  *(byte *)((int)param_1 + 0x1fd) = param_2;
  return;
}

