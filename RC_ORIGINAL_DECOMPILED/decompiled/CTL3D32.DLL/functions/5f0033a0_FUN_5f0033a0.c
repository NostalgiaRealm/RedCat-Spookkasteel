/*
 * FUN_5f0033a0 at 5f0033a0
 * undefined __cdecl FUN_5f0033a0(HWND param_1, HDC param_2, uint param_3)
 * Address ranges: 5f0033a0-5f0038be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f0033a0(HWND param_1,HDC param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  DWORD DVar2;
  HGDIOBJ pvVar3;
  HDC hdc;
  int x;
  HGDIOBJ local_254;
  int local_250;
  int local_24c;
  uint local_244;
  int local_240;
  int local_23c;
  HGDIOBJ local_238;
  uint local_234;
  tagRECT local_230;
  tagRECT local_220;
  undefined1 local_210 [12];
  int local_204;
  WCHAR local_200 [256];
  
  uVar1 = GetWindowLongW(param_1,-0x10);
  local_244 = uVar1 & 0x20;
  uVar1 = uVar1 & 0x1f;
  hWnd = GetParent(param_1);
  SetBkMode(param_2,2);
  GetClientRect(param_1,&local_220);
  local_230.left = local_220.left;
  local_230.top = local_220.top;
  local_230.right = local_220.right;
  local_230.bottom = local_220.bottom;
  local_254 = (HGDIOBJ)SendMessageW(param_1,0x31,0,0);
  if (local_254 != (HGDIOBJ)0x0) {
    local_254 = SelectObject(param_2,local_254);
  }
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  pvVar3 = (HGDIOBJ)SendMessageW(hWnd,0x135,(WPARAM)param_2,(LPARAM)param_1);
  local_238 = SelectObject(param_2,pvVar3);
  IntersectClipRect(param_2,local_230.left,local_230.top,local_230.right,local_230.bottom);
  if (((param_3 & 0x10) != 0) && (uVar1 != 7)) {
    PatBlt(param_2,local_230.left,local_230.top,local_230.right - local_230.left,
           local_230.bottom - local_230.top,0xf00021);
  }
  local_23c = IsWindowEnabled(param_1);
  local_210._0_4_ = SendMessageW(param_1,0xf2,0,0);
  local_24c = 0;
  local_234 = local_210._0_4_ & 3;
  local_210._0_4_ = local_210._0_4_ & 4;
  local_250 = ((int)local_210._0_4_ >> 1 | -(uint)(local_234 == 0) + 1) * 0xe;
  if (local_23c == 0) {
    local_250 = local_250 + (-(uint)(local_234 == 0) + 3) * 0xe;
  }
  if ((((param_3 & 10) != 0) || (uVar1 == 0)) || (uVar1 == 1)) {
    local_240 = GetWindowTextW(param_1,local_200,0x100);
  }
  switch(uVar1) {
  case 0:
  case 1:
    FUN_5f003060(param_1,param_2,&local_220,local_200,local_240,(short)uVar1,local_210._0_4_);
    goto switchD_5f00355c_caseD_8;
  case 2:
  case 3:
    break;
  case 4:
  case 9:
    local_24c = 0xd;
    break;
  case 5:
  case 6:
    if (local_234 == 2) {
      local_24c = 0x1a;
    }
    break;
  case 7:
    if ((param_3 & 6) != 0) {
      FUN_5f001530(param_2,local_200,(LONG *)&local_234,(LONG *)&local_244);
      if (local_244 == 0) {
        FUN_5f001530(param_2,(WCHAR *)&DAT_5f00c230,(LONG *)local_210,(LONG *)&local_244);
      }
      local_230.left = local_230.left + 4;
      local_230.right = local_230.left + local_234 + 4;
      local_230.bottom = local_230.top + local_244;
      if ((param_3 & 0x20) != 0) {
        local_210._4_4_ = local_230.top;
        local_210._8_4_ = local_220.right;
        local_210._0_4_ = local_230.left;
        local_204 = local_230.bottom;
        ClientToScreen(param_1,(LPPOINT)local_210);
        ClientToScreen(param_1,(LPPOINT)(local_210 + 8));
        ScreenToClient(hWnd,(LPPOINT)local_210);
        ScreenToClient(hWnd,(LPPOINT)(local_210 + 8));
        InvalidateRect(hWnd,(RECT *)local_210,1);
        return;
      }
      local_220.right = local_220.right + -1;
      local_220.bottom = local_220.bottom + -1;
      local_220.top = local_220.top + (int)local_244 / 2;
      FUN_5f001340(param_2,&local_220.left,2,2,0xf);
      OffsetRect(&local_220,1,1);
      FUN_5f001340(param_2,&local_220.left,0,0,0xf);
      if (local_23c == 0) {
        SetTextColor(param_2,DAT_5f00527c);
      }
      DrawTextW(param_2,local_200,local_240,&local_230,0x20);
    }
  default:
    goto switchD_5f00355c_caseD_8;
  }
  if (((param_3 & 4) != 0) && (hdc = CreateCompatibleDC(param_2), hdc != (HDC)0x0)) {
    pvVar3 = SelectObject(hdc,DAT_5f005290);
    if (pvVar3 != (HGDIOBJ)0x0) {
      x = local_230.left;
      if (local_244 != 0) {
        x = local_230.right + -0xe;
      }
      BitBlt(param_2,x,local_230.top + ((local_230.bottom - local_230.top) + -0xd) / 2,0xe,0xd,hdc,
             local_250,local_24c,0xcc0020);
      SelectObject(hdc,pvVar3);
    }
    DeleteDC(hdc);
  }
  if ((param_3 & 2) != 0) {
    if (local_244 == 0) {
      local_230.left = local_220.left + 0x12;
    }
    else {
      local_230.right = local_220.right + -0x12;
    }
    if (local_23c == 0) {
      SetTextColor(param_2,DAT_5f00527c);
    }
    DrawTextW(param_2,local_200,local_240,&local_230,0x24);
  }
  if ((param_3 & 8) != 0) {
    FUN_5f001530(param_2,local_200,(LONG *)local_210,(LONG *)&local_234);
    local_230.top = (int)((local_230.bottom - local_234) - local_230.top) / 2;
    local_230.bottom = local_230.top + local_234;
    if (local_244 == 0) {
      local_230.left = local_220.left + 0x12;
    }
    else {
      local_220.right = local_220.right + -0x12;
      local_230.left = local_220.left;
    }
    local_230.right = local_230.left + local_210._0_4_;
    InflateRect(&local_230,1,1);
    IntersectRect(&local_230,&local_230,&local_220);
    DrawFocusRect(param_2,&local_230);
  }
switchD_5f00355c_caseD_8:
  SelectObject(param_2,local_238);
  if (local_254 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_254);
  }
  return;
}

