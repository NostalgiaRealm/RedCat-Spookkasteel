/*
 * FUN_00406ba3 at 00406ba3
 * undefined __stdcall FUN_00406ba3(void)
 * Address ranges: 00406ba3-004072db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00406ba3(void)

{
  ushort uVar1;
  LPCSTR pCVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  HWND pHVar6;
  HICON pHVar7;
  int iVar8;
  uint uVar9;
  HANDLE hFile;
  LONG LVar10;
  INT_PTR IVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *lpString2;
  byte *pbVar14;
  int iVar15;
  BOOL BVar16;
  LPSTR pCVar17;
  char *pcVar18;
  uint local_b18;
  ushort local_b14;
  ushort local_b12;
  _FILETIME local_b10;
  _FILETIME local_b08;
  char local_b00 [256];
  CHAR local_a00 [255];
  char acStack_901 [257];
  CHAR local_800 [1024];
  CHAR local_400 [1024];
  
  DAT_004136c0 = 1;
  lstrcpyA(local_a00,s_Checking__00412558);
  DAT_004137ac = FUN_0040b671(0x1000);
  iVar5 = 0;
  do {
    DAT_004137ac[iVar5] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 <= (int)(uint)DAT_00413b94);
  if (DAT_00413a8c == 0) {
    FUN_0040317d(0x3ea,0);
    FUN_0040317d(0x3ec,0);
    FUN_0040317d(0x3ed,1);
    FUN_0040317d(0x3ef,1);
    FUN_0040ab9d(DAT_00413a90,0x2d,local_800,0x100);
    wsprintfA(local_400,local_800,DAT_00413aa8);
    SetDlgItemTextA(DAT_00413690,0x3ed,local_400);
    BVar16 = 0;
    pHVar6 = GetDlgItem(DAT_00413690,1);
    EnableWindow(pHVar6,BVar16);
    BVar16 = 0;
    pHVar6 = GetDlgItem(DAT_00413690,5);
    EnableWindow(pHVar6,BVar16);
    local_b18 = 0;
    puVar13 = &DAT_00413b20;
    do {
      pHVar7 = LoadIconA(DAT_00413a90,(LPCSTR)(local_b18 + 0x6b & 0xffff));
      local_b18 = local_b18 + 1;
      *puVar13 = pHVar7;
      puVar13 = puVar13 + 1;
    } while ((int)puVar13 < 0x413b74);
    if (DAT_00413780 != 0) {
      iVar5 = 5;
      pHVar6 = GetDlgItem(DAT_00413690,0xef6);
      ShowWindow(pHVar6,iVar5);
    }
    FUN_00409026(0);
    DAT_00413a8c = 1;
  }
  DAT_00413af8 = DAT_00413a80 + DAT_004136c8 + DAT_00413afc + DAT_00413b9c + DAT_00413720 +
                 DAT_00413774 + DAT_00413768 + DAT_00413ab4;
  iVar5 = DAT_00413768;
  if (DAT_00413af8 == 0) {
    DAT_00413af8 = 1;
  }
  while (iVar5 = iVar5 + -1, iVar8 = DAT_00413ab4, -1 < iVar5) {
    lstrcpyA(DAT_00413754,local_a00);
    lstrcatA(DAT_00413754,*(LPCSTR *)(DAT_00413b0c + iVar5 * 4));
    pCVar17 = DAT_00413754;
    pHVar6 = GetDlgItem(DAT_00413690,0x3ef);
    FUN_004098d8(pHVar6,pCVar17);
    FUN_00409026((int)DAT_00413754);
    pCVar2 = *(LPCSTR *)(DAT_00413b0c + iVar5 * 4);
    if (*(char **)(pCVar2 + 600) == (char *)0x0) {
      uVar1 = *(ushort *)(pCVar2 + 0x26c);
      if (uVar1 == 0) {
        uVar1 = *(ushort *)(pCVar2 + 0x268);
      }
      iVar8 = FUN_004074b6(pCVar2,(byte *)(pCVar2 + 0x208),uVar1);
      if (iVar8 != 0) {
        return;
      }
    }
    else {
      FUN_00407323(pCVar2,*(char **)(pCVar2 + 600));
    }
    DAT_004136f8 = DAT_004136f8 + 1;
  }
  while (iVar8 = iVar8 + -1, iVar5 = DAT_004136d4, -1 < iVar8) {
    lstrcpyA(DAT_00413754,local_a00);
    lstrcatA(DAT_00413754,(LPCSTR)(*(int *)(DAT_004136e8 + iVar8 * 4) + 8));
    pCVar17 = DAT_00413754;
    pHVar6 = GetDlgItem(DAT_00413690,0x3ef);
    FUN_004098d8(pHVar6,pCVar17);
    FUN_00409026((int)DAT_00413754);
    iVar5 = *(int *)(DAT_004136e8 + iVar8 * 4);
    if (*(char **)(iVar5 + 0x260) == (char *)0x0) {
      uVar1 = *(ushort *)(iVar5 + 0x274);
      if (uVar1 == 0) {
        uVar1 = *(ushort *)(iVar5 + 0x270);
      }
      iVar5 = FUN_004074b6((LPCSTR)(iVar5 + 8),(byte *)(iVar5 + 0x210),uVar1);
      if (iVar5 != 0) {
        return;
      }
    }
    else {
      FUN_00407323((LPCSTR)(iVar5 + 8),*(char **)(iVar5 + 0x260));
    }
    DAT_004136f8 = DAT_004136f8 + 1;
  }
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    lstrcpyA(DAT_00413754,local_a00);
    lstrcatA(DAT_00413754,*(LPCSTR *)(DAT_00413700 + iVar5 * 4));
    pCVar17 = DAT_00413754;
    pHVar6 = GetDlgItem(DAT_00413690,0x3ef);
    FUN_004098d8(pHVar6,pCVar17);
    FUN_00409026((int)DAT_00413754);
    pCVar2 = *(LPCSTR *)(DAT_00413700 + iVar5 * 4);
    if (*(char **)(pCVar2 + 600) == (char *)0x0) {
      iVar8 = FUN_004074b6(pCVar2,(byte *)(pCVar2 + 0x208),*(ushort *)(pCVar2 + 0x268));
      if (iVar8 != 0) {
        return;
      }
    }
    else {
      FUN_00407323(pCVar2,*(char **)(pCVar2 + 600));
    }
    DAT_004136f8 = DAT_004136f8 + 1;
  }
  iVar5 = 0;
  if (0 < DAT_004136b8) {
    do {
      if (DAT_00413724 != 0) break;
      piVar3 = *(int **)(DAT_00413744 + iVar5 * 4);
      iVar8 = piVar3[2];
      if (*piVar3 == 0) {
        pcVar12 = (char *)(iVar8 + 0x10c);
        iVar15 = piVar3[1];
        pbVar14 = *(byte **)(iVar8 + 0x218);
      }
      else {
        pcVar12 = (char *)(iVar8 + 0x108);
        iVar15 = *(int *)(iVar8 + 0x1218);
        pbVar14 = *(byte **)(iVar8 + 0x1214);
      }
      FUN_00407a97(pbVar14,iVar15,(LPCSTR)(iVar8 + 8),pcVar12,(byte *)piVar3[3],(HKEY)0x1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_004136b8);
  }
  iVar5 = 0;
  if (0 < DAT_00413ab4) {
    do {
      if (DAT_00413724 != 0) break;
      iVar8 = *(int *)(DAT_004136e8 + iVar5 * 4);
      if ((*(char *)(iVar8 + 8) != '\0') && (*(short *)(iVar8 + 0x26c) != 0)) {
        FUN_00409eca(local_a00,(LPCSTR)(iVar8 + 8),1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_00413ab4);
  }
  iVar5 = 0;
  if (0 < DAT_00413768) {
    do {
      if (DAT_00413724 != 0) break;
      pCVar2 = *(LPCSTR *)(DAT_00413b0c + iVar5 * 4);
      if ((*pCVar2 != '\0') && (*(short *)(pCVar2 + 0x264) != 0)) {
        FUN_00409eca(local_a00,pCVar2,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < DAT_00413768);
  }
  if (DAT_00413a94 == 0) {
    return;
  }
  local_b18 = (uint)DAT_00413b94;
LAB_00407074:
  puVar13 = (undefined4 *)(DAT_004136a4 + local_b18 * 4);
  pcVar12 = (char *)*puVar13;
  if (((pcVar12 != (char *)0x0) && (DAT_004137ac[local_b18] != 0)) && (*pcVar12 != '\0')) {
    lpString2 = (char *)*puVar13;
    pcVar12 = acStack_901 + 1;
    cVar4 = *lpString2;
    if (cVar4 != '\0') {
      do {
        if (cVar4 == '|') break;
        *pcVar12 = cVar4;
        cVar4 = lpString2[1];
        pcVar12 = pcVar12 + 1;
        lpString2 = lpString2 + 1;
      } while (cVar4 != '\0');
      if ((acStack_901 + 1 < pcVar12) && (pcVar12[-1] == ' ')) {
        pcVar12 = pcVar12 + -1;
      }
    }
    *pcVar12 = '\0';
    if (*lpString2 == '\0') goto LAB_004070e3;
    do {
      lpString2 = lpString2 + 1;
LAB_004070e3:
      if (DAT_0041311c < 2) {
        uVar9 = (byte)PTR_DAT_00412f10[*lpString2 * 2] & 8;
        pcVar12 = PTR_DAT_00412f10;
      }
      else {
        pcVar18 = (char *)0x8;
        uVar9 = FUN_0040c27e(pcVar12,(int)*lpString2,8);
        pcVar12 = pcVar18;
      }
    } while (uVar9 != 0);
    do {
      iVar5 = FUN_0040a933(acStack_901 + 1);
      if ((iVar5 == 0) && (hFile = (HANDLE)_lopen(acStack_901 + 1,0), hFile != (HANDLE)0xffffffff))
      {
        GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_b08);
        FileTimeToLocalFileTime(&local_b08,&local_b10);
        FileTimeToDosDateTime(&local_b10,&local_b12,&local_b14);
        LVar10 = _llseek((HFILE)hFile,0,2);
        _lclose((HFILE)hFile);
        uVar9 = ((local_b12 >> 9) + 0x50) % 100;
        if (uVar9 < 0x3c) {
          iVar5 = uVar9 + 2000;
        }
        else {
          iVar5 = uVar9 + 0x76c;
        }
        wsprintfA(local_b00,s__02d__02d__04d____02d__02d__02d___00412530,local_b12 >> 5 & 0xf,
                  local_b12 & 0x1f,iVar5,(uint)(local_b14 >> 0xb),local_b14 >> 5 & 0x3f,
                  (local_b14 & 0x1f) << 1,LVar10);
        iVar5 = lstrcmpA(local_b00,lpString2);
        if (iVar5 == 0) goto LAB_0040725a;
      }
      DAT_00413714 = acStack_901 + 1;
      lstrcpyA(local_b00,lpString2);
      pcVar12 = local_b00;
      cVar4 = local_b00[0];
      while (cVar4 != '\0') {
        if (*pcVar12 == '|') {
          *pcVar12 = '/';
        }
        pcVar12 = pcVar12 + 1;
        cVar4 = *pcVar12;
      }
      DAT_00413778 = local_b00;
      IVar11 = DialogBoxParamA(DAT_00413a90,(LPCSTR)0x6b,DAT_00413690,_PromptDlg_16,0);
      if (IVar11 == 2) {
        for (; -1 < (int)local_b18; local_b18 = local_b18 - 1) {
          pCVar2 = *(LPCSTR *)(DAT_004136a4 + local_b18 * 4);
          if ((pCVar2 != (LPCSTR)0x0) && (*pCVar2 != '\0')) {
            DeleteFileA(pCVar2);
          }
        }
        return;
      }
    } while( true );
  }
  goto LAB_004072a2;
LAB_0040725a:
  wsprintfA(local_b00,s__X__s_00412528,DAT_004137ac[local_b18]);
  FUN_0040bd9b(acStack_901 + 1,local_b00);
  DeleteFileA((LPCSTR)DAT_004137ac[local_b18]);
  **(undefined1 **)(DAT_004136a4 + local_b18 * 4) = 0;
LAB_004072a2:
  local_b18 = local_b18 - 1;
  if ((int)local_b18 < 0) {
    return;
  }
  goto LAB_00407074;
}

