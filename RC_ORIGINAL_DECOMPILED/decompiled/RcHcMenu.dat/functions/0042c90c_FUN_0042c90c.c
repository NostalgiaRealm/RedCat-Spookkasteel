/*
 * FUN_0042c90c at 0042c90c
 * undefined __register FUN_0042c90c(int * param_1, WPARAM param_2)
 * Address ranges: 0042c90c-0042c934
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c90c(int *param_1,WPARAM param_2)

{
  WPARAM WVar1;
  HWND hWnd;
  UINT Msg;
  LPARAM lParam;
  
  WVar1 = FUN_0042c8dc(param_1);
  if (param_2 != WVar1) {
    lParam = 0;
    Msg = 0x197;
    hWnd = (HWND)FUN_00438988(param_1);
    SendMessageA(hWnd,Msg,param_2,lParam);
  }
  return;
}

