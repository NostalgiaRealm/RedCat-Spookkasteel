/*
 * FUN_00407c36 at 00407c36
 * undefined __cdecl FUN_00407c36(LPCSTR param_1)
 * Address ranges: 00407c36-00409025
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_00407c36(LPCSTR param_1)

{
  bool bVar1;
  ushort uVar2;
  DWORD DVar3;
  char cVar4;
  HWND pHVar5;
  HICON pHVar6;
  LPCSTR pCVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar11;
  LSTATUS LVar12;
  int iVar13;
  byte *pbVar14;
  code *pcVar15;
  int iVar16;
  code *pcVar17;
  UINT *pUVar18;
  undefined4 *puVar19;
  uint unaff_EDI;
  CHAR *pCVar20;
  BOOL BVar21;
  LPSTR pCVar22;
  DWORD local_dc4;
  HKEY local_dc0;
  HKEY local_dbc;
  UINT local_db8 [14];
  uint local_d80 [128];
  CHAR local_b80 [64];
  undefined1 local_b40 [64];
  CHAR local_b00 [64];
  CHAR local_ac0 [64];
  undefined1 local_a80 [64];
  undefined1 local_a40 [64];
  CHAR local_a00 [64];
  CHAR local_9c0 [64];
  CHAR local_980 [64];
  CHAR local_940 [64];
  undefined1 local_900 [64];
  CHAR local_8c0 [56];
  undefined1 auStack_888 [72];
  undefined1 local_840 [56];
  CHAR CStack_808;
  CHAR local_800 [1024];
  CHAR local_400 [1024];
  
  local_db8[0] = 0x1d;
  local_db8[1] = 0x1e;
  local_db8[2] = 0x1f;
  local_db8[3] = 0x20;
  local_db8[4] = 0x21;
  local_db8[5] = 0x22;
  local_db8[6] = 0x23;
  local_db8[7] = 0x24;
  local_db8[8] = 0x25;
  local_db8[9] = 0x28;
  local_db8[10] = 0x2c;
  local_db8[0xb] = 0x38;
  local_db8[0xc] = 0x39;
  local_db8[0xd] = 0x3a;
  if (DAT_004136c4 == 0x3e9) {
    if (DAT_00413770 != 0) {
      DAT_00413770 = 0;
      goto LAB_00407ccf;
    }
  }
  else {
LAB_00407ccf:
    uVar2 = DAT_00413b94;
    if (DAT_00413770 != 0) goto LAB_00407ce9;
  }
  uVar2 = 1;
LAB_00407ce9:
  pUVar18 = local_db8;
  pCVar20 = local_b80;
  iVar16 = 0xe;
  do {
    FUN_0040ab9d(DAT_00413a90,*pUVar18,pCVar20,0x40);
    pcVar17 = lstrcpyA_exref;
    pcVar15 = lstrcatA_exref;
    pCVar20 = pCVar20 + 0x40;
    pUVar18 = pUVar18 + 1;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  DAT_004136f8 = 0;
  DAT_00413af8 = DAT_00413a80 + DAT_004136c8 + DAT_00413afc + DAT_00413b04 + DAT_00413b9c +
                 DAT_00413720 + DAT_00413774 + DAT_00413b88 + DAT_00413768 + DAT_00413ab4;
  if (DAT_00413af8 == 0) {
    DAT_00413af8 = 1;
  }
  if (DAT_00413a8c == 0) {
    FUN_0040317d(0x3ea,0);
    FUN_0040317d(0x3ec,0);
    FUN_0040317d(0x3ed,1);
    FUN_0040317d(0x3ef,1);
    FUN_0040ab9d(DAT_00413a90,0x2d,local_800,0x100);
    wsprintfA(local_400,local_800,DAT_00413aa8);
    SetDlgItemTextA(DAT_00413690,0x3ed,local_400);
    BVar21 = 0;
    pHVar5 = GetDlgItem(DAT_00413690,1);
    EnableWindow(pHVar5,BVar21);
    BVar21 = 0;
    pHVar5 = GetDlgItem(DAT_00413690,5);
    EnableWindow(pHVar5,BVar21);
    iVar16 = 0;
    puVar19 = &DAT_00413b20;
    do {
      pHVar6 = LoadIconA(DAT_00413a90,(LPCSTR)(iVar16 + 0x6bU & 0xffff));
      *puVar19 = pHVar6;
      puVar19 = puVar19 + 1;
      iVar16 = iVar16 + 1;
    } while ((int)puVar19 < 0x413b74);
    if (DAT_00413780 != 0) {
      iVar16 = 5;
      pHVar5 = GetDlgItem(DAT_00413690,0xef6);
      ShowWindow(pHVar5,iVar16);
    }
    FUN_00409026(0);
    DAT_00413a8c = 1;
    local_dc4 = 0;
    if (0 < DAT_00413aa0) {
      do {
        if (DAT_00413724 != 0) break;
        if ((DAT_004136c4 == 1000) ||
           (*(int *)(*(int *)(DAT_00413748 + local_dc4 * 4) + 0x204) != 0)) {
          iVar16 = local_dc4 * 4;
          if (uVar2 <= *(ushort *)(*(LPCSTR *)(DAT_00413748 + iVar16) + 0x208)) {
            pCVar7 = FUN_0040be4c(*(LPCSTR *)(DAT_00413748 + iVar16),0x5c);
            if (pCVar7 != (LPCSTR)0x0) {
              FUN_0040a794(*(uint **)(iVar16 + DAT_00413748),0);
            }
            (*pcVar17)(local_800,&DAT_004125e4);
            CStack_808 = FUN_0040b30c();
            (*pcVar17)(DAT_00413754,auStack_888);
            iVar9 = *(int *)(iVar16 + DAT_00413748);
            if (*(char *)(iVar9 + 0x104) != '\0') {
              iVar9 = iVar9 + 0x104;
            }
            (*pcVar15)(DAT_00413754,iVar9);
            FUN_00409026((int)DAT_00413754);
            pcVar8 = s_Automatic_004125d8;
            if (DAT_004136c4 != 1000) {
              pcVar8 = s_Custom_004125d0;
            }
            (*pcVar17)(local_db8 + 8,pcVar8);
            pCVar7 = *(LPCSTR *)(iVar16 + DAT_00413748);
            iVar9 = lstrlenA(pCVar7);
            pcVar8 = pCVar7 + iVar9;
            if (pCVar7 < pcVar8) {
              do {
                cVar4 = *pcVar8;
                if ((cVar4 == ' ') || (cVar4 == '\0')) {
                  *pcVar8 = '\0';
                  iVar9 = FUN_0040a933(*(LPCSTR *)(iVar16 + DAT_00413748));
                  if (iVar9 == 0) {
                    if (cVar4 == ' ') {
                      lstrcpyA((LPSTR)local_d80,pcVar8 + 1);
                    }
                    break;
                  }
                  *pcVar8 = cVar4;
                }
                pcVar8 = pcVar8 + -1;
              } while (*(char **)(iVar16 + DAT_00413748) < pcVar8);
            }
            FUN_0040bd9b(*(undefined4 *)(iVar16 + DAT_00413748),local_d80);
            pcVar15 = lstrcatA_exref;
            pcVar17 = lstrcpyA_exref;
          }
        }
        local_dc4 = local_dc4 + 1;
      } while ((int)local_dc4 < DAT_00413aa0);
    }
  }
  iVar16 = 0;
  if (0 < DAT_00413a80) {
    do {
      if (DAT_00413724 != 0) break;
      if (((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_00413b98 + iVar16 * 4) + 0x104) != 0))
         && (uVar2 <= *(ushort *)(*(int *)(DAT_00413b98 + iVar16 * 4) + 0x108))) {
        (*pcVar17)(DAT_00413754,local_840);
        (*pcVar15)(DAT_00413754,*(undefined4 *)(DAT_00413b98 + iVar16 * 4));
        FUN_00409026((int)DAT_00413754);
        FUN_0040ac69(*(LPCSTR *)(DAT_00413b98 + iVar16 * 4));
        FUN_0040912c(0xdac);
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < DAT_00413a80);
  }
  if ((DAT_0041379c != 0) && ((DAT_004136c4 == 1000 || (DAT_004136d0 != 0)))) {
    (*pcVar17)(DAT_00413754,local_900);
    (*pcVar15)(DAT_00413754,DAT_0041379c);
    FUN_00409026((int)DAT_00413754);
    iVar16 = FUN_0040a07a();
    if (iVar16 != 0) {
      return;
    }
  }
  iVar16 = 0;
  if (0 < DAT_00413774) {
    do {
      if (DAT_00413724 != 0) break;
      if (((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_004136a8 + iVar16 * 4) + 0x104) != 0))
         && (iVar9 = iVar16 * 4, uVar2 <= *(ushort *)(*(int *)(iVar9 + DAT_004136a8) + 0x108))) {
        (*pcVar17)(DAT_00413754,local_a80);
        (*pcVar15)(DAT_00413754,*(undefined4 *)(iVar9 + DAT_004136a8));
        FUN_00409026((int)DAT_00413754);
        FUN_0040a6db(*(LPCSTR *)(iVar9 + DAT_004136a8),0);
        FUN_0040a440(*(LPCSTR *)(iVar9 + DAT_004136a8));
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < DAT_00413774);
  }
  iVar16 = 0;
  if (0 < DAT_00413720) {
    do {
      if (DAT_00413724 != 0) break;
      if ((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_004137a8 + iVar16 * 4) + 0x70c) != 0)) {
        iVar9 = iVar16 * 4;
        if ((uVar2 <= *(ushort *)(*(int *)(iVar9 + DAT_004137a8) + 0x710)) &&
           (iVar10 = FUN_0040a933((LPCSTR)(*(int *)(iVar9 + DAT_004137a8) + 8)), iVar10 == 0)) {
          (*pcVar17)(DAT_00413754,local_a40);
          (*pcVar15)(DAT_00413754,*(int *)(iVar9 + DAT_004137a8) + 8);
          FUN_00409026((int)DAT_00413754);
          iVar9 = *(int *)(iVar9 + DAT_004137a8);
          pcVar8 = (char *)(iVar9 + 0x50c);
          if (DAT_00413770 == 0) {
            pcVar8 = (char *)(iVar9 + 0x30c);
          }
          WritePrivateProfileStringA
                    ((LPCSTR)(iVar9 + 0x10c),(LPCSTR)(iVar9 + 0x20c),
                     (LPCSTR)(-(uint)(*pcVar8 != '\0') & (uint)pcVar8),(LPCSTR)(iVar9 + 8));
        }
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < DAT_00413720);
  }
  iVar9 = 0;
  iVar16 = DAT_00413ab4;
  if (0 < DAT_00413ab0) {
    do {
      if (((DAT_00413770 != 0) &&
          (iVar16 = *(int *)(DAT_004136a0 + iVar9 * 4), uVar2 <= *(ushort *)(iVar16 + 0x208))) &&
         (iVar16 = FUN_0040a933((LPCSTR)(iVar16 + 0x104)), iVar16 == 0)) {
        pCVar7 = *(LPCSTR *)(DAT_004136a0 + iVar9 * 4);
        FUN_00409cc9(pCVar7,pCVar7 + 0x104,1);
      }
      iVar9 = iVar9 + 1;
      iVar16 = DAT_00413ab4;
    } while (iVar9 < DAT_00413ab0);
  }
  while (iVar16 = iVar16 + -1, iVar9 = DAT_00413768, -1 < iVar16) {
    if ((((DAT_004136c4 == 1000) &&
         ((iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4), *(int *)(iVar9 + 0x268) != 0 ||
          ((DAT_00413770 != 0 && (iVar9 != -0x10c)))))) ||
        (iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4), *(int *)(iVar9 + 0x264) != 0)) &&
       (uVar2 <= *(ushort *)(iVar9 + 0x270))) {
      if (*(ushort *)(iVar9 + 0x276) < uVar2) {
        iVar9 = 0;
      }
      else {
        cVar4 = FUN_00409ac4((LPCSTR)(iVar9 + 8),1,*(int *)(iVar9 + 0x278));
        iVar9 = CONCAT31(extraout_var,cVar4);
      }
      if (iVar9 == 1) {
        if (((DAT_00413770 == 0) ||
            (iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4), *(ushort *)(iVar9 + 0x272) != uVar2)) ||
           (*(char *)(iVar9 + 0x10c) == '\0')) {
          *(undefined1 *)(*(int *)(DAT_004136e8 + iVar16 * 4) + 8) = 0;
        }
      }
      else {
        iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4);
        if (((*(short *)(iVar9 + 0x272) == *(short *)(iVar9 + 0x270)) &&
            (*(char *)(iVar9 + 0x10c) == '\0')) || (DAT_00413770 == 0)) {
          if (uVar2 <= *(ushort *)(iVar9 + 0x26c)) {
            FUN_00409eca(local_940,(LPCSTR)(iVar9 + 8),0);
          }
          iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4);
          if (uVar2 <= *(ushort *)(iVar9 + 0x26e)) {
            FUN_0040acbe((char *)(iVar9 + 8));
          }
        }
      }
    }
  }
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    iVar16 = iVar9 * 4;
    pCVar7 = *(LPCSTR *)(iVar16 + DAT_00413b0c);
    if (uVar2 <= *(ushort *)(pCVar7 + 0x268)) {
      if ((*(int *)(pCVar7 + 0x25c) != 0) || (DAT_004136ec != 0)) {
        if (*(ushort *)(pCVar7 + 0x26e) < uVar2) {
          iVar10 = 0;
        }
        else {
          cVar4 = FUN_00409ac4(pCVar7,*(int *)(pCVar7 + 0x25c),*(int *)(pCVar7 + 0x270));
          iVar10 = CONCAT31(extraout_var_00,cVar4);
        }
        if (iVar10 == 1) {
          if (((DAT_00413770 == 0) ||
              (*(ushort *)(*(int *)(iVar16 + DAT_00413b0c) + 0x26a) != uVar2)) ||
             (*(char *)(*(int *)(iVar16 + DAT_00413b0c) + 0x104) == '\0')) {
            **(undefined1 **)(iVar16 + DAT_00413b0c) = 0;
          }
        }
        else if (iVar10 == 2) {
          *(undefined4 *)(*(int *)(iVar16 + DAT_00413b0c) + 0x25c) = 1;
        }
      }
      pCVar7 = *(LPCSTR *)(iVar16 + DAT_00413b0c);
      if (((*(int *)(pCVar7 + 0x25c) != 0) && (*pCVar7 != '\0')) &&
         (((*(short *)(pCVar7 + 0x26a) == *(short *)(pCVar7 + 0x268) && (pCVar7[0x104] == '\0')) ||
          (DAT_00413770 == 0)))) {
        if (uVar2 <= *(ushort *)(pCVar7 + 0x264)) {
          FUN_00409eca(local_940,pCVar7,0);
        }
        if (uVar2 <= *(ushort *)(*(char **)(iVar16 + DAT_00413b0c) + 0x266)) {
          FUN_0040acbe(*(char **)(iVar16 + DAT_00413b0c));
        }
      }
    }
  }
  iVar16 = 0;
  if (0 < DAT_00413ab4) {
    do {
      if (DAT_00413724 != 0) break;
      iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4);
      if ((*(char *)(iVar9 + 8) != '\0') &&
         ((((DAT_004136c4 == 1000 &&
            ((*(int *)(iVar9 + 0x268) != 0 ||
             (((DAT_00413770 != 0 && (*(char *)(iVar9 + 0x10c) != '\0')) &&
              (*(ushort *)(iVar9 + 0x272) == uVar2)))))) || (*(int *)(iVar9 + 0x264) != 0)) &&
          (uVar2 <= *(ushort *)(iVar9 + 0x270))))) {
        if ((*(ushort *)(iVar9 + 0x272) == uVar2) && (DAT_00413770 != 0)) {
          iVar10 = 1;
        }
        else {
          iVar10 = 0;
        }
        iVar9 = FUN_00409cc9((LPCSTR)(iVar9 + 8),(LPCSTR)(iVar9 + 0x10c),iVar10);
        if (iVar9 != 0) {
          (*pcVar17)(DAT_00413754,local_b80);
          (*pcVar15)(DAT_00413754,*(int *)(DAT_004136e8 + iVar16 * 4) + 8);
          pCVar22 = DAT_00413754;
          pHVar5 = GetDlgItem(DAT_00413690,0x3ef);
          FUN_004098d8(pHVar5,pCVar22);
          FUN_00409026((int)DAT_00413754);
        }
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < DAT_00413ab4);
  }
  iVar16 = 0;
  if (0 < DAT_00413768) {
    do {
      if (DAT_00413724 != 0) break;
      pCVar7 = *(LPCSTR *)(DAT_00413b0c + iVar16 * 4);
      if (((*pCVar7 != '\0') &&
          ((*(int *)(pCVar7 + 0x25c) != 0 ||
           (((DAT_00413770 != 0 && (pCVar7[0x104] != '\0')) &&
            (*(ushort *)(pCVar7 + 0x26a) == uVar2)))))) && (uVar2 <= *(ushort *)(pCVar7 + 0x268))) {
        if ((*(ushort *)(pCVar7 + 0x26a) == uVar2) && (DAT_00413770 != 0)) {
          iVar9 = 1;
        }
        else {
          iVar9 = 0;
        }
        iVar9 = FUN_00409cc9(pCVar7,pCVar7 + 0x104,iVar9);
        if (iVar9 != 0) {
          (*pcVar17)(DAT_00413754,local_b40);
          (*pcVar15)(DAT_00413754,*(undefined4 *)(DAT_00413b0c + iVar16 * 4));
          pCVar22 = DAT_00413754;
          pHVar5 = GetDlgItem(DAT_00413690,0x3ef);
          FUN_004098d8(pHVar5,pCVar22);
          FUN_00409026((int)DAT_00413754);
        }
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < DAT_00413768);
  }
  iVar16 = 0;
  if (DAT_00413770 != 0) {
    if (0 < DAT_00413ab4) {
      do {
        if (DAT_00413724 != 0) break;
        iVar9 = *(int *)(DAT_004136e8 + iVar16 * 4);
        if ((*(char *)(iVar9 + 8) != '\0') &&
           ((((DAT_004136c4 == 1000 &&
              ((*(int *)(iVar9 + 0x268) != 0 ||
               ((DAT_00413770 != 0 && (*(char *)(iVar9 + 0x10c) != '\0')))))) ||
             (*(int *)(iVar9 + 0x264) != 0)) &&
            ((((uVar2 <= *(ushort *)(iVar9 + 0x270) && (*(char *)(iVar9 + 0x10c) != '\0')) &&
              (*(ushort *)(iVar9 + 0x272) == uVar2)) && (uVar2 <= *(ushort *)(iVar9 + 0x26c))))))) {
          FUN_00409eca(local_940,(LPCSTR)(iVar9 + 8),1);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < DAT_00413ab4);
    }
    iVar16 = 0;
    if (0 < DAT_00413768) {
      do {
        if (DAT_00413724 != 0) break;
        pCVar7 = *(LPCSTR *)(DAT_00413b0c + iVar16 * 4);
        if (((*pCVar7 != '\0') &&
            ((((*(int *)(pCVar7 + 0x25c) != 0 || ((DAT_00413770 != 0 && (pCVar7[0x104] != '\0'))))
              && (uVar2 <= *(ushort *)(pCVar7 + 0x268))) &&
             ((pCVar7[0x104] != '\0' && (*(ushort *)(pCVar7 + 0x26a) == uVar2)))))) &&
           (uVar2 <= *(ushort *)(pCVar7 + 0x264))) {
          FUN_00409eca(local_940,pCVar7,1);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < DAT_00413768);
    }
  }
  if (((DAT_004136c4 == 1000) && (DAT_00413724 == 0)) && (DAT_00413770 == 0)) {
    FUN_0040a440(param_1);
  }
  iVar16 = 0;
  if (0 < DAT_00413b88) {
    do {
      if (DAT_00413724 != 0) break;
      if ((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_004136fc + iVar16 * 4) + 0x104) != 0)) {
        iVar9 = iVar16 * 4;
        if (uVar2 <= *(ushort *)(*(int *)(iVar9 + DAT_004136fc) + 0x10a)) {
          if ((DAT_004136c4 == 0x3e9) ||
             (pCVar7 = local_ac0, uVar2 <= *(ushort *)(*(int *)(iVar9 + DAT_004136fc) + 0x108))) {
            pCVar7 = local_b00;
          }
          lstrcpyA(DAT_00413754,pCVar7);
          pCVar7 = *(LPCSTR *)(iVar9 + DAT_004136fc);
          iVar10 = lstrlenA(pCVar7);
          if (pCVar7[iVar10 + -1] == '\\') {
            iVar10 = lstrlenA(pCVar7);
            *(undefined1 *)(iVar10 + -1 + *(int *)(iVar9 + DAT_004136fc)) = 0;
          }
          lstrcatA(DAT_00413754,*(LPCSTR *)(iVar9 + DAT_004136fc));
          pCVar22 = DAT_00413754;
          pHVar5 = GetDlgItem(DAT_00413690,0x3ef);
          FUN_004098d8(pHVar5,pCVar22);
          FUN_00409026((int)DAT_00413754);
          if ((DAT_004136c4 == 0x3e9) ||
             (uVar2 <= *(ushort *)(*(int *)(iVar9 + DAT_004136fc) + 0x108))) {
            iVar10 = 1;
          }
          else {
            iVar10 = 0;
          }
          FUN_004091af(*(LPCSTR *)(iVar9 + DAT_004136fc),iVar10);
        }
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
    } while (iVar16 < DAT_00413b88);
  }
  iVar16 = 0;
  if (DAT_00413770 != 0) {
    if (DAT_00413794 == 0) {
      FUN_0040a440(param_1);
    }
    else {
      uVar11 = FUN_0040c5b8(param_1,1,unaff_EDI);
      if (uVar11 != 0xffffffff) {
        FUN_0040c472(uVar11,DAT_00413794);
        FUN_0040c3bf(uVar11);
      }
    }
  }
  DVar3 = DAT_00413b9c;
  if (0 < DAT_00413afc) {
    do {
      DVar3 = DAT_00413b9c;
      if (DAT_00413724 != 0) break;
      if (((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_00413a84 + iVar16 * 4) + 0x121c) != 0))
         && (iVar9 = iVar16 * 4, uVar2 <= *(ushort *)(*(int *)(iVar9 + DAT_00413a84) + 0x1220))) {
        lstrcpyA(DAT_00413754,local_9c0);
        iVar10 = lstrlenA(DAT_00413754);
        pCVar7 = DAT_00413754 + iVar10;
        lstrcatA(DAT_00413754,(LPCSTR)(*(int *)(iVar9 + DAT_00413a84) + 8));
        iVar10 = lstrlenA(pCVar7);
        if (0x30 < iVar10) {
          lstrcpyA(pCVar7 + 0x2d,&DAT_004125cc);
        }
        FUN_00409026((int)DAT_00413754);
        iVar9 = *(int *)(iVar9 + DAT_00413a84);
        pbVar14 = (byte *)(iVar9 + 0xa14);
        if (DAT_00413770 == 0) {
          pbVar14 = (byte *)(iVar9 + 0x214);
        }
        FUN_00407a97(*(byte **)(iVar9 + 0x1214),*(int *)(iVar9 + 0x1218),(LPCSTR)(iVar9 + 8),
                     (char *)(iVar9 + 0x108),pbVar14,(HKEY)0x0);
      }
      DAT_004136f8 = DAT_004136f8 + 1;
      iVar16 = iVar16 + 1;
      DVar3 = DAT_00413b9c;
    } while (iVar16 < DAT_00413afc);
  }
  while ((local_dc4 = DVar3 - 1, iVar16 = DAT_00413b04, -1 < (int)local_dc4 && (DAT_00413724 == 0)))
  {
    if (((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_004136cc + local_dc4 * 4) + 0x21c) != 0))
       && (iVar16 = local_dc4 * 4, uVar2 <= *(ushort *)(*(int *)(iVar16 + DAT_004136cc) + 0x220))) {
      lstrcpyA(DAT_00413754,local_a00);
      iVar9 = lstrlenA(DAT_00413754);
      pCVar7 = DAT_00413754 + iVar9;
      lstrcatA(DAT_00413754,(LPCSTR)(*(int *)(iVar16 + DAT_004136cc) + 8));
      iVar9 = lstrlenA(pCVar7);
      if (0x30 < iVar9) {
        lstrcpyA(pCVar7 + 0x2d,&DAT_004125cc);
      }
      FUN_00409026((int)DAT_00413754);
      if (DAT_004136b0 != 0) {
        bVar1 = true;
        do {
          LVar12 = RegOpenKeyExA(*(HKEY *)(&DAT_00412030 +
                                          *(int *)(*(int *)(iVar16 + DAT_004136cc) + 0x218) * 4),
                                 (LPCSTR)(*(int *)(iVar16 + DAT_004136cc) + 8),0,0x1f,&local_dc0);
          if (LVar12 == 0) {
            if (bVar1) {
              RegDeleteValueA(local_dc0,(LPCSTR)(*(int *)(iVar16 + DAT_004136cc) + 0x10c));
            }
            bVar1 = false;
            local_dbc = (HKEY)0x100;
            LVar12 = RegEnumValueA(local_dc0,0,(LPSTR)local_d80,(LPDWORD)&local_dbc,(LPDWORD)0x0,
                                   (LPDWORD)0x0,(LPBYTE)0x0,(LPDWORD)0x0);
            if (LVar12 == 0) {
              RegCloseKey(local_dc0);
              iVar9 = 0;
            }
            else {
              local_dbc = (HKEY)0x100;
              iVar9 = RegEnumKeyExA(local_dc0,0,(LPSTR)local_d80,(LPDWORD)&local_dbc,(LPDWORD)0x0,
                                    (LPSTR)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
              RegCloseKey(local_dc0);
              if (iVar9 == 0) goto LAB_00408d6c;
              RegDeleteKeyA(*(HKEY *)(&DAT_00412030 +
                                     *(int *)(*(int *)(iVar16 + DAT_004136cc) + 0x218) * 4),
                            (LPCSTR)(*(int *)(iVar16 + DAT_004136cc) + 8));
            }
            if (iVar9 == 0) goto LAB_00408d6c;
            iVar10 = *(int *)(iVar16 + DAT_004136cc);
            iVar13 = lstrlenA((LPCSTR)(iVar10 + 8));
            for (pcVar8 = (char *)(iVar13 + 7 + iVar10);
                ((char *)(iVar10 + 8) < pcVar8 && (*pcVar8 != '\\')); pcVar8 = pcVar8 + -1) {
            }
            *pcVar8 = '\0';
          }
          else {
            iVar9 = 0;
          }
          if ((iVar9 == 0) || (*(char *)(*(int *)(iVar16 + DAT_004136cc) + 8) == '\0'))
          goto LAB_00408d6c;
        } while( true );
      }
      iVar16 = *(int *)(iVar16 + DAT_004136cc);
      if ((*(char *)(iVar16 + 0x10c) == '\0') && (*(int *)(iVar16 + 0x218) == 0)) {
        RegDeleteKeyA((HKEY)0x80000000,(LPCSTR)(iVar16 + 8));
      }
    }
LAB_00408d6c:
    DAT_004136f8 = DAT_004136f8 + 1;
    DVar3 = local_dc4;
  }
  while (iVar16 = iVar16 + -1, -1 < iVar16) {
    if (DAT_00413724 != 0) {
      return;
    }
    if (((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_004137c0 + iVar16 * 4) + 0x104) != 0)) &&
       (uVar2 <= *(ushort *)(*(int *)(DAT_004137c0 + iVar16 * 4) + 0x108))) {
      lstrcpyA(DAT_00413754,local_8c0);
      iVar9 = lstrlenA(DAT_00413754);
      pCVar7 = DAT_00413754 + iVar9;
      lstrcatA(DAT_00413754,*(LPCSTR *)(DAT_004137c0 + iVar16 * 4));
      iVar9 = lstrlenA(pCVar7);
      if (0x30 < iVar9) {
        lstrcpyA(pCVar7 + 0x2d,&DAT_004125cc);
      }
      FUN_00409026((int)DAT_00413754);
      pCVar7 = *(LPCSTR *)(DAT_004137c0 + iVar16 * 4);
      FUN_0040a281(pCVar7,*(int *)(pCVar7 + 0x100));
    }
    DAT_004136f8 = DAT_004136f8 + 1;
  }
  if (DAT_00413724 == 0) {
    iVar16 = 0;
    bVar1 = true;
    if (0 < DAT_004136c8) {
      do {
        if (DAT_00413724 != 0) break;
        if (((DAT_004136c4 == 1000) || (*(int *)(*(int *)(DAT_00413734 + iVar16 * 4) + 0x300) != 0))
           && ((*(ushort *)(*(int *)(DAT_00413734 + iVar16 * 4) + 0x304) == uVar2 ||
               (DAT_00413770 == 0)))) {
          if (bVar1) {
            FUN_00409434();
            bVar1 = false;
          }
          lstrcpyA(DAT_00413754,local_980);
          lstrcatA(DAT_00413754,(LPCSTR)(*(int *)(DAT_00413734 + iVar16 * 4) + 0x100));
          FUN_00409026((int)DAT_00413754);
          FUN_00409601(iVar16);
        }
        DAT_004136f8 = DAT_004136f8 + 1;
        iVar16 = iVar16 + 1;
      } while (iVar16 < DAT_004136c8);
      if (!bVar1) {
        if (DAT_00413728 != (HCONV)0x0) {
          DdeDisconnect(DAT_00413728);
        }
        FUN_00409026(0);
        DdeUninitialize(DAT_004136bc);
      }
    }
    if ((DAT_00413784 != (LPCSTR)0x0) &&
       ((((DAT_004136c4 == 1000 && (DAT_00413770 == 0)) ||
         ((DAT_00413770 != 0 && (DAT_00413794 == 0)))) &&
        ((DAT_004136b0 != 0 &&
         (LVar12 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Wise_Solutions_WamUser_004125ac,0,0x1f,
                                 &local_dbc), LVar12 == 0)))))) {
      local_dc0 = (HKEY)0x100;
      LVar12 = RegQueryValueExA(local_dbc,&DAT_004125a4,(LPDWORD)0x0,&local_dc4,(LPBYTE)local_d80,
                                (LPDWORD)&local_dc0);
      if (LVar12 == 0) {
        FUN_0040a794(local_d80,0);
        lstrcatA((LPSTR)local_d80,s__U___0041259c);
        lstrcatA((LPSTR)local_d80,DAT_00413784);
        lstrcatA((LPSTR)local_d80,&DAT_00412598);
        WinExec((LPCSTR)local_d80,5);
      }
      RegCloseKey(local_dbc);
    }
  }
  return;
}

