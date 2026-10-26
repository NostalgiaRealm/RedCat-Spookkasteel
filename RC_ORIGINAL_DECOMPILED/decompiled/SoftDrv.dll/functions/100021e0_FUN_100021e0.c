/*
 * FUN_100021e0 at 100021e0
 * undefined FUN_100021e0(void)
 * Address ranges: 100021e0-100024ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100021e0(HDC param_1,int param_2,RGBQUAD *param_3,uint *param_4,uint *param_5)

{
  BYTE BVar1;
  BYTE BVar2;
  BYTE BVar3;
  HBITMAP hbm;
  LPBITMAPINFO lpbmi;
  HDC hdc;
  COLORREF color;
  COLORREF CVar4;
  int iVar5;
  uint uVar6;
  _OSVERSIONINFOA *p_Var7;
  LPBITMAPINFO ptVar8;
  _OSVERSIONINFOA local_94;
  
  if (8 < param_2) {
    p_Var7 = &local_94;
    for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
      p_Var7->dwOSVersionInfoSize = 0;
      p_Var7 = (_OSVERSIONINFOA *)&p_Var7->dwMajorVersion;
    }
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      hbm = CreateCompatibleBitmap(param_1,8,8);
      if (hbm == (HBITMAP)0x0) {
        return 0;
      }
      lpbmi = _malloc(0x34);
      if (lpbmi == (LPBITMAPINFO)0x0) {
        DeleteObject(hbm);
        return 0;
      }
      ptVar8 = lpbmi;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        (ptVar8->bmiHeader).biSize = 0;
        ptVar8 = (LPBITMAPINFO)&(ptVar8->bmiHeader).biWidth;
      }
      (lpbmi->bmiHeader).biSize = 0x2c;
      (lpbmi->bmiHeader).biBitCount = (WORD)param_2;
      (lpbmi->bmiHeader).biCompression = 3;
      iVar5 = GetDIBits(param_1,hbm,0,0,(LPVOID)0x0,lpbmi,0);
      if (iVar5 == 0) {
        FUN_10018dc8(lpbmi);
        DeleteObject(hbm);
        return 0;
      }
      BVar1 = lpbmi->bmiColors[0].rgbGreen;
      BVar2 = lpbmi->bmiColors[0].rgbRed;
      BVar3 = lpbmi->bmiColors[0].rgbReserved;
      param_3->rgbBlue = lpbmi->bmiColors[0].rgbBlue;
      param_3->rgbGreen = BVar1;
      param_3->rgbRed = BVar2;
      param_3->rgbReserved = BVar3;
      *param_4 = lpbmi[1].bmiHeader.biSize;
      uVar6 = lpbmi[1].bmiHeader.biWidth;
      *param_5 = uVar6;
      FUN_10002180(s___x__x__x__10021158,*param_3,*param_4,uVar6);
      FUN_10018dc8(lpbmi);
      DeleteObject(hbm);
      if ((((uint)*param_3 | *param_4 | *param_5) & 0x7fff) != 0x7fff) {
        SetLastError(0);
        return 0;
      }
    }
    else {
      hdc = CreateDCA(s_Display_10021150,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
      if (hdc == (HDC)0x0) {
        return 0;
      }
      color = GetPixel(hdc,0,0);
      if (color == 0xffffffff) {
        DeleteDC(hdc);
        return 0;
      }
      CVar4 = SetPixel(hdc,0,0,0x80808);
      if (CVar4 == 0xffffffff) {
        DeleteDC(hdc);
        return 0;
      }
      CVar4 = GetPixel(hdc,0,0);
      uVar6 = CVar4 & 0xffffff;
      if (uVar6 == 0xffffffff) {
        DeleteDC(hdc);
        return 0;
      }
      SetPixel(param_1,0,0,color);
      DeleteDC(hdc);
      FUN_10002180(s_DIBDisplay__Desktop_pixel_format_10021124,uVar6);
      if (uVar6 == 0) {
        FUN_10002180(s__5_5_5__100210e4);
        param_3->rgbBlue = '\0';
        param_3->rgbGreen = '|';
        param_3->rgbRed = '\0';
        param_3->rgbReserved = '\0';
        *param_4 = 0x3e0;
      }
      else {
        if (uVar6 == 0x800) {
          FUN_10002180(s__5_6_5__100210f0);
        }
        else {
          if (uVar6 == 0x80808) {
            FUN_10002180(s__8_8_8__100210fc);
            param_3->rgbBlue = '\0';
            param_3->rgbGreen = '\0';
            param_3->rgbRed = 0xff;
            param_3->rgbReserved = '\0';
            *param_4 = 0xff00;
            *param_5 = 0xff;
            return 1;
          }
          FUN_10002180(s__Unsupported__using_5_6_5__10021108);
          if ((param_2 != 0xf) && (param_2 != 0x10)) {
            return 0;
          }
        }
        param_3->rgbBlue = '\0';
        param_3->rgbGreen = 0xf8;
        param_3->rgbRed = '\0';
        param_3->rgbReserved = '\0';
        *param_4 = 0x7e0;
      }
      *param_5 = 0x1f;
    }
  }
  return 1;
}

