/*
 * FUN_004f547c at 004f547c
 * undefined __register FUN_004f547c(int * param_1)
 * Address ranges: 004f547c-004f54ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f547c(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  
  if ((char)param_1[0x86] == '\0') {
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      lParam = CONCAT22((short)param_1[0xf],(short)param_1[0xe]);
      wParam = 0;
      Msg = 5;
      hWnd = (HWND)FUN_00438988(param_1);
      SendMessageA(hWnd,Msg,wParam,lParam);
    }
    FUN_0043532c(param_1);
  }
  return;
}

