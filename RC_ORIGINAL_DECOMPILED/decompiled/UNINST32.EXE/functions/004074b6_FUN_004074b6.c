/*
 * FUN_004074b6 at 004074b6
 * undefined4 __cdecl FUN_004074b6(LPCSTR param_1, byte * param_2, ushort param_3)
 * Address ranges: 004074b6-00407a96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_004074b6(LPCSTR param_1,byte *param_2,ushort param_3)

{
  byte bVar1;
  LPCSTR lpString1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  HANDLE hFile;
  UINT UVar6;
  undefined4 *puVar7;
  HFILE HVar8;
  undefined *extraout_ECX;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  undefined *extraout_ECX_00;
  byte *pbVar9;
  byte *pbVar10;
  ushort uVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined *puVar14;
  CHAR local_5b0 [1024];
  CHAR local_1b0 [256];
  CHAR local_b0 [64];
  byte local_70 [64];
  _FILETIME local_30;
  _FILETIME local_28;
  byte *local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  int local_10;
  ushort local_c;
  ushort local_a;
  int local_8;
  
  iVar2 = lstrlenA((LPCSTR)param_2);
  if (iVar2 < 0x15) {
    return 0;
  }
  local_10 = 0;
  local_8 = 0;
  puVar13 = extraout_ECX;
  pbVar10 = param_2;
  while( true ) {
    if (DAT_0041311c < 2) {
      uVar3 = (byte)PTR_DAT_00412f10[(char)*pbVar10 * 2] & 8;
      puVar13 = PTR_DAT_00412f10;
    }
    else {
      puVar14 = (undefined *)0x8;
      uVar3 = FUN_0040c27e(puVar13,(int)(char)*pbVar10,8);
      puVar13 = puVar14;
    }
    if (uVar3 == 0) break;
    pbVar10 = pbVar10 + 1;
  }
  iVar2 = FUN_0040c37e(puVar13,pbVar10 + 6);
  uVar3 = FUN_0040c37e(this,pbVar10 + 3);
  uVar4 = FUN_0040c37e(this_00,pbVar10);
  local_14 = uVar3 & 0x1f | (uVar4 & 0xf | (iVar2 + -0x7bc) * 0x10) << 5;
  uVar3 = FUN_0040c37e(this_01,pbVar10 + 0x10);
  iVar2 = FUN_0040c37e(this_02,pbVar10 + 0xd);
  iVar5 = FUN_0040c37e(this_03,pbVar10 + 0x13);
  local_1c = (uVar3 & 0x3f | iVar2 << 6) << 5 | iVar5 / 2 & 0x1fU;
  for (; (*pbVar10 != 0 && (*pbVar10 != 0x7c)); pbVar10 = pbVar10 + 1) {
  }
  if (*pbVar10 == 0) goto LAB_0040758e;
  do {
    pbVar10 = pbVar10 + 1;
LAB_0040758e:
  } while ((*pbVar10 != 0) && (*pbVar10 != 0x7c));
  puVar13 = extraout_ECX_00;
  if (*pbVar10 != 0) {
    pbVar10 = pbVar10 + 1;
  }
  while( true ) {
    if (DAT_0041311c < 2) {
      uVar3 = (byte)PTR_DAT_00412f10[(char)*pbVar10 * 2] & 8;
      puVar13 = PTR_DAT_00412f10;
    }
    else {
      puVar14 = (undefined *)0x8;
      uVar3 = FUN_0040c27e(puVar13,(int)(char)*pbVar10,8);
      puVar13 = puVar14;
    }
    if (uVar3 == 0) break;
    pbVar10 = pbVar10 + 1;
  }
  for (; (*pbVar10 != 0 && (*pbVar10 != 0x7c)); pbVar10 = pbVar10 + 1) {
  }
  if (*pbVar10 != 0) {
    pbVar10 = pbVar10 + 1;
  }
  pbVar9 = pbVar10;
  local_20 = (byte *)FUN_0040c2f3(puVar13,pbVar10);
  for (; (*pbVar10 != 0 && (*pbVar10 != 0x7c)); pbVar10 = pbVar10 + 1) {
  }
  if (*pbVar10 == 0) goto LAB_004075ff;
  do {
    pbVar10 = pbVar10 + 1;
LAB_004075ff:
    if (DAT_0041311c < 2) {
      uVar3 = (byte)PTR_DAT_00412f10[(char)*pbVar10 * 2] & 8;
      pbVar9 = PTR_DAT_00412f10;
    }
    else {
      pbVar12 = (byte *)0x8;
      uVar3 = FUN_0040c27e(pbVar9,(int)(char)*pbVar10,8);
      pbVar9 = pbVar12;
    }
  } while (uVar3 != 0);
  local_18 = (byte *)0x0;
  while( true ) {
    if (DAT_0041311c < 2) {
      uVar3 = *(ushort *)(PTR_DAT_00412f10 + (char)*pbVar10 * 2) & 0x107;
      puVar13 = PTR_DAT_00412f10;
    }
    else {
      puVar13 = (undefined *)0x107;
      uVar3 = FUN_0040c27e(pbVar9,(int)(char)*pbVar10,0x107);
    }
    if (uVar3 == 0) break;
    if (DAT_0041311c < 2) {
      uVar3 = (byte)PTR_DAT_00412f10[(char)*pbVar10 * 2] & 4;
    }
    else {
      uVar3 = FUN_0040c27e(puVar13,(int)(char)*pbVar10,4);
    }
    if (uVar3 == 0) {
      iVar2 = -0x57;
    }
    else {
      iVar2 = -0x30;
    }
    pbVar9 = (byte *)((int)local_18 << 4 | (char)*pbVar10 + iVar2);
    pbVar10 = pbVar10 + 1;
    local_18 = pbVar9;
  }
  iVar2 = FUN_0040a933(param_1);
  if (iVar2 != 0) goto LAB_00407922;
  hFile = (HANDLE)_lopen(param_1,0);
  if (hFile == (HANDLE)0xffffffff) {
    local_8 = 1;
  }
  else {
    GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_30);
    FileTimeToLocalFileTime(&local_30,&local_28);
    FileTimeToDosDateTime(&local_28,&local_c,&local_a);
    if ((ushort)local_14 < local_c) {
LAB_004076fd:
      local_10 = 1;
    }
    else if (local_c < (ushort)local_14) {
LAB_00407714:
      local_8 = 1;
    }
    else {
      if ((ushort)local_1c < local_a) goto LAB_004076fd;
      if (local_a < (ushort)local_1c) goto LAB_00407714;
    }
    pbVar10 = (byte *)_llseek((HFILE)hFile,0,2);
    if (local_10 == 0) {
      if (local_20 != pbVar10) {
        local_8 = 1;
      }
      if (local_8 == 0) {
        FUN_0040bd4d((byte *)0x0,0);
        _llseek((HFILE)hFile,0,0);
        while (UVar6 = _lread((HFILE)hFile,DAT_00413b10,0x4000), 0 < (int)UVar6) {
          local_20 = (byte *)FUN_0040bd4d(DAT_00413b10,UVar6);
        }
        if (local_20 != local_18) {
          local_8 = 1;
        }
      }
    }
    _lclose((HFILE)hFile);
  }
  if (local_10 != 0) {
    pbVar10 = local_70;
    for (pbVar9 = param_2; (bVar1 = *pbVar9, bVar1 != 0 && (bVar1 != 0x7c)); pbVar9 = pbVar9 + 1) {
      *pbVar10 = bVar1;
      pbVar10 = pbVar10 + 1;
    }
    while( true ) {
      pbVar9 = pbVar9 + 1;
      bVar1 = *pbVar9;
      if ((bVar1 == 0) || (bVar1 == 0x7c)) break;
      *pbVar10 = bVar1;
      pbVar10 = pbVar10 + 1;
    }
    *pbVar10 = 0;
    uVar3 = ((local_c >> 9) + 0x50) % 100;
    if ((ushort)uVar3 < 0x3c) {
      iVar2 = uVar3 + 2000;
    }
    else {
      iVar2 = uVar3 + 0x76c;
    }
    wsprintfA(local_b0,s__02d__02d__04d__02d__02d__02d_00412574,local_c >> 5 & 0xf,local_c & 0x1f,
              iVar2,(uint)(local_a >> 0xb),local_a >> 5 & 0x3f,(local_a & 0x1f) << 1);
    FUN_0040ab9d(DAT_00413a90,0x4d,local_5b0,0x400);
    wsprintfA(DAT_00413754,local_5b0,param_1,local_70,local_b0);
    if (DAT_0041370c == 0) {
      if (DAT_00413b90 == 0) {
        if (DAT_00413730 != 0) goto LAB_00407922;
        if (DAT_00413a8c != 0) {
          KillTimer(DAT_00413690,0x19);
        }
        iVar2 = DialogBoxParamA(DAT_00413a90,(LPCSTR)0x68,DAT_00413690,_SharedDlg_16,0);
        if (DAT_00413a8c != 0) {
          SetTimer(DAT_00413690,0x19,0x96,(TIMERPROC)0x0);
        }
        if (iVar2 == 1) {
          DAT_00413b90 = 1;
        }
        if (iVar2 == 0x3ef) {
          iVar2 = 0x3ed;
          DAT_00413730 = 1;
        }
        goto LAB_00407910;
      }
    }
    else {
      iVar2 = 7;
LAB_00407910:
      if (iVar2 == 0x3ed) goto LAB_00407922;
    }
    local_8 = 0;
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_00407922:
  iVar2 = (uint)param_3 * 4;
  if (*(int *)(iVar2 + DAT_004137ac) == 0) {
    uVar11 = 0;
    do {
      lpString1 = *(LPCSTR *)((uint)uVar11 * 4 + DAT_004136a4);
      if (((lpString1 != (LPCSTR)0x0) && (*(int *)((uint)uVar11 * 4 + DAT_004137ac) != 0)) &&
         (iVar5 = lstrcmpiA(lpString1,*(LPCSTR *)(iVar2 + DAT_004136a4)), iVar5 == 0)) {
        *(undefined4 *)(iVar2 + DAT_004137ac) = *(undefined4 *)(DAT_004137ac + (uint)uVar11 * 4);
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 <= DAT_00413b94);
    if (DAT_00413b94 < uVar11) {
      puVar7 = FUN_0040b671(0x100);
      *(undefined4 **)(iVar2 + DAT_004137ac) = puVar7;
      GetTempPathA(0x100,local_1b0);
      GetTempFileNameA(local_1b0,&DAT_00412570,0,*(LPSTR *)(iVar2 + DAT_004137ac));
      HVar8 = _lcreat(*(LPCSTR *)(iVar2 + DAT_004137ac),0);
      if (HVar8 != -1) {
        _lclose(HVar8);
      }
    }
  }
  if ((*(LPCSTR *)(iVar2 + DAT_004137ac) != (LPCSTR)0x0) &&
     (HVar8 = _lopen(*(LPCSTR *)(iVar2 + DAT_004137ac),1), HVar8 != -1)) {
    _llseek(HVar8,0,2);
    UVar6 = lstrlenA(param_1);
    _lwrite(HVar8,param_1,UVar6);
    iVar2 = 3;
    do {
      for (; (*param_2 != 0 && (*param_2 != 0x7c)); param_2 = param_2 + 1) {
      }
      if (*param_2 != 0) {
        param_2 = param_2 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    wsprintfA(local_1b0,s___u__u__s_00412564,local_14 & 0xffff,local_1c & 0xffff,param_2);
    UVar6 = lstrlenA(local_1b0);
    _lwrite(HVar8,local_1b0,UVar6);
    _lclose(HVar8);
    DAT_00413a94 = 1;
  }
  return 0;
}

