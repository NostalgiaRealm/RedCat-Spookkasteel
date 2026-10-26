/*
 * FUN_004f6524 at 004f6524
 * undefined __register FUN_004f6524(int * param_1, int param_2)
 * Address ranges: 004f6524-004f657e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6524(int *param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  int iVar2;
  UINT Msg;
  WPARAM wParam;
  int *lParam;
  int local_20;
  undefined4 local_1c;
  int local_14;
  undefined4 local_10;
  
  lParam = &local_20;
  FUN_00408570(*(undefined4 *)(param_2 + 8),&local_14);
  local_20 = local_14;
  local_1c = local_10;
  wParam = 0;
  Msg = 0x130d;
  hWnd = (HWND)FUN_00438988(param_1);
  LVar1 = SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
  if (-1 < LVar1) {
    iVar2 = FUN_004f4fd4(param_1);
    if (LVar1 != iVar2) {
      *(undefined4 *)(param_2 + 0xc) = 1;
    }
  }
  return;
}

