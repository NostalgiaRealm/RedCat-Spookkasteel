/*
 * FUN_004f5300 at 004f5300
 * undefined __register FUN_004f5300(int * param_1, WPARAM param_2)
 * Address ranges: 004f5300-004f531d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5300(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x130c;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

