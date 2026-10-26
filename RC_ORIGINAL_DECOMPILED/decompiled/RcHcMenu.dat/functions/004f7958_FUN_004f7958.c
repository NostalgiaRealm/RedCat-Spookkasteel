/*
 * FUN_004f7958 at 004f7958
 * undefined __register FUN_004f7958(int * param_1, int param_2)
 * Address ranges: 004f7958-004f79b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f7958(int *param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  UINT Msg;
  WPARAM wParam;
  int *lParam;
  int local_1c;
  int local_18;
  byte local_14;
  
  lParam = &local_1c;
  local_1c = (int)*(short *)(param_2 + 8);
  local_18 = (int)*(short *)(param_2 + 10);
  wParam = 0;
  Msg = 0x1206;
  hWnd = (HWND)FUN_00438988(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (((-1 < LVar1) && ((local_14 & 2) != 0)) &&
     (iVar2 = FUN_004f6c58(param_1[0x7c],LVar1), *(char *)(iVar2 + 0x1e) == '\0')) {
    return;
  }
  FUN_00433b14(param_1,param_2);
  return;
}

