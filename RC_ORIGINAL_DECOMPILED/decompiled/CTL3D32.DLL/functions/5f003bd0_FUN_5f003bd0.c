/*
 * FUN_5f003bd0 at 5f003bd0
 * undefined __cdecl FUN_5f003bd0(HWND param_1, int param_2, int param_3)
 * Address ranges: 5f003bd0-5f003f05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f003bd0(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LRESULT LVar3;
  HWND pHVar4;
  HDC hDC;
  LONG LVar5;
  int iVar6;
  HWND hWndTo;
  uint uVar7;
  ushort uVar8;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_40 [12];
  int local_34;
  tagRECT local_30;
  int local_20 [8];
  
  uVar2 = GetWindowLongW(param_1,-0x10);
  if (((uVar2 & 0x10000000) != 0) &&
     (((param_3 != 3 || (((byte)uVar2 & 3) != 3)) ||
      (LVar3 = SendMessageW(param_1,0x157,0,0), LVar3 == 0)))) {
    if (param_2 != 0) {
      HideCaret(param_1);
    }
    GetWindowRect(param_1,(LPRECT)local_40);
    pHVar4 = GetParent(param_1);
    ScreenToClient(pHVar4,(LPPOINT)local_40);
    uVar8 = 0xf;
    ScreenToClient(pHVar4,(LPPOINT)(local_40 + 8));
    hDC = GetDC(pHVar4);
    local_48 = uVar2 & 0x100000;
    if (local_48 != 0) {
      uVar8 = 7;
    }
    local_44 = uVar2 & 0x200000;
    if (local_44 != 0) {
      uVar8 = uVar8 & 0xfffb;
    }
    LVar5 = GetWindowLongW(param_1,-0xc);
    hWndTo = pHVar4;
    if (param_2 - LVar5 == -1000) {
      local_4c = 0x29a;
      local_30.left = SendMessageW(pHVar4,0x1944,0,(LPARAM)&local_4c);
      if (local_4c == 0x29a) {
        local_30.left = SendMessageW(pHVar4,0x1943,0,(LPARAM)&local_4c);
      }
      GetClassNameW(pHVar4,(LPWSTR)local_20,0x10);
      iVar6 = lstrcmpW((LPCWSTR)local_20,L"ComboBox");
      if ((iVar6 == 0) || ((local_4c == 1 && (local_30.left == 0x3eb)))) {
        hWndTo = GetParent(pHVar4);
        MapWindowPoints(pHVar4,hWndTo,(LPPOINT)local_40,2);
        ReleaseDC(pHVar4,hDC);
        hDC = GetDC(hWndTo);
        if (param_2 == 0) {
          uVar8 = uVar8 & 0xfffd;
          local_40._4_4_ = local_40._4_4_ + 1;
        }
        else {
          uVar7 = GetWindowLongW(pHVar4,-0x10);
          if (((uVar7 & 3) == 2) || ((uVar7 & 3) == 3)) {
            LVar3 = SendMessageW(pHVar4,0x157,0,0);
            if (LVar3 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(param_1);
              return;
            }
          }
          else {
            uVar8 = uVar8 & 0xfff7;
            pHVar4 = GetWindow(pHVar4,5);
            GetWindowRect(pHVar4,&local_30);
            local_40._8_4_ = local_40._8_4_ + (local_30.left - local_30.right);
            FUN_5f001480(hDC,(int *)local_40,0x1008);
            local_40._8_4_ = local_40._8_4_ + (local_30.right - local_30.left);
          }
        }
      }
    }
    FUN_5f001480(hDC,(int *)local_40,uVar8);
    uVar1 = local_40._8_4_;
    if ((param_3 == 3) && (((byte)uVar2 & 3) == 3)) {
      local_40._0_4_ = GetSystemMetrics(2);
      local_40._0_4_ = uVar1 - local_40._0_4_;
      FUN_5f001340(hDC,(int *)local_40,7,7,0xc);
      FUN_5f002ff0(param_1);
    }
    else {
      if (local_44 != 0) {
        local_40._8_4_ = local_40._8_4_ + 1;
        FUN_5f001340(hDC,(int *)local_40,0,0,4);
        iVar6 = local_40._8_4_ + -1;
        local_20[0] = local_40._0_4_;
        local_40._8_4_ = iVar6;
        local_40._0_4_ = GetSystemMetrics(2);
        local_40._0_4_ = iVar6 - local_40._0_4_;
        FUN_5f001340(hDC,(int *)local_40,7,7,8);
        local_40._0_4_ = local_20[0];
      }
      if (local_48 != 0) {
        local_34 = local_34 + 1;
        FUN_5f001340(hDC,(int *)local_40,0,0,8);
        iVar6 = local_34 + -1;
        local_34 = iVar6;
        local_40._4_4_ = GetSystemMetrics(0x15);
        local_40._4_4_ = iVar6 - local_40._4_4_;
        FUN_5f001340(hDC,(int *)local_40,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (param_2 != 0) {
      ShowCaret(param_1);
    }
  }
  return;
}

