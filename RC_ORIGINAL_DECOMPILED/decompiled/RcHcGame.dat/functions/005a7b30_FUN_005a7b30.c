/*
 * FUN_005a7b30 at 005a7b30
 * undefined FUN_005a7b30(void)
 * Address ranges: 005a7b30-005a7cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005a7b30(int param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  LONG dwNewLong;
  DWORD dwStyle;
  HWND pHVar2;
  int cx;
  uint uVar3;
  uint uVar4;
  int Y;
  int cy;
  int X;
  tagRECT *lpRect;
  uint local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a84a8,99);
  *(int *)(param_1 + 0xa4) = param_2;
  *(int *)(param_1 + 0xa8) = param_3;
  *(char *)(param_1 + 0xa0) = param_4;
  if (param_4 == '\0') {
    local_28 = 0x40000;
    uVar4 = 0x80000000;
    uVar3 = 0x80cb0000;
  }
  else {
    local_28 = 0x300;
    uVar4 = 0xc00000;
    uVar3 = 0x800b0000;
  }
  uVar1 = GetWindowLongA(*(HWND *)(param_1 + 0x54),-0x10);
  SetWindowLongA(*(HWND *)(param_1 + 0x54),-0x10,uVar1 | uVar4);
  uVar4 = GetWindowLongA(*(HWND *)(param_1 + 0x54),-0x10);
  SetWindowLongA(*(HWND *)(param_1 + 0x54),-0x10,uVar4 & ~uVar3);
  uVar3 = GetWindowLongA(*(HWND *)(param_1 + 0x54),-0x14);
  SetWindowLongA(*(HWND *)(param_1 + 0x54),-0x14,uVar3 | local_28);
  dwNewLong = GetWindowLongA(*(HWND *)(param_1 + 0x54),-0x14);
  SetWindowLongA(*(HWND *)(param_1 + 0x54),-0x14,dwNewLong);
  if (param_4 == '\0') {
    cx = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    pHVar2 = *(HWND *)(param_1 + 0x54);
    Y = 0;
    X = 0;
  }
  else {
    dwStyle = GetWindowLongA(*(HWND *)(param_1 + 0x54),-0x10);
    lpRect = &local_10;
    pHVar2 = GetDesktopWindow();
    GetWindowRect(pHVar2,lpRect);
    local_20.right = param_2 + -1;
    local_20.bottom = param_3 + -1;
    local_20.left = 0;
    local_20.top = 0;
    AdjustWindowRect(&local_20,dwStyle,0);
    cx = (local_20.right - local_20.left) + 1;
    cy = (local_20.bottom - local_20.top) + 1;
    Y = (local_10.bottom + local_10.top) / 2 - cy / 2;
    X = (local_10.right + local_10.left) / 2 - cx / 2;
    pHVar2 = *(HWND *)(param_1 + 0x54);
  }
  SetWindowPos(pHVar2,(HWND)0x0,X,Y,cx,cy,0x104);
  ShowWindow(*(HWND *)(param_1 + 0x54),1);
  UpdateWindow(*(HWND *)(param_1 + 0x54));
  SetFocus(*(HWND *)(param_1 + 0x54));
  FUN_005ae770();
  return 1;
}

