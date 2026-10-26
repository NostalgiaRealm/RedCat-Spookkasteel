/*
 * FUN_005bfa00 at 005bfa00
 * undefined FUN_005bfa00(void)
 * Address ranges: 005bfa00-005bff8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_005bfa00(LPCSTR param_1,LPCSTR param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8,byte param_9)

{
  undefined1 *puVar1;
  char cVar2;
  BYTE BVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  BITMAPINFO *lpbmi;
  HWND pHVar9;
  HDC pHVar10;
  HBITMAP h;
  HFONT h_00;
  HGDIOBJ h_01;
  HGDIOBJ h_02;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  LOGPALETTE *pLVar17;
  BITMAPINFO *pBVar18;
  BYTE *pBVar19;
  LPCSTR pCVar20;
  int *piVar21;
  int iVar22;
  UINT format;
  int local_80;
  short local_70;
  LOGPALETTE *local_64;
  void *local_60;
  undefined4 local_5c;
  BITMAPINFO *local_58;
  HPALETTE local_54;
  int local_50;
  undefined4 local_4c;
  int local_48 [9];
  int local_24 [9];
  
  uVar6 = FUN_0059b220();
  uVar6 = uVar6 & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  iVar7 = FUN_0059b220();
  iVar7 = (4 - uVar6) + iVar7;
  iVar8 = FUN_0059b230();
  local_60 = (void *)0x0;
  local_64 = (LOGPALETTE *)FUN_005cf3b0(0x408);
  pLVar17 = local_64;
  for (iVar12 = 0x102; iVar12 != 0; iVar12 = iVar12 + -1) {
    pLVar17->palVersion = 0;
    pLVar17->palNumEntries = 0;
    pLVar17 = (LOGPALETTE *)pLVar17->palPalEntry;
  }
  local_64->palVersion = 0x300;
  local_64->palNumEntries = 0x100;
  lpbmi = (BITMAPINFO *)FUN_005cf3b0(0x428);
  local_58 = lpbmi;
  if (lpbmi == (BITMAPINFO *)0x0) {
    FUN_005cf400(local_64);
    local_64 = (LOGPALETTE *)0x0;
    _DAT_007203c0 = 0;
  }
  pBVar18 = lpbmi;
  for (iVar12 = 0x10a; iVar12 != 0; iVar12 = iVar12 + -1) {
    (pBVar18->bmiHeader).biSize = 0;
    pBVar18 = (BITMAPINFO *)&(pBVar18->bmiHeader).biWidth;
  }
  (lpbmi->bmiHeader).biWidth = iVar7;
  (lpbmi->bmiHeader).biSize = 0x28;
  (lpbmi->bmiHeader).biHeight = -iVar8;
  (lpbmi->bmiHeader).biPlanes = 1;
  (lpbmi->bmiHeader).biBitCount = 8;
  (lpbmi->bmiHeader).biSizeImage = 0;
  (lpbmi->bmiHeader).biXPelsPerMeter = 0;
  (lpbmi->bmiHeader).biYPelsPerMeter = 0;
  (lpbmi->bmiHeader).biClrUsed = 0;
  (lpbmi->bmiHeader).biClrImportant = 0;
  (lpbmi->bmiHeader).biCompression = 0;
  local_80 = 0;
  pBVar19 = &lpbmi->bmiColors[0].rgbGreen;
  do {
    BVar3 = __ftol();
    pBVar19[1] = BVar3;
    BVar3 = __ftol();
    *pBVar19 = BVar3;
    BVar3 = __ftol();
    ((RGBQUAD *)(pBVar19 + -1))->rgbBlue = BVar3;
    local_80 = local_80 + 1;
    pBVar19 = pBVar19 + 4;
  } while (local_80 < 0x100);
  local_54 = CreatePalette(local_64);
  pHVar9 = GetDesktopWindow();
  pHVar10 = GetDC(pHVar9);
  h = CreateDIBSection(pHVar10,lpbmi,0,&local_60,(HANDLE)0x0,0);
  pHVar9 = GetDesktopWindow();
  ReleaseDC(pHVar9,pHVar10);
  pHVar10 = CreateCompatibleDC((HDC)0x0);
  h_00 = CreateFontA(-(int)*(short *)(param_1 + 0x40),0,0,0,(int)*(short *)(param_1 + 0x42),0,0,0,0,
                     7,0,0,0,param_1);
  h_01 = SelectObject(pHVar10,h_00);
  h_02 = SelectObject(pHVar10,h);
  uVar4 = __ftol();
  uVar5 = __ftol();
  uVar6 = __ftol();
  SetTextColor(pHVar10,(uint)CONCAT11(uVar4,uVar5) << 8 | uVar6 & 0xff);
  SetBkColor(pHVar10,0);
  SetBkMode(pHVar10,2);
  param_6 = param_6 + 1;
  param_5 = param_5 + 1;
  if ((param_9 & 2) == 0) {
    format = 0;
  }
  else {
    format = 0x10;
  }
  uVar6 = 0xffffffff;
  pCVar20 = param_2;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pCVar20;
    pCVar20 = pCVar20 + 1;
  } while (cVar2 != '\0');
  DrawTextA(pHVar10,param_2,~uVar6 - 1,(LPRECT)&param_3,format);
  param_6 = param_6 + -1;
  param_5 = param_5 + -1;
  SelectObject(pHVar10,h_02);
  SelectObject(pHVar10,h_01);
  DeleteDC(pHVar10);
  DeleteObject(h_00);
  FUN_005c0530(0,0);
  FUN_005c3350(local_24);
  iVar8 = FUN_005c6b00();
  if (iVar8 == 0) {
    FUN_005c0d70();
    iVar8 = FUN_005c6b00();
    if (iVar8 == 0) {
      FUN_005c3880(1,0,0);
      FUN_005c3cf0(0,0);
      FUN_005c0530(0,0);
      FUN_005c3350(local_24);
    }
    else {
      FUN_005c06d0(0,0,local_24[3]);
      piVar16 = local_24;
      piVar21 = local_48;
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *piVar21 = *piVar16;
        piVar16 = piVar16 + 1;
        piVar21 = piVar21 + 1;
      }
    }
  }
  iVar8 = local_48[2];
  iVar12 = FUN_005c0d90();
  if (local_48[3] == 1) {
    if (param_4 <= param_6) {
      iVar13 = param_4 * iVar7;
      iVar22 = param_4;
      do {
        if (param_3 <= param_5) {
          local_70 = (short)iVar8;
          iVar15 = iVar13 + param_3;
          iVar14 = param_3;
          do {
            iVar14 = iVar14 + 1;
            puVar1 = (undefined1 *)(iVar15 + (int)local_60);
            iVar15 = iVar15 + 1;
            *(undefined1 *)(local_70 * iVar22 + iVar12 + -1 + iVar14) = *puVar1;
          } while (iVar14 <= param_5);
        }
        iVar22 = iVar22 + 1;
        iVar13 = iVar13 + iVar7;
      } while (iVar22 <= param_6);
    }
  }
  else {
    local_80 = param_4;
    iVar7 = param_5;
    iVar8 = param_3;
    if (param_4 <= param_6) {
      do {
        iVar22 = iVar8;
        if (iVar8 <= iVar7) {
          do {
            local_5c = __ftol();
            local_4c = __ftol();
            uVar11 = __ftol();
            iVar7 = FUN_005c6a70();
            iVar22 = iVar7 * local_80 * local_48[2];
            iVar7 = FUN_005c6a70();
            local_50 = iVar7 * iVar8 + iVar22 + iVar12;
            FUN_005c69c0(local_5c,local_4c,uVar11,0xff);
            iVar8 = iVar8 + 1;
            iVar7 = param_5;
            lpbmi = local_58;
            iVar22 = param_3;
          } while (iVar8 <= param_5);
        }
        local_80 = local_80 + 1;
        iVar8 = iVar22;
      } while (local_80 <= param_6);
    }
  }
  FUN_005c0d70();
  DeleteObject(h);
  DeleteObject(local_54);
  FUN_005cf400(lpbmi);
  _DAT_007203c0 = 0;
  FUN_005cf400(local_64);
  _DAT_007203c0 = 0;
  return 1;
}

