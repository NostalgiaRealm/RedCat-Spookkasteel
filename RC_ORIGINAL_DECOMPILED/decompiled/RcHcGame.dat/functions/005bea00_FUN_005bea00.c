/*
 * FUN_005bea00 at 005bea00
 * undefined FUN_005bea00(void)
 * Address ranges: 005bea00-005bed8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bea00(short param_1,short param_2,LPCSTR param_3,int param_4,UINT param_5,LPVOID param_6
                 ,DWORD param_7)

{
  HFONT h;
  HWND pHVar1;
  HDC hdc;
  HGDIOBJ h_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  UINT fuFormat;
  bool bVar6;
  uint local_80;
  DWORD local_7c;
  MAT2 local_6c;
  _GLYPHMETRICS local_5c;
  short local_40;
  undefined1 local_24 [36];
  
  FUN_005bed90(&local_6c);
  FUN_0059b220();
  FUN_0059b230();
  h = CreateFontA(-(int)*(short *)(param_3 + 0x40),0,0,0,(int)*(short *)(param_3 + 0x42),0,0,0,0,7,0
                  ,0,0,param_3);
  pHVar1 = GetDesktopWindow();
  hdc = GetDC(pHVar1);
  fuFormat = (-(uint)(*(int *)(param_3 + 0x2050) != 0) & 5) + 1;
  h_00 = SelectObject(hdc,h);
  local_7c = GetGlyphOutlineA(hdc,param_5,fuFormat,&local_5c,0,(LPVOID)0x0,&local_6c);
  if (((int)local_7c < 0) && (*(int *)(param_3 + 0x2050) != 0)) {
    fuFormat = 1;
    local_7c = GetGlyphOutlineA(hdc,param_5,1,&local_5c,0,(LPVOID)0x0,&local_6c);
  }
  if (local_7c != 0) {
    GetGlyphOutlineA(hdc,param_5,fuFormat,&local_5c,param_7,param_6,&local_6c);
  }
  SelectObject(hdc,h_00);
  pHVar1 = GetDesktopWindow();
  ReleaseDC(pHVar1,hdc);
  DeleteObject(h);
  local_80 = local_5c.gmBlackBoxX;
  if (local_5c.gmBlackBoxY != 0) {
    iVar5 = local_5c.gmBlackBoxY - 1;
    do {
      iVar5 = iVar5 + 1;
      local_80 = (int)local_7c / iVar5;
    } while (local_80 * iVar5 - local_7c != 0);
  }
  if ((fuFormat == 1) &&
     (local_80 = (int)(local_80 + ((int)local_80 >> 0x1f & 7U)) >> 3, (int)local_80 < 1)) {
    local_80 = 1;
  }
  uVar3 = local_80 & 0x80000003;
  bVar6 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar6 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
  }
  while (!bVar6) {
    local_80 = local_80 + 1;
    uVar3 = local_80 & 0x80000003;
    bVar6 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar6 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
    }
  }
  *(int *)(param_3 + param_5 * 0x20 + 0x48) = param_4;
  *(int *)(param_3 + param_5 * 0x20 + 0x4c) = (int)*(short *)(param_4 + 8);
  *(int *)(param_3 + param_5 * 0x20 + 0x54) = (int)*(short *)(param_4 + 10);
  *(UINT *)(param_3 + param_5 * 0x20 + 0x50) = (int)*(short *)(param_4 + 8) + local_5c.gmBlackBoxX;
  *(UINT *)(param_3 + param_5 * 0x20 + 0x58) = (int)*(short *)(param_4 + 10) + local_5c.gmBlackBoxY;
  *(LONG *)(param_3 + param_5 * 0x20 + 0x5c) = local_5c.gmptGlyphOrigin.x;
  *(LONG *)(param_3 + (param_5 + 3) * 0x20) = local_5c.gmptGlyphOrigin.y;
  local_5c.gmptGlyphOrigin.y = local_5c.gmptGlyphOrigin.y - local_5c.gmBlackBoxY;
  *(int *)(param_3 + param_5 * 0x20 + 100) = (int)local_5c.gmCellIncX;
  FUN_005c0530(0,0);
  FUN_005c3350(local_24);
  iVar5 = FUN_005c0d90();
  if (fuFormat == 1) {
    uVar3 = 0;
    if (local_5c.gmBlackBoxY != 0) {
      local_7c = 0;
      do {
        uVar4 = 0;
        if (local_5c.gmBlackBoxX != 0) {
          do {
            if ((*(byte *)((uVar4 >> 3) + local_7c + (int)param_6) &
                '\x01' << (7 - ((byte)uVar4 & 7) & 0x1f)) == 0) {
              *(undefined1 *)((int)param_1 + uVar4 + ((int)param_2 + uVar3) * (int)local_40 + iVar5)
                   = 0;
            }
            else {
              *(undefined1 *)((int)param_1 + uVar4 + ((int)param_2 + uVar3) * (int)local_40 + iVar5)
                   = 0xff;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_5c.gmBlackBoxX);
        }
        uVar3 = uVar3 + 1;
        local_7c = local_7c + local_80;
      } while (uVar3 < local_5c.gmBlackBoxY);
      FUN_005c0d70();
      return;
    }
  }
  else {
    uVar3 = 0;
    if (local_5c.gmBlackBoxY != 0) {
      do {
        uVar4 = 0;
        if (local_5c.gmBlackBoxX != 0) {
          do {
            uVar2 = (uint)*(byte *)((int)param_6 + uVar4) * 4;
            if (0xff < uVar2) {
              uVar2 = 0xff;
            }
            *(char *)(iVar5 + ((int)param_2 + uVar3) * (int)local_40 + (int)param_1 + uVar4) =
                 (char)uVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_5c.gmBlackBoxX);
        }
        uVar3 = uVar3 + 1;
        param_6 = (LPVOID)((int)param_6 + local_80);
      } while (uVar3 < local_5c.gmBlackBoxY);
    }
  }
  FUN_005c0d70();
  return;
}

