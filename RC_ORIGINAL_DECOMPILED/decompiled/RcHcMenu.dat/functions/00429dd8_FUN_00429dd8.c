/*
 * FUN_00429dd8 at 00429dd8
 * undefined __register FUN_00429dd8(int param_1, WPARAM param_2, int * param_3)
 * Address ranges: 00429dd8-00429e1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429dd8(int param_1,WPARAM param_2,int *param_3)

{
  HWND hWnd;
  uint uVar1;
  UINT Msg;
  undefined2 *lParam;
  undefined2 local_100c;
  undefined2 uStack_100a;
  
  lParam = &local_100c;
  _local_100c = CONCAT22((short)((uint)param_1 >> 0x10),0x1000);
  Msg = 0xc4;
  hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  uVar1 = SendMessageA(hWnd,Msg,param_2,(LPARAM)lParam);
  FUN_00403e98(param_3,(undefined4 *)&local_100c,uVar1);
  return;
}

