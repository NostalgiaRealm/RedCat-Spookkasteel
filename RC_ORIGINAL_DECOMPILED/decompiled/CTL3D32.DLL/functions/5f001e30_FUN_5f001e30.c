/*
 * FUN_5f001e30 at 5f001e30
 * LRESULT __stdcall FUN_5f001e30(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * Address ranges: 5f001e30-5f0020d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_5f001e30(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  BOOL BVar2;
  uint uVar3;
  HDC hdc;
  int iVar4;
  bool bVar5;
  int local_38;
  HGDIOBJ local_34;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_5 == 0) {
    lpPrevWndFunc = FUN_5f001020(param_1,6);
  }
  else {
    lpPrevWndFunc = (WNDPROC)0x0;
  }
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    LVar1 = DefWindowProcW(param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = CallWindowProcW(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  }
  if (DAT_5f005240 == 0) {
    return LVar1;
  }
  BVar2 = IsIconic(param_1);
  if (BVar2 != 0) {
    return LVar1;
  }
  local_38 = 1;
  SendMessageW(param_1,0x11ef,0,(LPARAM)&local_38);
  uVar3 = GetWindowLongW(param_1,-0x10);
  if ((local_38 != 0) && ((uVar3 & 0x10400080) == 0x10400080)) {
    bVar5 = (uVar3 & 0xc00000) == 0xc00000;
    iVar4 = DAT_5f00a398 - (uint)bVar5;
    hdc = GetWindowDC(param_1);
    GetWindowRect(param_1,&local_30);
    local_30.right = local_30.right - local_30.left;
    local_30.bottom = local_30.bottom - local_30.top;
    local_30.top = 0;
    local_30.left = 0;
    FUN_5f001340(hdc,&local_30.left,2,7,0xf);
    InflateRect(&local_30,-1,-1);
    FUN_5f001340(hdc,&local_30.left,0,2,0xf);
    InflateRect(&local_30,-1,-1);
    local_34 = SelectObject(hdc,DAT_5f005288);
    local_20.left = local_30.left;
    local_20.top = local_30.top;
    local_20.bottom = local_30.bottom;
    local_20.right = local_30.left + _DAT_5f00a394;
    FUN_5f001310(hdc,&local_20.left);
    OffsetRect(&local_20,(local_30.right - local_30.left) - _DAT_5f00a394,0);
    FUN_5f001310(hdc,&local_20.left);
    local_20.left = local_30.left + _DAT_5f00a394;
    local_20.right = local_30.right - _DAT_5f00a394;
    local_20.bottom = local_20.top + iVar4;
    FUN_5f001310(hdc,&local_20.left);
    if (bVar5) {
      local_c = iVar4 + local_20.top;
      local_10 = local_20.left;
      local_8 = local_20.right;
      local_4 = DAT_5f00a39c + local_c;
      FUN_5f001340(hdc,&local_10,2,0,0xf);
    }
    local_20.top = local_20.top + ((local_30.bottom - local_30.top) - _DAT_5f00a394);
    local_20.bottom = local_20.top + DAT_5f00a398;
    FUN_5f001310(hdc,&local_20.left);
    SelectObject(hdc,local_34);
    ReleaseDC(param_1,hdc);
  }
  return LVar1;
}

