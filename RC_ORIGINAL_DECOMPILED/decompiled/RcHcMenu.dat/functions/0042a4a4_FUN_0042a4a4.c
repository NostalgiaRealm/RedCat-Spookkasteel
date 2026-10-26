/*
 * FUN_0042a4a4 at 0042a4a4
 * undefined __register FUN_0042a4a4(int param_1, WPARAM param_2, int * param_3)
 * Address ranges: 0042a4a4-0042a4e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a4a4(int param_1,WPARAM param_2,int *param_3)

{
  HWND hWnd;
  uint uVar1;
  UINT Msg;
  int *lParam;
  int aiStack_100c [1024];
  
  lParam = aiStack_100c;
  Msg = 0x148;
  aiStack_100c[0] = param_1;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  uVar1 = SendMessageA(hWnd,Msg,param_2,(LPARAM)lParam);
  if (uVar1 == 0xffffffff) {
    uVar1 = 0;
  }
  FUN_00403e98(param_3,aiStack_100c,uVar1);
  return;
}

