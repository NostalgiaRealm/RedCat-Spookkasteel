/*
 * _MainWndProc@16 at 004020e7
 * UINT __stdcall _MainWndProc@16(HWND param_1, HDC param_2, HWND param_3, int param_4)
 * Address ranges: 004020e7-00402557
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

UINT _MainWndProc_16(HWND param_1,HDC param_2,HWND param_3,int param_4)

{
  int *piVar1;
  UINT UVar2;
  HPALETTE pHVar3;
  HDC pHVar4;
  COLORREF color;
  HBRUSH h;
  HGDIOBJ pvVar5;
  HDC hdc;
  char *pszFaceName;
  uint iCharSet;
  HFONT h_00;
  int iVar6;
  int nDenominator;
  int cWidth;
  int cEscapement;
  int cOrientation;
  int cWeight;
  DWORD bItalic;
  DWORD bUnderline;
  DWORD bStrikeOut;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  CHAR local_284 [512];
  tagPAINTSTRUCT local_84;
  tagRECT local_44;
  undefined1 local_34 [4];
  undefined1 local_30;
  undefined1 local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  tagSIZE local_10;
  int local_8;
  
                    /* 0x20e7  2  _MainWndProc@16 */
  if ((param_1 == DAT_00413694) || (DAT_00413698 == 0)) {
    if (param_2 == (HDC)0x2) {
      DAT_00413694 = (HWND)0x0;
      return 0;
    }
    if (param_2 != (HDC)0xf) {
      if (param_2 == (HDC)0x113) {
        DAT_00413718 = 1;
        return 0;
      }
      if (param_2 != (HDC)0x30f) {
        if (param_2 != (HDC)0x311) goto LAB_00402143;
        if (param_3 == param_1) {
          return 0;
        }
      }
      if (DAT_00413b84 == (HPALETTE)0x0) {
        return 0;
      }
      param_2 = GetDC(param_1);
      pHVar3 = DAT_00413b84;
      goto LAB_0040217e;
    }
    pHVar4 = BeginPaint(param_1,&local_84);
    if (DAT_00413760 != (HPALETTE)0x0) {
      SelectPalette(pHVar4,DAT_00413760,0);
      RealizePalette(pHVar4);
    }
    hdc = CreateCompatibleDC(pHVar4);
    pvVar5 = SelectObject(hdc,DAT_00413750);
    GetObjectA(DAT_00413750,0x18,local_28);
    BitBlt(pHVar4,0,0,local_24,local_20,hdc,0,0,0xcc0020);
    SelectObject(hdc,pvVar5);
    DeleteDC(hdc);
    FUN_0040ab9d(DAT_00413a90,0x19,local_284,0x100);
    pszFaceName = DAT_0041369c;
    if (DAT_0041369c == (char *)0x0) {
      pszFaceName = s_MS_Sans_Serif_00412180;
    }
    iPitchAndFamily = 0;
    iCharSet = (uint)DAT_004136e4;
    iQuality = 0;
    iClipPrecision = 0;
    iOutPrecision = 0;
    bStrikeOut = 0;
    bUnderline = 0;
    bItalic = 0;
    cWeight = 700;
    cOrientation = 0;
    cEscapement = 0;
    cWidth = 0;
    nDenominator = 0x48;
    iVar6 = GetDeviceCaps(pHVar4,0x5a);
    iVar6 = MulDiv((uint)DAT_00413740,iVar6,nDenominator);
    h_00 = CreateFontA(-iVar6,cWidth,cEscapement,cOrientation,cWeight,bItalic,bUnderline,bStrikeOut,
                       iCharSet,iOutPrecision,iClipPrecision,iQuality,iPitchAndFamily,pszFaceName);
    pvVar5 = SelectObject(pHVar4,h_00);
    SetBkMode(pHVar4,1);
    SetTextColor(pHVar4,0xffffff);
    iVar6 = lstrlenA(local_284);
    TextOutA(pHVar4,8,6,local_284,iVar6);
    FUN_0040ab9d(DAT_00413a90,0x46,local_284,0x100);
    lstrcatA(local_284,s_Wise_Uninstall_00412170);
    iVar6 = lstrlenA(local_284);
    FUN_0040ab9d(DAT_00413a90,0x47,local_284 + iVar6,0x100);
    iVar6 = lstrlenA(local_284);
    GetTextExtentPointA(pHVar4,local_284,iVar6,&local_10);
    TextOutA(pHVar4,(local_24 - local_10.cx) / 2,local_20 / 2,local_284,iVar6);
    SelectObject(pHVar4,pvVar5);
    DeleteObject(h_00);
  }
  else {
    if (param_2 == (HDC)0x2) {
      PostQuitMessage(0);
      return 0;
    }
    if (param_2 != (HDC)0xf) {
      if (param_2 == (HDC)0x14) {
        return 1;
      }
      if (param_2 == (HDC)0x113) {
        DAT_00413aac = 0;
        return 0;
      }
      if (param_2 != (HDC)0x30f) {
        if (param_2 != (HDC)0x311) {
LAB_00402143:
          UVar2 = DefWindowProcA(param_1,(UINT)param_2,(WPARAM)param_3,param_4);
          return UVar2;
        }
        if (param_3 == param_1) {
          return 0;
        }
      }
      if (DAT_00413760 == (HPALETTE)0x0) {
        return 0;
      }
      param_2 = GetDC(param_1);
      pHVar3 = DAT_00413760;
LAB_0040217e:
      pHVar3 = SelectPalette(param_2,pHVar3,0);
      UVar2 = RealizePalette(param_2);
      if (UVar2 != 0) {
        InvalidateRect(param_1,(RECT *)0x0,1);
      }
      SelectPalette(param_2,pHVar3,1);
      RealizePalette(param_2);
      ReleaseDC(param_1,param_2);
      return UVar2;
    }
    pHVar4 = BeginPaint(param_1,&local_84);
    GetClientRect(param_1,&local_44);
    if (DAT_00413760 != (HPALETTE)0x0) {
      SelectPalette(pHVar4,DAT_00413760,0);
      RealizePalette(pHVar4);
    }
    local_14 = -1;
    param_3 = (HWND)0x0;
    do {
      local_1c = local_14;
      local_10.cy = (int)&param_3->unused + 1;
      param_4 = 0;
      local_8 = 3;
      local_14 = (local_10.cy * local_44.bottom) / 0x60;
      do {
        iVar6 = *(int *)(&DAT_00413ae0 + param_4) +
                (*(int *)(&DAT_00413aec + param_4) * (int)param_3) / 0x5f;
        piVar1 = (int *)(local_34 + param_4);
        *piVar1 = iVar6;
        if (iVar6 < 0) {
          *piVar1 = 0;
        }
        if (0xff < *piVar1) {
          *piVar1 = 0xff;
        }
        param_4 = param_4 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      if (DAT_00413760 == (HPALETTE)0x0) {
        color = (COLORREF)CONCAT21(CONCAT11(local_2c,local_30),local_34[0]);
      }
      else {
        color = (uint)param_3 & 0xffff | 0x1000000;
      }
      h = CreateSolidBrush(color);
      pvVar5 = SelectObject(pHVar4,h);
      PatBlt(pHVar4,0,local_1c,local_44.right,local_14 - local_1c,0xf00021);
      SelectObject(pHVar4,pvVar5);
      DeleteObject(h);
      param_3 = (HWND)local_10.cy;
    } while (local_10.cy < 0x60);
  }
  EndPaint(param_1,&local_84);
  return 0;
}

