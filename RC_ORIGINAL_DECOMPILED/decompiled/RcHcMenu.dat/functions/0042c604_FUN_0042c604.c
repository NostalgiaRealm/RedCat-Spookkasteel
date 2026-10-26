/*
 * FUN_0042c604 at 0042c604
 * undefined __register FUN_0042c604(int * param_1, WPARAM param_2)
 * Address ranges: 0042c604-0042c621
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c604(int *param_1,WPARAM param_2)

{
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  lParam = 0;
  Msg = 0x199;
  hWnd = (HWND)FUN_00438988(param_1);
  SendMessageA(hWnd,Msg,param_2,lParam);
  return;
}

