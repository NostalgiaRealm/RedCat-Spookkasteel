/*
 * FUN_004031ae at 004031ae
 * undefined __stdcall FUN_004031ae(void)
 * Address ranges: 004031ae-00403cd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004031ae(void)

{
  HWND pHVar1;
  HDC hdc;
  int iVar2;
  WPARAM wParam;
  uint uVar3;
  HDC pHVar4;
  HDC lpString;
  HDC pHVar5;
  HDC pHVar6;
  code *pcVar7;
  bool bVar8;
  UINT UVar9;
  RECT *lpRect;
  tagSIZE *lpsz;
  BOOL BVar10;
  uint local_94c;
  tagSIZE local_948;
  HDC__ local_940 [256];
  tagPAINTSTRUCT local_540;
  char local_500 [255];
  undefined1 local_401;
  CHAR local_400 [1024];
  
  if (DAT_00413a60 == '\v') {
    UVar9 = 0x3f;
  }
  else {
    UVar9 = 0x2e;
  }
  FUN_0040ab9d(DAT_00413a90,UVar9,(LPCSTR)local_940,0x400);
  SetDlgItemTextA(DAT_00413690,1,(LPCSTR)local_940);
  if ((DAT_00413a60 == '\0') || (DAT_00413a60 == '\f')) {
    FUN_0040317d(0x3eb,0);
    FUN_0040317d(3,0);
    FUN_0040317d(4,0);
    FUN_0040317d(1000,1);
    FUN_0040317d(0x3e9,1);
    FUN_0040317d(0x3ec,1);
    if (DAT_00413a60 == '\0') {
      FUN_0040ab9d(DAT_00413a90,0x3c,(LPCSTR)local_940,0x100);
      SetDlgItemTextA(DAT_00413690,1000,(LPCSTR)local_940);
      FUN_0040ab9d(DAT_00413a90,0x3d,(LPCSTR)local_940,0x100);
      SetDlgItemTextA(DAT_00413690,0x3e9,(LPCSTR)local_940);
      if ((DAT_004136c4 == 1000) || (DAT_004136c4 == 0)) {
        wParam = 1;
      }
      else {
        wParam = 0;
      }
      SendDlgItemMessageA(DAT_00413690,1000,0xf1,wParam,0);
      SendDlgItemMessageA(DAT_00413690,0x3e9,0xf1,(uint)(DAT_004136c4 == 0x3e9),0);
      SendDlgItemMessageA(DAT_00413690,0x3f1,0xf1,(uint)(DAT_004136c4 == 0x3f1),0);
      FUN_0040ab9d(DAT_00413a90,7,(LPCSTR)local_940,0x400);
      wsprintfA(local_400,(LPCSTR)local_940,DAT_00413aa8);
      SetDlgItemTextA(DAT_00413690,0x3ea,local_400);
      FUN_0040ab9d(DAT_00413a90,10,(LPCSTR)local_940,0x400);
      SetDlgItemTextA(DAT_00413690,0x3ec,(LPCSTR)local_940);
      FUN_0040ab9d(DAT_00413a90,0x10,(LPCSTR)local_940,0x400);
      SetWindowTextA(DAT_00413690,(LPCSTR)local_940);
      BVar10 = 0;
      pHVar1 = GetDlgItem(DAT_00413690,5);
      EnableWindow(pHVar1,BVar10);
      bVar8 = DAT_0041372c != 0;
      if (bVar8) {
        FUN_0040ab9d(DAT_00413a90,0x48,(LPCSTR)local_940,0x400);
        SetDlgItemTextA(DAT_00413690,0x3f1,(LPCSTR)local_940);
      }
      FUN_0040317d(0x3f1,(uint)bVar8);
      goto LAB_004036d3;
    }
    FUN_0040317d(0x3f1,0);
    FUN_0040ab9d(DAT_00413a90,0x33,(LPCSTR)local_940,0x100);
    SetDlgItemTextA(DAT_00413690,1000,(LPCSTR)local_940);
    FUN_0040ab9d(DAT_00413a90,0x34,(LPCSTR)local_940,0x100);
    SetDlgItemTextA(DAT_00413690,0x3e9,(LPCSTR)local_940);
    SendDlgItemMessageA(DAT_00413690,1000,0xf1,(uint)(DAT_00413770 != 0),0);
    SendDlgItemMessageA(DAT_00413690,0x3e9,0xf1,(uint)(DAT_00413770 == 0),0);
    FUN_0040ab9d(DAT_00413a90,0x41,(LPCSTR)local_940,0x400);
    SetDlgItemTextA(DAT_00413690,0x3ea,(LPCSTR)local_940);
    FUN_0040ab9d(DAT_00413a90,0x42,(LPCSTR)local_940,0x400);
    SetDlgItemTextA(DAT_00413690,0x3ec,(LPCSTR)local_940);
    FUN_0040ab9d(DAT_00413a90,0x40,(LPCSTR)local_940,0x400);
    SetWindowTextA(DAT_00413690,(LPCSTR)local_940);
    uVar3 = 1;
  }
  else {
    if (DAT_00413a60 != '\v') {
      FUN_0040317d(0x3f1,0);
      FUN_0040317d(0x3eb,1);
      FUN_0040317d(3,1);
      FUN_0040317d(4,1);
      FUN_0040317d(1000,0);
      FUN_0040317d(0x3e9,0);
      FUN_0040317d(0x3ec,0);
      BVar10 = 1;
      pHVar1 = GetDlgItem(DAT_00413690,5);
      EnableWindow(pHVar1,BVar10);
      goto LAB_004036d3;
    }
    FUN_0040317d(0x3eb,0);
    FUN_0040317d(3,0);
    FUN_0040317d(4,0);
    FUN_0040317d(1000,0);
    FUN_0040317d(0x3e9,0);
    FUN_0040317d(0x3ec,1);
    FUN_0040317d(0x3f1,0);
    FUN_0040ab9d(DAT_00413a90,((DAT_004136c4 != 0x3f1) - 1 & 0x3c) + 0xd,(LPCSTR)local_940,0x400);
    wsprintfA(local_400,(LPCSTR)local_940,DAT_00413aa8);
    SetDlgItemTextA(DAT_00413690,0x3ea,local_400);
    FUN_0040ab9d(DAT_00413a90,((DAT_004136c4 != 0x3f1) - 1 & 0x35) + 0x16,(LPCSTR)local_940,0x400);
    SetDlgItemTextA(DAT_00413690,0x3ec,(LPCSTR)local_940);
    FUN_0040ab9d(DAT_00413a90,((DAT_004136c4 != 0x3f1) - 1 & 0x37) + 0x13,(LPCSTR)local_940,0x400);
    SetWindowTextA(DAT_00413690,(LPCSTR)local_940);
    uVar3 = (uint)(DAT_00413a64 == 0);
  }
  pHVar1 = GetDlgItem(DAT_00413690,5);
  EnableWindow(pHVar1,uVar3);
LAB_004036d3:
  switch(DAT_00413a60) {
  case '\x01':
    FUN_0040ab9d(DAT_00413a90,5,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,6,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413ab4;
    break;
  case '\x02':
    FUN_0040ab9d(DAT_00413a90,8,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,9,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413768;
    break;
  case '\x03':
    FUN_0040ab9d(DAT_00413a90,0xb,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0xc,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413b88;
    break;
  case '\x04':
    FUN_0040ab9d(DAT_00413a90,0xe,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0xf,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413774;
    break;
  case '\x05':
    FUN_0040ab9d(DAT_00413a90,0x11,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0x12,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413720;
    break;
  case '\x06':
    FUN_0040ab9d(DAT_00413a90,0x14,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0x15,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413b9c;
    break;
  case '\a':
    FUN_0040ab9d(DAT_00413a90,0x36,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0x37,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413b04;
    break;
  case '\b':
    FUN_0040ab9d(DAT_00413a90,0x17,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0x18,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413afc;
    break;
  case '\t':
    FUN_0040ab9d(DAT_00413a90,0x1a,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0x1b,DAT_00413754,0x100);
    DAT_00413af8 = DAT_004136c8;
    break;
  case '\n':
    FUN_0040ab9d(DAT_00413a90,0x2a,DAT_00413b80,0x100);
    FUN_0040ab9d(DAT_00413a90,0x29,DAT_00413754,0x100);
    DAT_00413af8 = DAT_00413a80 + DAT_00413aa0;
    if (DAT_0041379c != (HDC)0x0) {
      DAT_00413af8 = DAT_00413af8 + 1;
    }
  }
  pcVar7 = SendDlgItemMessageA_exref;
  if (((DAT_00413a60 != '\0') && (DAT_00413a60 != '\v')) && (DAT_00413a60 != '\f')) {
    SendDlgItemMessageA(DAT_00413690,0x3eb,0x184,0,0);
    SetDlgItemTextA(DAT_00413690,0x3ea,DAT_00413754);
    SetWindowTextA(DAT_00413690,DAT_00413b80);
    uVar3 = 0;
    local_94c = 0;
    hdc = BeginPaint(DAT_00413690,&local_540);
    SendDlgItemMessageA(DAT_00413690,0x3eb,0xb,0,0);
    pHVar4 = hdc;
    pHVar5 = hdc;
    if (0 < DAT_00413af8) {
      do {
        lpString = pHVar4;
        pHVar6 = pHVar5;
        switch(DAT_00413a60) {
        case '\x01':
          iVar2 = *(int *)(DAT_004136e8 + uVar3 * 4);
          lpString = (HDC)(iVar2 + 8);
          pHVar6 = *(HDC *)(iVar2 + 0x264);
          break;
        case '\x02':
          lpString = *(HDC *)(DAT_00413b0c + uVar3 * 4);
          pHVar6 = (HDC)lpString[0x97].unused;
          break;
        case '\x03':
          lstrcpyA((LPSTR)local_940,*(LPCSTR *)(DAT_004136fc + uVar3 * 4));
          iVar2 = lstrlenA((LPCSTR)local_940);
          *(undefined1 *)((int)local_940 + iVar2 + -1) = 0;
          lpString = local_940;
          pHVar6 = *(HDC *)(*(int *)(DAT_004136fc + uVar3 * 4) + 0x104);
          break;
        case '\x04':
          iVar2 = DAT_004136a8;
          goto LAB_00403ac9;
        case '\x05':
          iVar2 = *(int *)(DAT_004137a8 + uVar3 * 4);
          wsprintfA((LPSTR)local_940,s__s____s___s__s_004121c4,iVar2 + 8,iVar2 + 0x10c,iVar2 + 0x20c
                    ,iVar2 + 0x30c);
          lpString = local_940;
          pHVar6 = *(HDC *)(*(int *)(DAT_004137a8 + uVar3 * 4) + 0x70c);
          break;
        case '\x06':
          iVar2 = *(int *)(DAT_004136cc + uVar3 * 4);
          if (*(char *)(iVar2 + 0x10c) == '\0') {
            lpString = (HDC)(iVar2 + 8);
          }
          else {
            wsprintfA((LPSTR)local_940,s__s_Value_Name___s_004121b0,iVar2 + 8,iVar2 + 0x10c);
            lpString = local_940;
          }
          pHVar6 = *(HDC *)(*(int *)(DAT_004136cc + uVar3 * 4) + 0x21c);
          break;
        case '\a':
          iVar2 = DAT_004137c0;
LAB_00403ac9:
          lpString = *(HDC *)(iVar2 + uVar3 * 4);
LAB_00403be6:
          pHVar6 = (HDC)lpString[0x41].unused;
          break;
        case '\b':
          iVar2 = *(int *)(DAT_00413a84 + uVar3 * 4);
          if (*(char *)(iVar2 + 0x108) == '\0') {
            wsprintfA((LPSTR)local_940,s__s__s_00412190,iVar2 + 8,iVar2 + 0x214);
          }
          else {
            _strncpy(local_500,(char *)(iVar2 + 0x214),0xff);
            local_401 = 0;
            iVar2 = *(int *)(DAT_00413a84 + uVar3 * 4);
            wsprintfA((LPSTR)local_940,s__s_Value_Name___s__s_00412198,iVar2 + 8,iVar2 + 0x108,
                      local_500);
          }
          lpString = local_940;
          pHVar6 = *(HDC *)(*(int *)(DAT_00413a84 + uVar3 * 4) + 0x121c);
          break;
        case '\t':
          iVar2 = *(int *)(DAT_00413734 + uVar3 * 4);
          lpString = (HDC)(iVar2 + 0x100);
          pHVar6 = *(HDC *)(iVar2 + 0x300);
          break;
        case '\n':
          iVar2 = 0;
          bVar8 = false;
          if ((DAT_0041379c != (HDC)0x0) &&
             (iVar2 = 1, lpString = DAT_0041379c, pHVar6 = DAT_004136d0, uVar3 == 0)) break;
          if ((int)(uVar3 - iVar2) < DAT_00413aa0) {
            pHVar5 = *(HDC *)(DAT_00413748 + (uVar3 - iVar2) * 4);
            pHVar4 = pHVar5 + 0x41;
            if ((char)pHVar5[0x41].unused == '\0') {
              pHVar4 = pHVar5;
            }
            pHVar5 = (HDC)pHVar5[0x81].unused;
            bVar8 = true;
          }
          lpString = pHVar4;
          pHVar6 = pHVar5;
          if (bVar8) break;
          lpString = *(HDC *)(DAT_00413b98 + (uVar3 - (iVar2 + DAT_00413aa0)) * 4);
          goto LAB_00403be6;
        }
        lpsz = &local_948;
        iVar2 = lstrlenA((LPCSTR)lpString);
        GetTextExtentPointA(hdc,(LPCSTR)lpString,iVar2,lpsz);
        if (local_94c < (local_948.cx & 0xffffU)) {
          local_94c = local_948.cx;
        }
        SendDlgItemMessageA(DAT_00413690,0x3eb,0x180,0,(LPARAM)lpString);
        if (pHVar6 != (HDC)0x0) {
          SendDlgItemMessageA(DAT_00413690,0x3eb,0x185,1,uVar3 & 0xffff);
        }
        uVar3 = uVar3 + 1;
        pHVar4 = lpString;
        pcVar7 = SendDlgItemMessageA_exref;
        pHVar5 = pHVar6;
      } while ((int)uVar3 < DAT_00413af8);
    }
    EndPaint(DAT_00413690,&local_540);
    (*pcVar7)(DAT_00413690,0x3eb,0x194,local_94c,0);
    (*pcVar7)(DAT_00413690,0x3eb,0x197,0,0);
    (*pcVar7)(DAT_00413690,0x3eb,0xb,1,0);
    BVar10 = 0;
    lpRect = (RECT *)0x0;
    pHVar1 = GetDlgItem(DAT_00413690,0x3eb);
    InvalidateRect(pHVar1,lpRect,BVar10);
  }
  pHVar1 = GetDlgItem(DAT_00413690,1);
  SetFocus(pHVar1);
  return;
}

