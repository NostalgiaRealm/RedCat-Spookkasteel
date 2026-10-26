/*
 * _ItemDlg@16 at 00402833
 * undefined4 __stdcall _ItemDlg@16(HWND param_1, int param_2, int param_3)
 * Address ranges: 00402833-00402e7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _ItemDlg_16(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar3;
  DWORD DVar4;
  HPEN pHVar5;
  uint uVar6;
  WPARAM wParam;
  tagPAINTSTRUCT local_16c;
  CHAR local_12c [256];
  undefined1 local_2c [12];
  int local_20;
  tagRECT local_1c;
  tagPOINT local_c;
  
                    /* 0x2833  1  _ItemDlg@16 */
  if (param_2 == 0xf) {
    if (DAT_004134d4 == 0) {
      SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
      DAT_004134d4 = 1;
    }
    hdc = BeginPaint(param_1,&local_16c);
    hdc_00 = CreateCompatibleDC(hdc);
    pvVar3 = SelectObject(hdc_00,DAT_00413ac0);
    BitBlt(hdc,0xc,0xc,0x7a,0x106,hdc_00,0,0,0xcc0020);
    SelectObject(hdc_00,pvVar3);
    DeleteDC(hdc_00);
    if ((DAT_00413780 == 0) && (pHVar2 = GetDlgItem(param_1,0x3f0), pHVar2 != (HWND)0x0)) {
      GetWindowRect(pHVar2,&local_1c);
      local_20 = 0;
      local_c.x = local_1c.left + 1;
      local_c.y = local_1c.top + 1;
      local_2c._8_4_ = local_1c.right + 1;
      ScreenToClient(param_1,&local_c);
      ScreenToClient(param_1,(LPPOINT)(local_2c + 8));
      DVar4 = GetSysColor(0x10);
      pHVar5 = CreatePen(0,1,DVar4);
      pvVar3 = SelectObject(hdc,pHVar5);
      MoveToEx(hdc,local_c.x,local_c.y,(LPPOINT)0x0);
      LineTo(hdc,local_2c._8_4_,local_c.y);
      SelectObject(hdc,pvVar3);
      DeleteObject(pHVar5);
      DVar4 = GetSysColor(5);
      pHVar5 = CreatePen(0,1,DVar4);
      pvVar3 = SelectObject(hdc,pHVar5);
      MoveToEx(hdc,local_c.x,local_c.y + 1,(LPPOINT)0x0);
      LineTo(hdc,local_2c._8_4_,local_c.y + 1);
      SelectObject(hdc,pvVar3);
      DeleteObject(pHVar5);
    }
    if (DAT_00413a8c != 0) {
      FUN_0040b864(hdc,param_1);
      uVar6 = ((DAT_0041368c - DAT_004137bc & 0xffffU) << 1) / 3;
      local_c.y = (int)((DAT_00413688 - DAT_004137b8 & 0xffffU) * DAT_004136f8) / DAT_00413af8 &
                  0xffff;
      SetBkColor(hdc,0x7f0000);
      param_3 = 0;
      local_1c.top = DAT_004137bc + 1;
      local_1c.bottom = DAT_0041368c + -1;
      local_1c.left = DAT_004137b8;
      if (0 < local_c.y) {
        do {
          local_1c.right = (uVar6 - 3) + local_1c.left;
          ExtTextOutA(hdc,local_1c.left,local_1c.top,6,&local_1c,&DAT_004134d0,0,(INT *)0x0);
          param_3 = param_3 + uVar6;
          local_1c.left = local_1c.left + uVar6;
        } while (param_3 < local_c.y);
      }
      if (DAT_00413780 == 0) {
        SetRect((LPRECT)local_2c,DAT_004137b8 + -1,DAT_004137bc + -1,DAT_00413688 + 1,
                DAT_0041368c + 1);
        DVar4 = GetSysColor(0x10);
        pHVar5 = CreatePen(0,1,DVar4);
        pvVar3 = SelectObject(hdc,pHVar5);
        MoveToEx(hdc,local_2c._0_4_,local_20 + -1,(LPPOINT)0x0);
        LineTo(hdc,local_2c._0_4_,local_2c._4_4_);
        LineTo(hdc,local_2c._8_4_ + -1,local_2c._4_4_);
        SelectObject(hdc,pvVar3);
        DeleteObject(pHVar5);
        DVar4 = GetSysColor(5);
        pHVar5 = CreatePen(0,1,DVar4);
        pvVar3 = SelectObject(hdc,pHVar5);
        MoveToEx(hdc,local_2c._8_4_ + -1,local_2c._4_4_,(LPPOINT)0x0);
        LineTo(hdc,local_2c._8_4_ + -1,local_20 + -1);
        LineTo(hdc,local_2c._0_4_ + -1,local_20 + -1);
        SelectObject(hdc,pvVar3);
        DeleteObject(pHVar5);
      }
    }
    EndPaint(param_1,&local_16c);
  }
  else {
    if (param_2 == 0x110) {
      FUN_0040a9ec(param_1);
      FUN_0040ab9d(DAT_00413a90,0x2f,local_12c,0x100);
      SetDlgItemTextA(param_1,5,local_12c);
      FUN_0040ab9d(DAT_00413a90,0x30,local_12c,0x100);
      SetDlgItemTextA(param_1,2,local_12c);
      FUN_0040ab9d(DAT_00413a90,0x31,local_12c,0x100);
      SetDlgItemTextA(param_1,3,local_12c);
      FUN_0040ab9d(DAT_00413a90,0x32,local_12c,0x100);
      SetDlgItemTextA(param_1,4,local_12c);
      GetWindowTextA(DAT_00413698,local_12c,0x100);
      SetWindowTextA(param_1,local_12c);
      GetWindowRect(param_1,&local_1c);
      MoveWindow(param_1,(DAT_004137a0 - (local_1c.right - local_1c.left)) / 2,
                 (DAT_004137a4 - (local_1c.bottom - local_1c.top)) / 2,
                 local_1c.right - local_1c.left,local_1c.bottom - local_1c.top,0);
      DAT_00413690 = param_1;
      if ((DAT_00413a60 == '\v') && (DAT_00413b00 != 0)) {
        iVar1 = 0;
        pHVar2 = GetDlgItem(param_1,1);
        ShowWindow(pHVar2,iVar1);
        iVar1 = 0;
        pHVar2 = GetDlgItem(DAT_00413690,5);
        ShowWindow(pHVar2,iVar1);
      }
      FUN_004031ae();
      iVar1 = 0;
      pHVar2 = GetDlgItem(DAT_00413690,0xef6);
      ShowWindow(pHVar2,iVar1);
      pHVar2 = GetDlgItem(param_1,0xef6);
      if (pHVar2 != (HWND)0x0) {
        GetWindowRect(pHVar2,&local_1c);
        DAT_004137b8 = local_1c.left + 1;
        DAT_004137bc = local_1c.top + 1;
        ScreenToClient(param_1,(LPPOINT)&DAT_004137b8);
        DAT_00413688 = local_1c.right + -1;
        DAT_0041368c = local_1c.bottom + -1;
        ScreenToClient(param_1,(LPPOINT)&DAT_00413688);
      }
      if (DAT_00413780 == 0) {
        if (pHVar2 != (HWND)0x0) {
          ShowWindow(pHVar2,0);
        }
        pHVar2 = GetDlgItem(param_1,0x3f0);
        if (pHVar2 != (HWND)0x0) {
          ShowWindow(pHVar2,0);
        }
      }
      return 1;
    }
    if (param_2 == 0x111) {
      if (param_3 == 2) {
        if (DAT_00413a8c != 0) {
          KillTimer(param_1,0x19);
        }
        iVar1 = MessageBoxA(param_1,DAT_00413764,DAT_00413a9c,4);
        if (iVar1 == 6) {
          DAT_00413724 = 1;
          EndDialog(param_1,2);
        }
        if (DAT_00413a8c == 0) {
          return 1;
        }
        SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
        return 1;
      }
      if (param_3 == 1) {
        if (DAT_00413a60 == '\v') {
          DAT_004136ac = 1;
          return 0;
        }
        FUN_00402fa0(param_1);
        iVar1 = 1;
      }
      else {
        if (param_3 != 5) {
          if (param_3 == 3) {
            wParam = 1;
          }
          else {
            if (param_3 != 4) {
              return 0;
            }
            wParam = 0;
          }
          SendDlgItemMessageA(param_1,0x3eb,0x185,wParam,-1);
          return 0;
        }
        FUN_00402fa0(param_1);
        iVar1 = 0;
      }
      FUN_00402e7d(iVar1);
      FUN_004031ae();
    }
    else if ((param_2 == 0x113) && (param_3 == 0x19)) {
      DAT_00412060 = DAT_00412060 + 1;
      if (0x19 < DAT_00412060) {
        DAT_00412060 = 1;
      }
      InvalidateRect(param_1,(RECT *)&DAT_00413a70,0);
      UpdateWindow(param_1);
    }
  }
  return 0;
}

