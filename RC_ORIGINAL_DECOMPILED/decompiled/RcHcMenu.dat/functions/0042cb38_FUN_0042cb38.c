/*
 * FUN_0042cb38 at 0042cb38
 * undefined __register FUN_0042cb38(int * param_1)
 * Address ranges: 0042cb38-0042cbd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042cb38(int *param_1)

{
  HWND pHVar1;
  HWND hWndInsertAfter;
  int X;
  int Y;
  int cx;
  int cy;
  WPARAM wParam;
  UINT UVar2;
  int *lParam;
  
  cx = param_1[0xe];
  cy = param_1[0xf];
  FUN_00435a24(param_1);
  UVar2 = 0x14;
  Y = param_1[0xd];
  X = param_1[0xc];
  hWndInsertAfter = (HWND)0x0;
  pHVar1 = (HWND)FUN_00438988(param_1);
  SetWindowPos(pHVar1,hWndInsertAfter,X,Y,cx,cy,UVar2);
  if (param_1[0x83] != 0) {
    lParam = param_1 + 0x83;
    wParam = 1;
    UVar2 = 0x192;
    pHVar1 = (HWND)FUN_00438988(param_1);
    SendMessageA(pHVar1,UVar2,wParam,(LPARAM)lParam);
  }
  FUN_0042c6b4(param_1);
  if (param_1[0x84] != 0) {
    (**(code **)(*(int *)param_1[0x7c] + 8))((int *)param_1[0x7c],param_1[0x84]);
    FUN_0042c90c(param_1,param_1[0x85]);
    FUN_0042c778(param_1,param_1[0x86]);
    FUN_00403094((int *)param_1[0x84]);
    param_1[0x84] = 0;
  }
  return;
}

