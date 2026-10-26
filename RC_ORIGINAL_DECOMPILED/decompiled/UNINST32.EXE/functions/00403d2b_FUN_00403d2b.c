/*
 * FUN_00403d2b at 00403d2b
 * undefined4 __stdcall FUN_00403d2b(LPCSTR param_1, uint * param_2)
 * Address ranges: 00403d2b-00406a15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00403d2b(LPCSTR param_1,uint *param_2)

{
  uint *lpString1;
  ushort uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  HFILE hFile;
  LPSTR pCVar7;
  int *piVar8;
  HKEY pHVar9;
  uint uVar10;
  void *pvVar11;
  LPCSTR pCVar12;
  int iVar13;
  SC_HANDLE hSCObject;
  LSTATUS LVar14;
  char *pcVar15;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  HKEY__ *pHVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  CHAR local_28dc [2048];
  CHAR local_20dc [512];
  CHAR local_1edc [256];
  CHAR local_1ddc [256];
  CHAR local_1cdc [260];
  CHAR local_1bd8 [4];
  BYTE local_1bd4 [256];
  CHAR local_1ad4 [260];
  CHAR local_19d0 [512];
  CHAR local_17d0 [260];
  HKEY__ local_16cc [256];
  CHAR local_12cc [260];
  HKEY__ local_11c8 [64];
  uint local_10c8 [128];
  byte local_ec8 [256];
  CHAR local_dc8 [260];
  CHAR local_cc4 [255];
  char acStackY_bc5 [512];
  char acStackY_9c5 [5];
  char local_9c0;
  char local_9bf;
  undefined1 local_9be;
  CHAR local_9bd [2];
  HKEY__ local_9bb;
  char local_9b7;
  CHAR local_9b6 [7];
  byte local_9af [2027];
  HKEY__ local_1c4 [64];
  CHAR local_c4 [128];
  DWORD local_44;
  DWORD local_40;
  DWORD local_3c;
  CHAR local_38 [4];
  undefined4 uStackY_34;
  char *hKey;
  byte *pbVar20;
  CHAR *pCVar21;
  DWORD DVar22;
  undefined4 uVar23;
  
  FUN_0040c390();
  lstrcpyA(local_dc8,&DAT_00412524);
  lstrcpyA(local_12cc,&DAT_00412524);
  lstrcpyA((LPSTR)param_2,param_1);
  puVar2 = (uint *)FUN_0040b53f((LPCSTR)param_2);
  if (param_2 < puVar2) {
    *(char *)((int)puVar2 + -1) = '\0';
  }
  FUN_0040a794(param_2,0);
  lstrcatA((LPSTR)param_2,&DAT_004120e0);
  hKey = (char *)0x0;
  GetDriveTypeA(&DAT_00412520);
  GetDriveTypeA(&DAT_0041251c);
  puVar3 = FUN_0040b671(0x10c);
  *(undefined4 **)(DAT_004136fc + DAT_00413b88 * 4) = puVar3;
  *(undefined4 *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x104) = 0;
  *(undefined2 *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x108) = 0;
  *(undefined2 *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x10a) = 0x7fff;
  lpString1 = *(uint **)(DAT_004136fc + DAT_00413b88 * 4);
  lstrcpyA((LPSTR)lpString1,param_1);
  FUN_0040a794(lpString1,1);
  iVar4 = lstrlenA((LPCSTR)lpString1);
  for (puVar2 = (uint *)(iVar4 + -1 + (int)lpString1); lpString1 < puVar2;
      puVar2 = (uint *)((int)puVar2 + -1)) {
    if ((char)*puVar2 == '\\') goto LAB_00403e3f;
    *(char *)puVar2 = '\0';
  }
  if ((char)*puVar2 == '\\') {
LAB_00403e3f:
    *(char *)((int)puVar2 + 1) = '\0';
  }
  iVar4 = lstrlenA((LPCSTR)lpString1);
  if (iVar4 < 4) {
    *(undefined1 *)lpString1 = 0;
  }
  iVar4 = 0;
  bVar18 = true;
  do {
    if (iVar4 == 0) {
      GetSystemDirectoryA(acStackY_9c5 + 1,0x100);
    }
    else {
      GetWindowsDirectoryA(acStackY_9c5 + 1,0x100);
    }
    iVar5 = lstrlenA(acStackY_9c5 + 1);
    if (acStackY_9c5[iVar5] != '\\') {
      lstrcatA(acStackY_9c5 + 1,&DAT_004120e0);
    }
    pvVar6 = (void *)lstrlenA((LPCSTR)lpString1);
    iVar5 = FUN_0040f730((byte *)lpString1,acStackY_9c5 + 1,pvVar6);
    if (iVar5 == 0) {
      bVar18 = false;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  GetWindowsDirectoryA(local_1cdc,0x104);
  GetSystemDirectoryA(local_17d0,0x104);
  lstrcpyA(local_1ad4,local_17d0);
  lstrcatA(local_1ad4,s__WIN32S_00412514);
  if (DAT_004136b0 == 1) {
    GetSystemDirectoryA(DAT_00413738,0x104);
    lstrcpyA(local_1bd8,DAT_00413738);
    lstrcatA(local_1bd8,&DAT_004120e0);
    pvVar6 = (void *)lstrlenA((LPCSTR)lpString1);
    iVar4 = FUN_0040f730((byte *)lpString1,local_1bd8,pvVar6);
    if (iVar4 == 0) {
      bVar18 = false;
    }
  }
  else {
    lstrcpyA(DAT_00413738,local_17d0);
  }
  if ((bVar18) && ((char)*lpString1 != '\0')) {
    DAT_00413b88 = DAT_00413b88 + 1;
  }
  hFile = _lopen(param_1,0);
  if (hFile == -1) {
    FUN_0040ab9d(DAT_00413a90,3,acStackY_9c5 + 1,0x100);
    uStackY_34 = 0x403fc7;
    FUN_0040ab9d(DAT_00413a90,2,acStackY_bc5 + 1,0x100);
    if (DAT_00413694 != (HWND)0x0) {
      DestroyWindow(DAT_00413694);
    }
    MessageBoxA(DAT_00413698,acStackY_9c5 + 1,acStackY_bc5 + 1,0);
    uVar23 = 1;
  }
  else {
    FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
    if (local_9c0 == ' ') {
      DAT_00413710 = 1;
    }
    *(undefined4 *)(DAT_004136a4 + (uint)DAT_00413b94 * 4) = 0;
    DAT_00413b94 = DAT_00413b94 + 1;
    *(undefined4 *)(DAT_004136a4 + (uint)DAT_00413b94 * 4) = 0;
    local_9c0 = '\0';
    iVar4 = lstrcmpA(acStackY_9c5 + 1,&DAT_0041250c);
    if (iVar4 == 0) {
      do {
        FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
        local_9be = 0;
        iVar4 = lstrcmpA(acStackY_9c5 + 1,s_Title__00412504);
        if (iVar4 == 0) break;
      } while (acStackY_9c5[1] != '\0');
      if (acStackY_9c5[1] != '\0') {
        lstrcpyA(DAT_00413aa8,local_9bd);
        iVar4 = lstrlenA(DAT_00413aa8);
        if ((0xd < iVar4) &&
           (iVar5 = lstrcmpiA(DAT_00413aa8 + iVar4 + -0xd,s_INSTALLATION_004124f4), iVar5 == 0)) {
          DAT_00413aa8[iVar4 + -0xd] = '\0';
        }
        iVar4 = lstrlenA(DAT_00413aa8);
        if ((8 < iVar4) &&
           (iVar5 = lstrcmpiA(DAT_00413aa8 + iVar4 + -8,s_INSTALL_004124e8), iVar5 == 0)) {
          DAT_00413aa8[iVar4 + -8] = '\0';
        }
        if (DAT_00413ac4 == 0) {
          FUN_0040ab9d(DAT_00413a90,0x19,(LPCSTR)local_11c8,0x100);
          hKey = (char *)local_11c8;
          uStackY_34 = 0x404174;
          wsprintfA((LPSTR)local_ec8,s__s__s_004124e0);
          SetWindowTextA(DAT_00413698,(LPCSTR)local_ec8);
        }
LAB_0040418a:
        do {
          FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
LAB_004041a3:
          if (acStackY_9c5[1] == '\0') {
            uVar23 = 0;
            goto LAB_00406a06;
          }
          bVar18 = true;
          iVar4 = __strcmpi(acStackY_9c5 + 1,s_Non_System_File__004124cc);
          if (iVar4 == 0) {
            FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,1);
          }
          iVar4 = __strcmpi(acStackY_9c5 + 1,s_Shared_DLL_counter_ignored__004124b0);
          bVar17 = iVar4 == 0;
          if (bVar17) {
            FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
          }
          iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_File_Copy__004124a4,(void *)0xb);
          if (((iVar4 == 0) ||
              (iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Shell_Link__00412494,(void *)0xc),
              iVar4 == 0)) ||
             (iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_File_Overwrite__00412480,
                                   (void *)0x10), iVar4 == 0)) {
            bVar19 = false;
            local_16cc[0].unused._0_1_ = '\0';
            local_c4[0] = '\0';
            pCVar12 = FUN_0040be4c(acStackY_9c5 + 1,0x7c);
            if (pCVar12 != (LPCSTR)0x0) {
              lstrcpyA(local_c4,pCVar12 + 1);
              if (pCVar12[-1] == ' ') {
                pCVar12[-1] = '\0';
              }
              else {
                *pCVar12 = '\0';
              }
            }
            if (acStackY_9c5[1] == 'S') {
              lstrcpyA((LPSTR)local_1c4,(LPCSTR)((int)&local_9bb.unused + 3));
              if (DAT_00413784 != (LPSTR)0x0) {
                pvVar6 = (void *)lstrlenA(local_dc8);
                iVar4 = FUN_0040f730((byte *)local_1c4,local_dc8,pvVar6);
                if (iVar4 == 0) {
                  pvVar6 = (void *)lstrlenA(local_12cc);
                  iVar4 = FUN_0040f730((byte *)local_1c4,local_12cc,pvVar6);
                  if (iVar4 != 0) {
                    local_1c4[0].unused._0_1_ = '\0';
                  }
                }
              }
            }
            else if (local_9bf == 'C') {
              lstrcpyA((LPSTR)local_1c4,(LPCSTR)((int)&local_9bb.unused + 2));
            }
            else {
              lstrcpyA((LPSTR)local_1c4,local_9b6 + 2);
              bVar19 = true;
              if ((DAT_004136ec != 0) &&
                 (LVar14 = RegOpenKeyExA((HKEY)0x80000002,
                                         PTR_s_Software_Microsoft_Windows_Curre_00412058,0,0x1f,
                                         (PHKEY)&stack0xffffffdc), LVar14 == 0)) {
                pHVar9 = local_1c4;
                LVar14 = RegQueryValueExA(pHVar9,(LPCSTR)pHVar9,(LPDWORD)0x0,&local_44,local_1bd4,
                                          (LPDWORD)&stack0xffffffd4);
                bVar19 = LVar14 != 0;
                RegCloseKey(pHVar9);
              }
            }
            FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
            local_cc4[0] = '\0';
            hKey = s_Link_Info__004121d4;
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Link_Info__004121d4,(void *)0xb);
            if (iVar4 == 0) {
              lstrcpyA((LPSTR)local_16cc,(LPCSTR)((int)&local_9bb.unused + 2));
              FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
            }
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Backup_Copy__0041240c,(void *)0xd);
            bVar18 = iVar4 == 0;
            if (bVar18) {
              lstrcpyA(local_cc4,&local_9b7);
              DAT_00413a98 = 1;
            }
            iVar5 = 0x406062;
            iVar4 = FUN_0040f730((byte *)local_1c4,&DAT_00412408,(void *)0x2);
            if ((iVar4 == 0) && (iVar5 == 2)) {
LAB_004067e5:
              if ((local_c4[0] != '\0') || ((char)local_16cc[0].unused != '\0')) {
                iVar4 = lstrcmpiA(acStackY_bc5 + 1,local_1cdc);
                if ((iVar4 == 0) ||
                   (((iVar4 = lstrcmpiA(acStackY_bc5 + 1,local_17d0), iVar4 == 0 ||
                     (iVar4 = lstrcmpiA(acStackY_bc5 + 1,DAT_00413738), iVar4 == 0)) ||
                    (iVar4 = lstrcmpiA(acStackY_bc5 + 1,local_1ad4), iVar4 == 0)))) {
                  iVar4 = 0;
                  if (0 < DAT_00413768) {
                    do {
                      iVar5 = lstrcmpiA((LPCSTR)local_1c4,*(LPCSTR *)(DAT_00413b0c + iVar4 * 4));
                      if (iVar5 == 0) break;
                      iVar4 = iVar4 + 1;
                    } while (iVar4 < DAT_00413768);
                    if (iVar4 < DAT_00413768) {
                      iVar4 = iVar4 * 4;
                      *(ushort *)(*(int *)(iVar4 + DAT_00413b0c) + 0x26c) = DAT_00413b94;
                      goto LAB_00406930;
                    }
                  }
                }
                else {
                  hKey = (char *)*DAT_004136e8;
                  piVar8 = FUN_0040b793((int *)0x0,(int *)hKey,0x27c,DAT_00413ab4,(char *)local_1c4,
                                        (LPCSTR)0x0,(LPCSTR)0x0);
                  if (piVar8 != (int *)0x0) {
                    *(ushort *)(piVar8 + 0x9d) = DAT_00413b94;
LAB_0040689d:
                    lstrcpyA((LPSTR)(piVar8 + 0x84),local_c4);
                    if ((char)local_16cc[0].unused != '\0') {
                      iVar4 = lstrlenA((LPCSTR)local_16cc);
                      pHVar9 = (HKEY)FUN_0040b671(iVar4 + 1);
                      piVar8[0x98] = (int)pHVar9;
                      pHVar16 = local_16cc;
                      goto LAB_00406989;
                    }
                    goto LAB_0040698b;
                  }
                }
LAB_00406751:
                FUN_00406a16((LPCSTR)local_1c4,local_c4,(LPCSTR)local_16cc);
              }
            }
            else {
              pHVar16 = local_1c4;
              iVar4 = FUN_0040f730((byte *)pHVar16,&DAT_00412404,(void *)0x2);
              if (((iVar4 == 0) && (pHVar16 == (HKEY__ *)0x2)) ||
                 (((bVar19 && (local_cc4[0] == '\0')) || ((char)local_1c4[0].unused == '\0'))))
              goto LAB_004067e5;
              iVar4 = FUN_0040a933((LPCSTR)local_1c4);
              if (iVar4 == 0) {
                lstrcpyA(acStackY_bc5 + 1,(LPCSTR)local_1c4);
                iVar4 = lstrlenA(acStackY_bc5 + 1);
                for (pcVar15 = acStackY_bc5 + iVar4; acStackY_bc5 + 1 < pcVar15;
                    pcVar15 = pcVar15 + -1) {
                  if (*pcVar15 == '\\') goto LAB_00406108;
                  *pcVar15 = '\0';
                }
                if (*pcVar15 == '\\') {
LAB_00406108:
                  *pcVar15 = '\0';
                }
                iVar4 = lstrcmpiA(acStackY_bc5 + 1,local_1cdc);
                if (((iVar4 != 0) && (iVar4 = lstrcmpiA(acStackY_bc5 + 1,local_17d0), iVar4 != 0))
                   && ((iVar4 = lstrcmpiA(acStackY_bc5 + 1,DAT_00413738), iVar4 != 0 &&
                       (iVar4 = lstrcmpiA(acStackY_bc5 + 1,local_1ad4), iVar4 != 0)))) {
                  hKey = (char *)*DAT_004136e8;
                  piVar8 = FUN_0040b793(DAT_004136e8 + DAT_00413ab4,(int *)hKey,0x27c,DAT_00413ab4,
                                        (char *)local_1c4,(LPCSTR)0x0,(LPCSTR)0x0);
                  if (piVar8 == (int *)0x0) {
                    *(undefined2 *)(DAT_004136e8[DAT_00413ab4] + 0x274) = 0;
                    *(undefined4 *)(DAT_004136e8[DAT_00413ab4] + 0x264) = 0;
                    if (DAT_00413710 == 0) {
                      OemToCharA((LPCSTR)local_1c4,(LPSTR)(DAT_004136e8[DAT_00413ab4] + 8));
                    }
                    else {
                      lstrcpyA((LPSTR)(DAT_004136e8[DAT_00413ab4] + 8),(LPCSTR)local_1c4);
                    }
                    if (DAT_00413710 == 0) {
                      OemToCharA(local_cc4,(LPSTR)(DAT_004136e8[DAT_00413ab4] + 0x10c));
                    }
                    else {
                      lstrcpyA((LPSTR)(DAT_004136e8[DAT_00413ab4] + 0x10c),local_cc4);
                    }
                    *(undefined2 *)(DAT_004136e8[DAT_00413ab4] + 0x26e) = 0;
                    *(undefined2 *)(DAT_004136e8[DAT_00413ab4] + 0x26c) = 0;
                    *(ushort *)(DAT_004136e8[DAT_00413ab4] + 0x270) = DAT_00413b94;
                    *(ushort *)(DAT_004136e8[DAT_00413ab4] + 0x272) = DAT_00413b94;
                    if (bVar17) {
                      *(undefined2 *)(DAT_004136e8[DAT_00413ab4] + 0x276) = 0;
                    }
                    else {
                      *(ushort *)(DAT_004136e8[DAT_00413ab4] + 0x276) = DAT_00413b94;
                      *(undefined4 *)(DAT_004136e8[DAT_00413ab4] + 0x278) = 1;
                    }
                    if ((bVar19) || (local_cc4[0] != '\0')) {
                      *(undefined4 *)(DAT_004136e8[DAT_00413ab4] + 0x268) = 0;
                    }
                    else {
                      *(undefined4 *)(DAT_004136e8[DAT_00413ab4] + 0x268) = 1;
                    }
                    lstrcpyA((LPSTR)(DAT_004136e8[DAT_00413ab4] + 0x210),local_c4);
                    *(undefined4 *)(DAT_004136e8[DAT_00413ab4] + 0x260) = 0;
                    if ((char)local_16cc[0].unused != '\0') {
                      iVar4 = lstrlenA((LPCSTR)local_16cc);
                      puVar3 = FUN_0040b671(iVar4 + 1);
                      *(undefined4 **)(DAT_004136e8[DAT_00413ab4] + 0x260) = puVar3;
                      lstrcpyA(*(LPSTR *)(DAT_004136e8[DAT_00413ab4] + 0x260),(LPCSTR)local_16cc);
                    }
                    DAT_00413ab4 = DAT_00413ab4 + 1;
                    goto LAB_0040698b;
                  }
                  *(ushort *)(piVar8 + 0x9c) = DAT_00413b94;
                  uVar1 = DAT_00413b94;
                  if (!bVar17) {
                    piVar8[0x9e] = piVar8[0x9e] + 1;
                    *(ushort *)((int)piVar8 + 0x276) = uVar1;
                  }
                  if (local_cc4[0] != '\0') {
                    lstrcpyA((LPSTR)(piVar8 + 0x43),local_cc4);
                    *(ushort *)((int)piVar8 + 0x272) = DAT_00413b94;
                  }
                  goto LAB_0040689d;
                }
                iVar4 = 0;
                if (DAT_00413768 < 1) {
LAB_00406458:
                  DVar22 = 0x274;
                  puVar3 = FUN_0040b671(0x274);
                  *(undefined4 **)(DAT_00413b0c + DAT_00413768 * 4) = puVar3;
                  *(undefined2 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x26c) = 0;
                  *(DWORD *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x25c) = DVar22;
                  if (DAT_00413710 == 0) {
                    OemToCharA((LPCSTR)local_1c4,*(LPSTR *)(DAT_00413b0c + DAT_00413768 * 4));
                  }
                  else {
                    lstrcpyA(*(LPSTR *)(DAT_00413b0c + DAT_00413768 * 4),(LPCSTR)local_1c4);
                  }
                  if (DAT_00413710 == 0) {
                    OemToCharA(local_cc4,(LPSTR)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x104))
                    ;
                  }
                  else {
                    lstrcpyA((LPSTR)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x104),local_cc4);
                  }
                  *(undefined2 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x266) = 0;
                  *(undefined2 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x264) = 0;
                  *(ushort *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x268) = DAT_00413b94;
                  *(ushort *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x26a) = DAT_00413b94;
                  if (bVar17) {
                    *(undefined2 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x26e) = 0;
                  }
                  else {
                    *(ushort *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x26e) = DAT_00413b94;
                    *(undefined4 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x270) = 1;
                  }
                  if ((bVar19) || (local_cc4[0] != '\0')) {
                    *(undefined4 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x260) = 0;
                  }
                  else {
                    *(undefined4 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x260) = 1;
                  }
                  lstrcpyA((LPSTR)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 0x208),local_c4);
                  *(undefined4 *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 600) = 0;
                  if ((char)local_16cc[0].unused != '\0') {
                    iVar4 = lstrlenA((LPCSTR)local_16cc);
                    puVar3 = FUN_0040b671(iVar4 + 1);
                    *(undefined4 **)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 600) = puVar3;
                    lstrcpyA(*(LPSTR *)(*(int *)(DAT_00413b0c + DAT_00413768 * 4) + 600),
                             (LPCSTR)local_16cc);
                  }
                  DAT_00413768 = DAT_00413768 + 1;
                  goto LAB_0040698b;
                }
                do {
                  iVar5 = lstrcmpiA((LPCSTR)local_1c4,*(LPCSTR *)(DAT_00413b0c + iVar4 * 4));
                  if (iVar5 == 0) break;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < DAT_00413768);
                if (DAT_00413768 <= iVar4) goto LAB_00406458;
                iVar4 = iVar4 * 4;
                *(ushort *)(*(int *)(iVar4 + DAT_00413b0c) + 0x268) = DAT_00413b94;
                if (!bVar17) {
                  *(ushort *)(*(int *)(iVar4 + DAT_00413b0c) + 0x26e) = DAT_00413b94;
                  piVar8 = (int *)(*(int *)(iVar4 + DAT_00413b0c) + 0x270);
                  *piVar8 = *piVar8 + 1;
                }
                if (local_cc4[0] != '\0') {
                  lstrcpyA((LPSTR)(*(int *)(iVar4 + DAT_00413b0c) + 0x104),local_cc4);
                  *(ushort *)(*(int *)(iVar4 + DAT_00413b0c) + 0x26a) = DAT_00413b94;
                }
LAB_00406930:
                lstrcpyA((LPSTR)(*(int *)(iVar4 + DAT_00413b0c) + 0x208),local_c4);
                if ((char)local_16cc[0].unused == '\0') goto LAB_0040698b;
                iVar5 = lstrlenA((LPCSTR)local_16cc);
                puVar3 = FUN_0040b671(iVar5 + 1);
                *(undefined4 **)(*(int *)(iVar4 + DAT_00413b0c) + 600) = puVar3;
                iVar5 = DAT_00413b0c;
              }
              else {
                iVar4 = 0;
                if (DAT_004136d4 < 1) goto LAB_00406751;
                do {
                  iVar5 = lstrcmpiA((LPCSTR)local_1c4,*(LPCSTR *)(DAT_00413700 + iVar4 * 4));
                  if (iVar5 == 0) break;
                  iVar4 = iVar4 + 1;
                } while (iVar4 < DAT_004136d4);
                if (DAT_004136d4 <= iVar4) goto LAB_00406751;
                iVar4 = iVar4 * 4;
                *(ushort *)(*(int *)(iVar4 + DAT_00413700) + 0x268) = DAT_00413b94;
                lstrcpyA((LPSTR)(*(int *)(iVar4 + DAT_00413700) + 0x208),local_c4);
                if ((char)local_16cc[0].unused == '\0') goto LAB_0040698b;
                iVar5 = lstrlenA((LPCSTR)local_16cc);
                puVar3 = FUN_0040b671(iVar5 + 1);
                *(undefined4 **)(*(int *)(iVar4 + DAT_00413700) + 600) = puVar3;
                iVar5 = DAT_00413700;
              }
              pHVar16 = local_16cc;
              pHVar9 = *(HKEY *)(*(int *)(iVar4 + iVar5) + 600);
LAB_00406989:
              lstrcpyA((LPSTR)pHVar9,(LPCSTR)pHVar16);
            }
LAB_0040698b:
            if (bVar18) goto LAB_0040418a;
            goto LAB_004041a3;
          }
          iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Key__00412474,(void *)0xb);
          if (iVar4 == 0) {
            lstrcpyA((LPSTR)local_10c8,(LPCSTR)((int)&local_9bb.unused + 2));
            FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
            hKey = s_RegDB_Val__00412468;
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Val__00412468,(void *)0xb);
            if (iVar4 != 0) goto LAB_004041a3;
            lstrcpyA(local_28dc,(LPCSTR)((int)&local_9bb.unused + 2));
            do {
              FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Val__00412468,(void *)0xb);
            } while (iVar4 == 0);
            local_19d0[0] = '\0';
            iVar5 = 0;
            uVar23 = 0;
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Name__00412458,(void *)0xc);
            if (iVar4 == 0) {
              lstrcpyA(local_19d0,(LPCSTR)((int)&local_9bb.unused + 3));
              FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
            }
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Type__00412448,(void *)0xc);
            if (iVar4 == 0) {
              uVar23 = FUN_0040c37e(this,(byte *)((int)&local_9bb.unused + 3));
              FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
            }
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Root__00412438,(void *)0xc);
            if (iVar4 == 0) {
              iVar5 = FUN_0040c37e(this_00,(byte *)((int)&local_9bb.unused + 3));
              hKey = (char *)0x404462;
              FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
              if ((iVar5 == 1) && (DAT_00413784 != (LPSTR)0x0)) goto LAB_004041a3;
            }
            wsprintfA(local_38,&DAT_00412434);
            puVar3 = FUN_0040b671(0x10);
            *(undefined4 **)(DAT_00413744 + DAT_004136b8 * 4) = puVar3;
            puVar3 = *(undefined4 **)(DAT_00413744 + DAT_004136b8 * 4);
            DAT_004136b8 = DAT_004136b8 + 1;
            iVar4 = lstrlenA(local_28dc);
            pCVar7 = (LPSTR)FUN_0040b671(iVar4 + 1);
            puVar3[3] = pCVar7;
            lstrcpyA(pCVar7,local_28dc);
            *puVar3 = 0;
            puVar3[2] = 0;
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Old__00412428,(void *)0xb);
            if (iVar4 == 0) {
              *puVar3 = 1;
              piVar8 = FUN_0040b793(DAT_00413a84 + DAT_00413afc,(int *)*DAT_00413a84,0x1224,
                                    DAT_00413afc,(char *)local_10c8,local_19d0,local_38);
              if (piVar8 == (int *)0x0) {
                *(undefined4 *)(DAT_00413a84[DAT_00413afc] + 0x121c) = 0;
                *(undefined4 *)(DAT_00413a84[DAT_00413afc] + 0x1218) = uVar23;
                *(int *)(DAT_00413a84[DAT_00413afc] + 0x1214) = iVar5;
                *(ushort *)(DAT_00413a84[DAT_00413afc] + 0x1220) = DAT_00413b94;
                lstrcpyA((LPSTR)(DAT_00413a84[DAT_00413afc] + 8),(LPCSTR)local_10c8);
                lstrcpyA((LPSTR)(DAT_00413a84[DAT_00413afc] + 0x108),local_19d0);
                lstrcpyA((LPSTR)(DAT_00413a84[DAT_00413afc] + 0x208),local_38);
                pCVar7 = (LPSTR)(DAT_00413a84[DAT_00413afc] + 0x214);
                do {
                  lstrcpyA(pCVar7,(LPCSTR)((int)&local_9bb.unused + 2));
                  iVar4 = lstrlenA(pCVar7);
                  pCVar7 = pCVar7 + iVar4 + 1;
                  FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                  hKey = s_RegDB_Old__00412428;
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Old__00412428,(void *)0xb)
                  ;
                } while (iVar4 == 0);
                *pCVar7 = '\0';
                lstrcpyA((LPSTR)(DAT_00413a84[DAT_00413afc] + 0xa14),
                         (LPCSTR)(DAT_00413a84[DAT_00413afc] + 0x214));
                puVar3[2] = DAT_00413a84[DAT_00413afc];
                DAT_00413afc = DAT_00413afc + 1;
                goto LAB_004041a3;
              }
              pCVar7 = local_20dc;
              do {
                lstrcpyA(pCVar7,(LPCSTR)((int)&local_9bb.unused + 2));
                iVar4 = lstrlenA(pCVar7);
                pCVar7 = pCVar7 + iVar4 + 1;
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                hKey = s_RegDB_Old__00412428;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Old__00412428,(void *)0xb);
              } while (iVar4 == 0);
              *pCVar7 = '\0';
              lstrcpyA((LPSTR)(piVar8 + 0x285),local_20dc);
              *(ushort *)(piVar8 + 0x488) = DAT_00413b94;
            }
            else {
              puVar3[1] = uVar23;
              hKey = (char *)*DAT_004136cc;
              piVar8 = FUN_0040b793(DAT_004136cc + DAT_00413b9c,(int *)hKey,0x224,DAT_00413b9c,
                                    (char *)local_10c8,local_19d0,local_38);
              if (piVar8 == (int *)0x0) {
                *(undefined4 *)(DAT_004136cc[DAT_00413b9c] + 0x21c) = 0;
                *(int *)(DAT_004136cc[DAT_00413b9c] + 0x218) = iVar5;
                *(ushort *)(DAT_004136cc[DAT_00413b9c] + 0x220) = DAT_00413b94;
                lstrcpyA((LPSTR)(DAT_004136cc[DAT_00413b9c] + 8),(LPCSTR)local_10c8);
                lstrcpyA((LPSTR)(DAT_004136cc[DAT_00413b9c] + 0x10c),local_19d0);
                lstrcpyA((LPSTR)(DAT_004136cc[DAT_00413b9c] + 0x20c),local_38);
                puVar3[2] = DAT_004136cc[DAT_00413b9c];
                DAT_00413b9c = DAT_00413b9c + 1;
                goto LAB_004041a3;
              }
              *(ushort *)(piVar8 + 0x88) = DAT_00413b94;
            }
            puVar3[2] = piVar8;
            goto LAB_004041a3;
          }
          iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_File_Edit__0041241c,(void *)0xb);
          if (iVar4 == 0) {
            lstrcpyA((LPSTR)local_ec8,(LPCSTR)((int)&local_9bb.unused + 2));
            FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
            local_11c8[0].unused._0_1_ = '\0';
            hKey = s_Backup_Copy__0041240c;
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Backup_Copy__0041240c,(void *)0xd);
            bVar18 = iVar4 == 0;
            if (bVar18) {
              lstrcpyA((LPSTR)local_11c8,&local_9b7);
            }
            iVar5 = 0x404888;
            iVar4 = FUN_0040f730(local_ec8,&DAT_00412408,(void *)0x2);
            if ((iVar4 == 0) && (iVar5 == 2)) goto LAB_0040698b;
            pbVar20 = local_ec8;
            iVar4 = FUN_0040f730(pbVar20,&DAT_00412404,(void *)0x2);
            if (((iVar4 == 0) && (pbVar20 == (byte *)0x2)) ||
               (((char)local_11c8[0].unused == '\0' ||
                (iVar4 = FUN_0040a933((LPCSTR)local_ec8), iVar4 != 0)))) goto LAB_0040698b;
            lstrcpyA(acStackY_bc5 + 1,(LPCSTR)local_ec8);
            iVar4 = 0;
            if (DAT_00413ab0 < 1) {
LAB_00404926:
              puVar3 = FUN_0040b671(0x20a);
              *(undefined4 **)(DAT_004136a0 + DAT_00413ab0 * 4) = puVar3;
              if (DAT_00413710 == 0) {
                OemToCharA((LPCSTR)local_ec8,*(LPSTR *)(DAT_004136a0 + DAT_00413ab0 * 4));
              }
              else {
                lstrcpyA(*(LPSTR *)(DAT_004136a0 + DAT_00413ab0 * 4),(LPCSTR)local_ec8);
              }
              if (DAT_00413710 == 0) {
                OemToCharA((LPCSTR)local_11c8,
                           (LPSTR)(*(int *)(DAT_004136a0 + DAT_00413ab0 * 4) + 0x104));
              }
              else {
                lstrcpyA((LPSTR)(*(int *)(DAT_004136a0 + DAT_00413ab0 * 4) + 0x104),
                         (LPCSTR)local_11c8);
              }
              *(ushort *)(*(int *)(DAT_004136a0 + DAT_00413ab0 * 4) + 0x208) = DAT_00413b94;
              DAT_00413ab0 = DAT_00413ab0 + 1;
              goto LAB_0040698b;
            }
            do {
              iVar5 = lstrcmpiA((LPCSTR)local_ec8,*(LPCSTR *)(DAT_004136a0 + iVar4 * 4));
              if (iVar5 == 0) break;
              iVar4 = iVar4 + 1;
            } while (iVar4 < DAT_00413ab0);
            if (DAT_00413ab0 <= iVar4) goto LAB_00404926;
            *(ushort *)(*(int *)(iVar4 * 4 + DAT_004136a0) + 0x208) = DAT_00413b94;
            pHVar16 = local_11c8;
            pHVar9 = (HKEY)(*(int *)(iVar4 * 4 + DAT_004136a0) + 0x104);
            goto LAB_00406989;
          }
          iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Create_Service__004123f0,(void *)0x10);
          if (iVar4 == 0) {
            iVar4 = 0;
            if (DAT_00413a80 < 1) goto LAB_00404a70;
            goto LAB_00404a49;
          }
          iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Add_Device__004123e0,(void *)0xc);
          if (iVar4 != 0) {
            iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Self_Register__004123d0,(void *)0xf);
            if (iVar4 != 0) {
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_New__004123c4,(void *)0x9);
              if (iVar4 == 0) {
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                hKey = s_INI_File__004123b8;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_File__004123b8,(void *)0xa);
                if (iVar4 == 0) {
                  iVar5 = 0x404d17;
                  iVar4 = FUN_0040f730((byte *)(local_9bd + 3),&DAT_00412408,(void *)0x2);
                  if ((iVar4 != 0) || (iVar5 != 2)) {
                    pbVar20 = (byte *)(local_9bd + 3);
                    iVar4 = FUN_0040f730(pbVar20,&DAT_00412404,(void *)0x2);
                    if (((iVar4 != 0) || (pbVar20 != (byte *)0x2)) &&
                       (iVar4 = FUN_0040a933(local_9bd + 3), iVar4 == 0)) {
                      iVar4 = 0;
                      if (0 < DAT_00413774) {
                        do {
                          iVar5 = lstrcmpiA(local_9bd + 3,*(LPCSTR *)(DAT_004136a8 + iVar4 * 4));
                          if (iVar5 == 0) break;
                          iVar4 = iVar4 + 1;
                        } while (iVar4 < DAT_00413774);
                        if (iVar4 < DAT_00413774) {
                          *(ushort *)(*(int *)(DAT_004136a8 + iVar4 * 4) + 0x108) = DAT_00413b94;
                          goto LAB_00404e3b;
                        }
                      }
                      puVar3 = FUN_0040b671(0x10c);
                      *(undefined4 **)(DAT_004136a8 + DAT_00413774 * 4) = puVar3;
                      *(undefined4 *)(*(int *)(DAT_004136a8 + DAT_00413774 * 4) + 0x104) = 0;
                      if (DAT_00413710 == 0) {
                        OemToCharA(local_9bd + 3,*(LPSTR *)(DAT_004136a8 + DAT_00413774 * 4));
                      }
                      else {
                        lstrcpyA(*(LPSTR *)(DAT_004136a8 + DAT_00413774 * 4),local_9bd + 3);
                      }
                      *(ushort *)(*(int *)(DAT_004136a8 + DAT_00413774 * 4) + 0x108) = DAT_00413b94;
                      DAT_00413774 = DAT_00413774 + 1;
                    }
                  }
LAB_00404e3b:
                  do {
                    FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                    hKey = &DAT_004123b0;
                    iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),&DAT_004123b0,(void *)0x4);
                    if ((iVar4 != 0) || (local_9c0 == 'F')) break;
                  } while (local_9c0 != 'N');
                }
                goto LAB_004041a3;
              }
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_File__004123b8,(void *)0xa);
              if (iVar4 == 0) {
                iVar5 = 0x404ebb;
                iVar4 = FUN_0040f730((byte *)(local_9bd + 3),&DAT_00412408,(void *)0x2);
                if ((iVar4 == 0) && (iVar5 == 2)) {
LAB_00404ee8:
                  bVar18 = false;
                }
                else {
                  pbVar20 = (byte *)(local_9bd + 3);
                  iVar4 = FUN_0040f730(pbVar20,&DAT_00412404,(void *)0x2);
                  if ((iVar4 == 0) && (pbVar20 == (byte *)0x2)) goto LAB_00404ee8;
                  bVar18 = true;
                }
                if (DAT_00413710 == 0) {
                  OemToCharA(local_9bd + 3,local_19d0);
                }
                else {
                  lstrcpyA(local_19d0,local_9bd + 3);
                }
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                if (!bVar18) goto LAB_0040418a;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_Sect__004123a4,(void *)0xa);
                if (iVar4 == 0) {
                  lstrcpyA(acStackY_bc5 + 1,local_9bd + 3);
                  FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                  hKey = s_INI_Item__00412398;
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_Item__00412398,(void *)0xa);
                  if (iVar4 == 0) {
                    lstrcpyA((LPSTR)local_10c8,local_9bd + 3);
                    FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                    hKey = s_INI_Val__0041238c;
                    iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_Val__0041238c,(void *)0x9)
                    ;
                    if (iVar4 == 0) {
                      FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                      iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_INI_Old__00412380,
                                           (void *)0x9);
                      if (iVar4 != 0) {
                        pHVar16 = (HKEY__ *)&DAT_004134d0;
                      }
                      else {
                        pHVar16 = (HKEY__ *)(local_9bd + 2);
                      }
                      bVar18 = iVar4 == 0;
                      hKey = (char *)*DAT_004137a8;
                      piVar8 = FUN_0040b793(DAT_004137a8 + DAT_00413720,(int *)hKey,0x714,
                                            DAT_00413720,local_19d0,acStackY_bc5 + 1,
                                            (LPCSTR)local_10c8);
                      if (piVar8 != (int *)0x0) {
                        pHVar9 = (HKEY)(piVar8 + 0x143);
                        goto LAB_00406989;
                      }
                      *(undefined4 *)(DAT_004137a8[DAT_00413720] + 0x70c) = 0;
                      *(ushort *)(DAT_004137a8[DAT_00413720] + 0x710) = DAT_00413b94;
                      lstrcpyA((LPSTR)(DAT_004137a8[DAT_00413720] + 8),local_19d0);
                      lstrcpyA((LPSTR)(DAT_004137a8[DAT_00413720] + 0x10c),acStackY_bc5 + 1);
                      lstrcpyA((LPSTR)(DAT_004137a8[DAT_00413720] + 0x20c),(LPCSTR)local_10c8);
                      lstrcpyA((LPSTR)(DAT_004137a8[DAT_00413720] + 0x30c),(LPCSTR)pHVar16);
                      lstrcpyA((LPSTR)(DAT_004137a8[DAT_00413720] + 0x50c),
                               (LPCSTR)(DAT_004137a8[DAT_00413720] + 0x30c));
                      DAT_00413720 = DAT_00413720 + 1;
                      goto LAB_0040698b;
                    }
                  }
                }
                goto LAB_004041a3;
              }
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Execute_Path__00412370,(void *)0xe);
              if ((iVar4 == 0) ||
                 (iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Execute_Program__0041235c,
                                       (void *)0x11), iVar4 == 0)) {
                iVar4 = 0;
                uVar10 = ((char)local_9bb.unused != 'r') - 1 & 3;
                if (0 < DAT_00413aa0) {
                  do {
                    iVar5 = lstrcmpiA(local_9b6 + uVar10,*(LPCSTR *)(DAT_00413748 + iVar4 * 4));
                    if (iVar5 == 0) break;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < DAT_00413aa0);
                  if (iVar4 < DAT_00413aa0) {
                    *(ushort *)(*(int *)(DAT_00413748 + iVar4 * 4) + 0x208) = DAT_00413b94;
                    goto LAB_0040698b;
                  }
                }
                puVar3 = FUN_0040b671(0x20c);
                *(undefined4 **)(DAT_00413748 + DAT_00413aa0 * 4) = puVar3;
                *(undefined4 *)(*(int *)(DAT_00413748 + DAT_00413aa0 * 4) + 0x204) = 0;
                *(ushort *)(*(int *)(DAT_00413748 + DAT_00413aa0 * 4) + 0x208) = DAT_00413b94;
                lstrcpyA(*(LPSTR *)(DAT_00413748 + DAT_00413aa0 * 4),local_9b6 + uVar10);
                *(undefined1 *)(*(int *)(DAT_00413748 + DAT_00413aa0 * 4) + 0x104) = 0;
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                hKey = s_Execute_Name__004121e0;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Execute_Name__004121e0,(void *)0xe
                                    );
                bVar18 = iVar4 == 0;
                if (bVar18) {
                  lstrcpyA((LPSTR)(*(int *)(DAT_00413748 + DAT_00413aa0 * 4) + 0x104),local_9b6);
                }
                DAT_00413aa0 = DAT_00413aa0 + 1;
                goto LAB_0040698b;
              }
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Icon_Group__0041234c,(void *)0xc);
              if (iVar4 == 0) {
                lstrcpyA(acStackY_bc5 + 1,(LPCSTR)((int)&local_9bb.unused + 3));
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                hKey = s_Icon_Name__00412340;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Icon_Name__00412340,(void *)0xb);
                if (iVar4 != 0) goto LAB_004041a3;
                lstrcpyA((LPSTR)local_10c8,(LPCSTR)((int)&local_9bb.unused + 2));
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                hKey = s_Icon_Cmd__00412334;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Icon_Cmd__00412334,(void *)0xa);
                if (iVar4 == 0) goto code_r0x00405215;
                goto LAB_004041a3;
              }
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_SubSystem__B_00412324,(void *)0xc);
              if (iVar4 == 0) {
                iVar4 = lstrlenA((LPCSTR)((int)&local_9bb.unused + 2));
                DAT_0041379c = (LPSTR)FUN_0040b671(iVar4 + 1);
                lstrcpyA(DAT_0041379c,(LPCSTR)((int)&local_9bb.unused + 2));
                DAT_004136d0 = 0;
                goto LAB_0040418a;
              }
              iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Made_Dir__00412318,(void *)0xa);
              if (iVar4 != 0) {
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_File_Tree__0041230c,(void *)0xb);
                if (iVar4 == 0) {
                  iVar4 = lstrlenA((LPCSTR)((int)&local_9bb.unused + 2));
                  iVar5 = lstrcmpA(local_9bd + iVar4,&DAT_00412304);
                  if (iVar5 == 0) {
                    local_9bd[iVar4] = '\0';
                  }
                  pCVar12 = FUN_0040be4c(acStackY_9c5 + 1,0x2a);
                  if ((pCVar12 == (LPCSTR)0x0) &&
                     (pCVar12 = FUN_0040be4c(acStackY_9c5 + 1,0x3f), pCVar12 == (LPCSTR)0x0)) {
                    lstrcatA(acStackY_9c5 + 1,&DAT_004120e0);
                  }
                  iVar4 = lstrlenA((LPCSTR)((int)&local_9bb.unused + 2));
                  if (iVar4 < 4) goto LAB_0040418a;
                  if ((local_9bb.unused._2_1_ != '\\') || (local_9bb.unused._3_1_ != '\\')) {
                    if (DAT_0041311c < 2) {
                      uVar10 = *(ushort *)(PTR_DAT_00412f10 + local_9bb.unused._2_1_ * 2) & 0x103;
                    }
                    else {
                      uVar10 = FUN_0040c27e(this_02,(int)local_9bb.unused._2_1_,0x103);
                    }
                    if (((uVar10 == 0) || (local_9bb.unused._3_1_ != ':')) || (local_9b7 != '\\'))
                    goto LAB_0040418a;
                  }
                  iVar4 = 0;
                  if (DAT_00413b88 < 1) goto LAB_004056dc;
                  goto LAB_004056b1;
                }
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Tree__004122f4,(void *)0xc);
                if (iVar4 != 0) {
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),&DAT_0041250c,(void *)0x4);
                  if (iVar4 == 0) {
                    iVar4 = lstrlenA(acStackY_9c5 + 1);
                    DAT_00413794 = ((DAT_0041376c + DAT_0041378c) - iVar4) + -1;
                    DAT_00413b94 = DAT_00413b94 + 1;
                    *(undefined4 *)(DAT_004136a4 + (uint)DAT_00413b94 * 4) = 0;
                    DAT_00413710 = (uint)(local_9c0 == ' ');
                    goto LAB_0040418a;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Source__004122e8,(void *)0x8);
                  if (iVar4 == 0) {
                    iVar4 = lstrlenA(local_9bd + 1);
                    puVar3 = FUN_0040b671(iVar4 + 1);
                    *(undefined4 **)(DAT_004136a4 + (uint)DAT_00413b94 * 4) = puVar3;
                    lstrcpyA(*(LPSTR *)(DAT_004136a4 + (uint)DAT_00413b94 * 4),local_9bd + 1);
                    pCVar12 = FUN_0040be4c(acStackY_9c5 + 1,0x7c);
                    if (pCVar12 != (LPCSTR)0x0) {
                      DAT_0041372c = 1;
                    }
                    goto LAB_0040418a;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Uninstall_MIF__004122d8,
                                       (void *)0xf);
                  if (iVar4 == 0) {
                    pCVar21 = local_9b6 + 1;
                    pHVar9 = (HKEY)&DAT_004137e0;
                    goto LAB_00405ab3;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Manufacturer__004122c8,
                                       (void *)0xe);
                  if (iVar4 == 0) {
                    pCVar21 = local_9b6;
                    pHVar9 = (HKEY)&DAT_00413860;
                    goto LAB_00405ab3;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Product__004122bc,(void *)0x9);
                  if (iVar4 == 0) {
                    pCVar21 = local_9bd + 2;
                    pHVar9 = (HKEY)&DAT_004138e0;
                    goto LAB_00405ab3;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Version_Number__004122a8,
                                       (void *)0x10);
                  if (iVar4 == 0) {
                    pCVar21 = local_9b6 + 2;
                    pHVar9 = (HKEY)&DAT_00413960;
                    goto LAB_00405ab3;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Serial_Number__00412298,
                                       (void *)0xf);
                  if (iVar4 == 0) {
                    pCVar21 = local_9b6 + 1;
                    pHVar9 = (HKEY)&DAT_004139e0;
                    goto LAB_00405ab3;
                  }
                  iVar4 = __strcmpi(acStackY_9c5 + 1,s_User_Rights__Admin_00412284);
                  if (iVar4 == 0) {
                    if (((HKEY)hKey == (HKEY)0x0) && (DAT_004136b0 == 1)) {
                      hKey = (char *)0x1;
                      hSCObject = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,0xe0000000);
                      if (hSCObject == (SC_HANDLE)0x0) {
                        FUN_0040ab9d(DAT_00413a90,0x19,local_1ddc,0x100);
                        uStackY_34 = 0x4069c9;
                        FUN_0040ab9d(DAT_00413a90,0x43,local_1edc,0x100);
                        if (DAT_00413694 != (HWND)0x0) {
                          DestroyWindow(DAT_00413694);
                        }
                        MessageBoxA(DAT_00413698,local_1edc,local_1ddc,0);
                        _lclose(hFile);
                        return 1;
                      }
                      CloseServiceHandle(hSCObject);
                    }
                    goto LAB_0040418a;
                  }
                  iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Per_User_ID__00412274,
                                       (void *)0xd);
                  if (iVar4 != 0) {
                    iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_Delete_in_use_files__004121f8,
                                         (void *)0x15);
                    if (iVar4 == 0) {
                      iVar4 = FUN_0040f730(local_9af,&DAT_004121f4,(void *)0x2);
                      if (iVar4 == 0) {
                        DAT_00413798 = 1;
                      }
                      else {
                        iVar4 = FUN_0040f730(local_9af,&DAT_004121f0,(void *)0x2);
                        if (iVar4 == 0) {
                          DAT_00413798 = 0;
                        }
                      }
                    }
                    goto LAB_0040418a;
                  }
                  DAT_00413784 = (LPSTR)FUN_0040b671(0x100);
                  lstrcpyA(DAT_00413784,&local_9b7);
                  if (DAT_004136ec == 0) goto LAB_0040418a;
                  hKey = (char *)0x405b6d;
                  LVar14 = RegOpenKeyExA((HKEY)0x80000001,
                                         s_Software_Microsoft_Windows_Curre_00412230,0,0x13,
                                         (PHKEY)&stack0xffffffe8);
                  if (LVar14 != 0) goto LAB_00405c08;
                  hKey = acStackY_bc5 + 1;
                  pHVar9 = (HKEY)hKey;
                  LVar14 = RegQueryValueExA((HKEY)hKey,s_Start_Menu_00412224,(LPDWORD)0x0,&local_3c,
                                            (LPBYTE)hKey,(LPDWORD)&stack0xffffffec);
                  if ((LVar14 != 0) || (acStackY_bc5[1] == 0)) goto LAB_00405bff;
                  lstrcpyA(local_dc8,acStackY_bc5 + 1);
                  pHVar9 = (HKEY)0x405bc0;
                  iVar4 = lstrlenA(local_dc8);
                  pcVar15 = local_dc8 + iVar4;
                  if (pcVar15 <= local_dc8) goto LAB_00405bfb;
                  goto LAB_00405bd1;
                }
                lstrcpyA((LPSTR)local_10c8,(LPCSTR)((int)&local_9bb.unused + 3));
                FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                hKey = s_RegDB_Root__00412438;
                iVar5 = 0;
                iVar4 = FUN_0040f730((byte *)(acStackY_9c5 + 1),s_RegDB_Root__00412438,(void *)0xc);
                if (iVar4 == 0) {
                  iVar5 = FUN_0040c37e(this_03,(byte *)((int)&local_9bb.unused + 3));
                  hKey = (char *)0x405819;
                  FUN_00406b07(acStackY_9c5 + 1,0x800,hFile,0);
                }
                iVar4 = 0;
                if (0 < DAT_00413b04) {
                  do {
                    iVar13 = lstrcmpiA((LPCSTR)local_10c8,*(LPCSTR *)(DAT_004137c0 + iVar4 * 4));
                    if ((iVar13 == 0) &&
                       (iVar5 == *(int *)(*(int *)(DAT_004137c0 + iVar4 * 4) + 0x100))) break;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < DAT_00413b04);
                  if (iVar4 < DAT_00413b04) {
                    *(ushort *)(*(int *)(DAT_004137c0 + iVar4 * 4) + 0x108) = DAT_00413b94;
                    goto LAB_004041a3;
                  }
                }
                puVar3 = FUN_0040b671(0x10c);
                *(undefined4 **)(DAT_004137c0 + DAT_00413b04 * 4) = puVar3;
                *(undefined4 *)(*(int *)(DAT_004137c0 + DAT_00413b04 * 4) + 0x104) = 0;
                *(int *)(*(int *)(DAT_004137c0 + DAT_00413b04 * 4) + 0x100) = iVar5;
                *(ushort *)(*(int *)(DAT_004137c0 + DAT_00413b04 * 4) + 0x108) = DAT_00413b94;
                lstrcpyA(*(LPSTR *)(DAT_004137c0 + DAT_00413b04 * 4),(LPCSTR)local_10c8);
                DAT_00413b04 = DAT_00413b04 + 1;
                goto LAB_004041a3;
              }
              lstrcatA(acStackY_9c5 + 1,&DAT_004120e0);
              lstrcpyA(acStackY_bc5 + 1,local_9bd + 3);
              FUN_0040a794((uint *)(acStackY_bc5 + 1),0);
              pvVar6 = (void *)lstrlenA(acStackY_bc5 + 1);
              iVar4 = FUN_0040f730((byte *)(acStackY_bc5 + 1),(char *)param_2,pvVar6);
              if (iVar4 == 0) {
                iVar4 = lstrlenA(acStackY_bc5 + 1);
                *(undefined1 *)(iVar4 + (int)param_2) = 0;
              }
              pvVar6 = (void *)lstrlenA(local_9bd + 3);
              if ((int)pvVar6 < 4) goto LAB_0040418a;
              if ((local_9bb.unused._1_1_ != '\\') || (local_9bb.unused._2_1_ != '\\')) {
                if (DAT_0041311c < 2) {
                  uVar10 = *(ushort *)(PTR_DAT_00412f10 + local_9bb.unused._1_1_ * 2) & 0x103;
                }
                else {
                  uVar10 = FUN_0040c27e(this_01,(int)local_9bb.unused._1_1_,0x103);
                }
                if (((uVar10 == 0) || (local_9bb.unused._2_1_ != ':')) ||
                   (local_9bb.unused._3_1_ != '\\')) goto LAB_0040418a;
              }
              iVar4 = 0;
              if (DAT_00413b88 < 1) goto LAB_004054cc;
              do {
                iVar5 = lstrlenA(*(LPCSTR *)(DAT_004136fc + iVar4 * 4));
                pvVar11 = pvVar6;
                if (iVar5 <= (int)pvVar6) {
                  pvVar11 = (void *)lstrlenA(*(LPCSTR *)(DAT_004136fc + iVar4 * 4));
                }
                iVar5 = FUN_0040f730((byte *)(local_9bd + 3),*(char **)(DAT_004136fc + iVar4 * 4),
                                     pvVar11);
              } while ((iVar5 != 0) && (iVar4 = iVar4 + 1, iVar4 < DAT_00413b88));
              if (iVar4 < DAT_00413b88) {
                iVar4 = iVar4 * 4;
                iVar5 = lstrlenA(*(LPCSTR *)(iVar4 + DAT_004136fc));
                if (iVar5 <= (int)pvVar6) {
                  pvVar6 = (void *)lstrlenA(*(LPCSTR *)(iVar4 + DAT_004136fc));
                }
                *(undefined1 *)(*(int *)(iVar4 + DAT_004136fc) + (int)pvVar6) = 0;
                iVar4 = *(int *)(iVar4 + DAT_004136fc);
                goto LAB_0040578a;
              }
LAB_004054cc:
              puVar3 = FUN_0040b671(0x10c);
              *(undefined4 **)(DAT_004136fc + DAT_00413b88 * 4) = puVar3;
              *(undefined4 *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x104) = 0;
              *(undefined2 *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x108) = 0;
              *(ushort *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x10a) = DAT_00413b94;
              if (DAT_00413710 != 0) {
                pCVar21 = local_9bd + 3;
                pHVar9 = *(HKEY *)(DAT_004136fc + DAT_00413b88 * 4);
                goto LAB_00405758;
              }
              OemToCharA(local_9bd + 3,*(LPSTR *)(DAT_004136fc + DAT_00413b88 * 4));
              goto LAB_0040575a;
            }
            lstrcpyA(acStackY_bc5 + 1,local_9b6 + 1);
            FUN_0040a794((uint *)(acStackY_bc5 + 1),1);
            iVar4 = 0;
            if (0 < DAT_00413ab4) {
              do {
                lstrcpyA((LPSTR)local_10c8,(LPCSTR)(DAT_004136e8[iVar4] + 8));
                FUN_0040a794(local_10c8,1);
                iVar5 = lstrcmpiA((LPCSTR)local_10c8,acStackY_bc5 + 1);
                if (iVar5 == 0) {
                  *(ushort *)(DAT_004136e8[iVar4] + 0x26c) = DAT_00413b94;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < DAT_00413ab4);
            }
            iVar4 = 0;
            if (0 < DAT_00413768) {
              do {
                lstrcpyA((LPSTR)local_10c8,*(LPCSTR *)(DAT_00413b0c + iVar4 * 4));
                FUN_0040a794(local_10c8,1);
                iVar5 = lstrcmpiA((LPCSTR)local_10c8,acStackY_bc5 + 1);
                if (iVar5 == 0) {
                  *(ushort *)(*(int *)(DAT_00413b0c + iVar4 * 4) + 0x264) = DAT_00413b94;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < DAT_00413768);
            }
            goto LAB_0040418a;
          }
          iVar4 = 0;
          if (0 < DAT_00413ab4) {
            do {
              iVar5 = lstrcmpiA((LPCSTR)(DAT_004136e8[iVar4] + 8),
                                (LPCSTR)((int)&local_9bb.unused + 3));
              if (iVar5 == 0) {
                *(ushort *)(DAT_004136e8[iVar4] + 0x26e) = DAT_00413b94;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < DAT_00413ab4);
          }
          iVar4 = 0;
          if (0 < DAT_00413768) {
            do {
              iVar5 = lstrcmpiA(*(LPCSTR *)(DAT_00413b0c + iVar4 * 4),
                                (LPCSTR)((int)&local_9bb.unused + 3));
              if (iVar5 == 0) {
                *(ushort *)(*(int *)(DAT_00413b0c + iVar4 * 4) + 0x266) = DAT_00413b94;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < DAT_00413768);
          }
        } while( true );
      }
    }
    FUN_0040ab9d(DAT_00413a90,4,acStackY_9c5 + 1,0x100);
    uStackY_34 = 0x404225;
    FUN_0040ab9d(DAT_00413a90,2,acStackY_bc5 + 1,0x100);
    if (DAT_00413694 != (HWND)0x0) {
      DestroyWindow(DAT_00413694);
    }
    MessageBoxA(DAT_00413698,acStackY_9c5 + 1,acStackY_bc5 + 1,0);
    uVar23 = 1;
LAB_00406a06:
    _lclose(hFile);
  }
  return uVar23;
  while (iVar4 = iVar4 + 1, iVar4 < DAT_00413a80) {
LAB_00404a49:
    iVar5 = lstrcmpiA(local_9b6 + 2,*(LPCSTR *)(DAT_00413b98 + iVar4 * 4));
    if (iVar5 == 0) break;
  }
  if (iVar4 < DAT_00413a80) {
    *(ushort *)(*(int *)(DAT_00413b98 + iVar4 * 4) + 0x108) = DAT_00413b94;
  }
  else {
LAB_00404a70:
    puVar3 = FUN_0040b671(0x10c);
    *(undefined4 **)(DAT_00413b98 + DAT_00413a80 * 4) = puVar3;
    *(undefined4 *)(*(int *)(DAT_00413b98 + DAT_00413a80 * 4) + 0x104) = 0;
    *(ushort *)(*(int *)(DAT_00413b98 + DAT_00413a80 * 4) + 0x108) = DAT_00413b94;
    lstrcpyA(*(LPSTR *)(DAT_00413b98 + DAT_00413a80 * 4),local_9b6 + 2);
    DAT_00413a80 = DAT_00413a80 + 1;
  }
  goto LAB_0040418a;
  while (iVar4 = iVar4 + 1, iVar4 < DAT_00413b88) {
LAB_004056b1:
    iVar5 = lstrcmpiA((LPCSTR)((int)&local_9bb.unused + 2),*(LPCSTR *)(DAT_004136fc + iVar4 * 4));
    if (iVar5 == 0) break;
  }
  if (iVar4 < DAT_00413b88) {
    *(ushort *)(*(int *)(iVar4 * 4 + DAT_004136fc) + 0x108) = DAT_00413b94;
    iVar4 = *(int *)(iVar4 * 4 + DAT_004136fc);
LAB_0040578a:
    *(ushort *)(iVar4 + 0x10a) = DAT_00413b94;
  }
  else {
LAB_004056dc:
    puVar3 = FUN_0040b671(0x10c);
    *(undefined4 **)(DAT_004136fc + DAT_00413b88 * 4) = puVar3;
    *(undefined4 *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x104) = 0;
    *(ushort *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x108) = DAT_00413b94;
    *(ushort *)(*(int *)(DAT_004136fc + DAT_00413b88 * 4) + 0x10a) = DAT_00413b94;
    pCVar21 = (CHAR *)((int)&local_9bb.unused + 2);
    pHVar9 = *(HKEY *)(DAT_004136fc + DAT_00413b88 * 4);
LAB_00405758:
    lstrcpyA((LPSTR)pHVar9,pCVar21);
LAB_0040575a:
    DAT_00413b88 = DAT_00413b88 + 1;
  }
  goto LAB_0040418a;
  while (pcVar15 = pcVar15 + -1, local_dc8 < pcVar15) {
LAB_00405bd1:
    if (*pcVar15 == '\\') break;
  }
  if (local_dc8 < pcVar15) {
    do {
      pcVar15 = pcVar15 + -1;
      if (pcVar15 <= local_dc8) break;
    } while (*pcVar15 != '\\');
  }
LAB_00405bfb:
  pcVar15[1] = '\0';
LAB_00405bff:
  RegCloseKey(pHVar9);
LAB_00405c08:
  if (DAT_004136b0 == 1) {
    hKey = (char *)0x405c2d;
    LVar14 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Microsoft_Windows_Curre_00412230,0,0x13,
                           (PHKEY)&stack0xffffffe8);
    if (LVar14 == 0) {
      hKey = acStackY_bc5 + 1;
      pHVar9 = (HKEY)hKey;
      LVar14 = RegQueryValueExA((HKEY)hKey,s_Common_Start_Menu_00412210,(LPDWORD)0x0,&local_40,
                                (LPBYTE)hKey,(LPDWORD)&stack0xffffffec);
      if ((LVar14 == 0) && (acStackY_bc5[1] != 0)) {
        lstrcpyA(local_12cc,acStackY_bc5 + 1);
        pHVar9 = (HKEY)0x405c80;
        iVar4 = lstrlenA(local_12cc);
        for (pcVar15 = local_12cc + iVar4; (local_12cc < pcVar15 && (*pcVar15 != '\\'));
            pcVar15 = pcVar15 + -1) {
        }
        pcVar15[1] = '\0';
      }
      RegCloseKey(pHVar9);
    }
  }
  goto LAB_0040418a;
code_r0x00405215:
  iVar4 = 0;
  if (0 < DAT_004136c8) {
    do {
      iVar5 = lstrcmpiA(*(LPCSTR *)(DAT_00413734 + iVar4 * 4),acStackY_bc5 + 1);
      if ((iVar5 == 0) &&
         (iVar5 = lstrcmpiA((LPCSTR)(*(int *)(DAT_00413734 + iVar4 * 4) + 0x100),(LPCSTR)local_10c8)
         , iVar5 == 0)) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_004136c8);
    if (iVar4 < DAT_004136c8) {
      pCVar21 = local_9bd + 3;
      pHVar9 = (HKEY)(*(int *)(DAT_00413734 + iVar4 * 4) + 0x200);
LAB_00405ab3:
      lstrcpyA((LPSTR)pHVar9,pCVar21);
      goto LAB_0040418a;
    }
  }
  puVar3 = FUN_0040b671(0x308);
  *(undefined4 **)(DAT_00413734 + DAT_004136c8 * 4) = puVar3;
  *(undefined4 *)(*(int *)(DAT_00413734 + DAT_004136c8 * 4) + 0x300) = 0;
  *(ushort *)(*(int *)(DAT_00413734 + DAT_004136c8 * 4) + 0x304) = DAT_00413b94;
  lstrcpyA((LPSTR)(*(int *)(DAT_00413734 + DAT_004136c8 * 4) + 0x100),(LPCSTR)local_10c8);
  lstrcpyA(*(LPSTR *)(DAT_00413734 + DAT_004136c8 * 4),acStackY_bc5 + 1);
  lstrcpyA((LPSTR)(*(int *)(DAT_00413734 + DAT_004136c8 * 4) + 0x200),local_9bd + 3);
  DAT_004136c8 = DAT_004136c8 + 1;
  goto LAB_0040418a;
}

