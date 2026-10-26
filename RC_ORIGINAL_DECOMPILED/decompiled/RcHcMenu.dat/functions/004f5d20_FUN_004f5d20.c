/*
 * FUN_004f5d20 at 004f5d20
 * undefined __register FUN_004f5d20(int param_1, byte param_2)
 * Address ranges: 004f5d20-004f5d5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5d20(int param_1,byte param_2)

{
  uint lParam;
  WPARAM wParam;
  HWND hWnd;
  UINT Msg;
  
  if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
    lParam = FUN_004084e8((uint)param_2,0);
    wParam = FUN_004f5a64(param_1);
    Msg = 0x1333;
    hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 500));
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  *(byte *)(param_1 + 0x1fa) = param_2;
  return;
}

