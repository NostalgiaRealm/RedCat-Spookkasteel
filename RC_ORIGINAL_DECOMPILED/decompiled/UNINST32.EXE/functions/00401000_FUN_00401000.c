/*
 * FUN_00401000 at 00401000
 * undefined4 __stdcall FUN_00401000(HINSTANCE param_1, HGLOBAL param_2, HRSRC param_3, DWORD param_4)
 * Address ranges: 00401000-00401f6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401000(HINSTANCE param_1,HGLOBAL param_2,HRSRC param_3,DWORD param_4)

{
  LPSTR lpString1;
  char cVar1;
  ATOM AVar2;
  int iVar3;
  char *pcVar4;
  BOOL BVar5;
  HRSRC pHVar6;
  void *this;
  uint uVar7;
  void *pvVar8;
  UINT UVar9;
  undefined2 extraout_var;
  CHAR *pCVar10;
  HCURSOR hCursor;
  void *extraout_ECX;
  uint uVar11;
  HRSRC__ *pHVar12;
  LPCSTR pCVar13;
  code *lpDialogFunc;
  LPARAM dwInitParam;
  CHAR local_980 [512];
  uint local_780 [63];
  CHAR aCStack_683 [259];
  HRSRC__ local_580 [64];
  undefined4 local_480;
  char acStack_381 [256];
  char acStack_281 [121];
  _OFSTRUCT local_208;
  HRSRC__ local_180 [64];
  undefined1 local_80 [92];
  undefined4 local_24;
  int local_10;
  LPCCH local_c;
  HRSRC__ *local_8;
  
  local_780[0]._0_1_ = 0;
  FUN_0040a393();
  DAT_0041375c = FUN_0040b671(0x100);
  GetModuleFileNameA(param_1,(LPSTR)DAT_0041375c,0x100);
  FUN_0040a794(DAT_0041375c,1);
  DAT_00413abc = (LPCSTR)FUN_0040b671(0x100);
  GetModuleFileNameA(param_1,DAT_00413abc,0x100);
  pCVar13 = &DAT_00412168;
  iVar3 = lstrlenA(DAT_00413abc);
  lstrcpyA(DAT_00413abc + iVar3 + -3,pCVar13);
  DAT_00413b10 = FUN_0040b671(0x4000);
  local_10 = 1;
  lstrcpyA((LPSTR)local_580,(LPCSTR)param_3);
  if ((char)local_580[0].unused == '\0') {
    lstrcpyA(acStack_281 + 1,DAT_00413abc);
    FUN_0040a794((uint *)(acStack_281 + 1),0);
    iVar3 = lstrlenA(acStack_281 + 1);
    for (pcVar4 = acStack_281 + iVar3; acStack_281 + 1 < pcVar4; pcVar4 = pcVar4 + -1) {
      if (*pcVar4 == '\\') goto LAB_004010f1;
    }
    if (*pcVar4 == '\\') {
LAB_004010f1:
      pcVar4 = pcVar4 + 1;
    }
    lstrcpyA(pcVar4,s_INSTALL_LOG_0041215c);
    iVar3 = FUN_0040a933(acStack_281 + 1);
    if (iVar3 == 0) {
      lstrcpyA((LPSTR)local_580,acStack_281 + 1);
    }
  }
  iVar3 = FUN_0040f730((byte *)local_580,&DAT_00412158,(void *)0x2);
  if (iVar3 != 0) {
    GetTempPathA(0x100,acStack_281 + 1);
    GetTempFileNameA(acStack_281 + 1,&DAT_00412154,0x1a2b,aCStack_683 + 3);
    pCVar13 = &DAT_00412150;
    iVar3 = lstrlenA(aCStack_683 + 3);
    lstrcpyA(aCStack_683 + iVar3,pCVar13);
    GetModuleFileNameA(param_1,(LPSTR)local_180,0x100);
    BVar5 = CopyFileA((LPCSTR)local_180,aCStack_683 + 3,0);
    if (BVar5 != 0) {
      FUN_0040b561(aCStack_683 + 3);
    }
    local_10 = 0;
  }
  pHVar6 = FindResourceA(param_1,(LPCSTR)0x6a,(LPCSTR)0x5);
  local_c = LoadResource(param_1,pHVar6);
  LockResource(local_c);
  pHVar6 = FindResourceA(param_1,(LPCSTR)0x68,(LPCSTR)0x5);
  local_80._80_4_ = LoadResource(param_1,pHVar6);
  LockResource((HGLOBAL)local_80._80_4_);
  pHVar6 = FindResourceA(param_1,(LPCSTR)0x6a,(LPCSTR)0x2);
  local_80._76_4_ = LoadResource(param_1,pHVar6);
  LockResource((HGLOBAL)local_80._76_4_);
  DAT_00413ac0 = LoadBitmapA(param_1,(LPCSTR)0x6a);
  DAT_00413b00 = 0;
  pHVar12 = local_580;
  pvVar8 = extraout_ECX;
  while (param_3 = pHVar12, (char)local_580[0].unused == '/') {
    local_8 = (HRSRC__ *)((int)&pHVar12->unused + 1);
    this = (void *)(int)(char)local_8->unused;
    uVar7 = FUN_0040c0a8(pvVar8,(uint)this);
    if (uVar7 == 0x5a) {
      if ((char)local_8->unused == 'z') {
        if (*(char *)((int)&pHVar12->unused + 2) == '1') {
          DAT_004136f4 = 1;
          pHVar12 = local_8;
        }
        DAT_0041374c = 1;
      }
      param_3 = (HRSRC)((int)&pHVar12->unused + 2);
      if ((char)param_3->unused == ' ') {
        do {
          param_3 = (HRSRC)((int)&param_3->unused + 1);
        } while ((char)param_3->unused == ' ');
        goto LAB_00401317;
      }
    }
    else {
      pvVar8 = (void *)(int)(char)local_8->unused;
      uVar7 = FUN_0040c0a8(this,(uint)pvVar8);
      this = pvVar8;
      if (uVar7 == 0x41) {
        DAT_00413b00 = 1;
        param_3 = pHVar12;
      }
      else {
        pvVar8 = (void *)(int)(char)local_8->unused;
        uVar7 = FUN_0040c0a8(this,(uint)pvVar8);
        this = pvVar8;
        if (uVar7 == 0x53) {
          DAT_0041370c = 1;
          DAT_00413b00 = 1;
          param_3 = pHVar12;
        }
        else {
          pvVar8 = (void *)(int)(char)local_8->unused;
          uVar7 = FUN_0040c0a8(this,(uint)pvVar8);
          this = pvVar8;
          if (uVar7 == 0x52) {
            DAT_00413770 = 1;
            param_3 = pHVar12;
          }
          else {
            pvVar8 = (void *)(int)(char)local_8->unused;
            uVar7 = FUN_0040c0a8(this,(uint)pvVar8);
            this = pvVar8;
            if (uVar7 != 0x55) break;
            DAT_00413a64 = 1;
          }
        }
      }
      param_3 = (HRSRC)((int)&param_3->unused + 2);
LAB_00401317:
      cVar1 = (char)param_3->unused;
      while (cVar1 == ' ') {
        param_3 = (HRSRC)((int)&param_3->unused + 1);
        cVar1 = (char)param_3->unused;
      }
    }
    pHVar12 = param_3;
    pvVar8 = this;
    local_580[0].unused._0_1_ = (char)param_3->unused;
  }
  cVar1 = (char)param_3->unused;
  while (cVar1 == ' ') {
    param_3 = (HRSRC)((int)&param_3->unused + 1);
    cVar1 = (char)param_3->unused;
  }
  pCVar13 = FUN_0040be4c((LPCSTR)param_3,0x20);
  if ((pCVar13 != (LPCSTR)0x0) && (DAT_0041374c == 0)) {
    *pCVar13 = '\0';
    DAT_00413ac4 = pCVar13 + 1;
    if (*DAT_00413ac4 == '\"') {
      DAT_00413ac4 = pCVar13 + 2;
    }
    iVar3 = lstrlenA(DAT_00413ac4);
    if ((-1 < iVar3 + -1) && (DAT_00413ac4[iVar3 + -1] == '\"')) {
      DAT_00413ac4[iVar3 + -1] = '\0';
    }
  }
  _DAT_00413ae0 = GetPrivateProfileIntA(s_Settings_00412138,s_Start_Red_00412144,0,DAT_00413abc);
  _DAT_00413ae4 = GetPrivateProfileIntA(s_Settings_00412138,s_Start_Green_0041212c,0,DAT_00413abc);
  _DAT_00413ae8 = GetPrivateProfileIntA(s_Settings_00412138,s_Start_Blue_00412120,0xff,DAT_00413abc)
  ;
  UVar9 = GetPrivateProfileIntA(s_Settings_00412138,s_End_Red_00412118,0,DAT_00413abc);
  _DAT_00413aec = UVar9 - _DAT_00413ae0;
  UVar9 = GetPrivateProfileIntA(s_Settings_00412138,s_End_Green_0041210c,0,DAT_00413abc);
  _DAT_00413af0 = UVar9 - _DAT_00413ae4;
  UVar9 = GetPrivateProfileIntA(s_Settings_00412138,s_End_Blue_00412100,0,DAT_00413abc);
  _DAT_00413af4 = UVar9 - _DAT_00413ae8;
  DAT_004136b4 = GetPrivateProfileIntA(s_Settings_00412138,s_No_Background_004120f0,1,DAT_00413abc);
  FUN_0040af6d();
  if (((param_2 == (HGLOBAL)0x0) &&
      (AVar2 = FUN_00401f70(param_1), CONCAT22(extraout_var,AVar2) == 0)) ||
     (iVar3 = FUN_00401fcf(param_1), iVar3 == 0)) {
    return 0;
  }
  DAT_0041371c = GlobalAlloc(2,0x400);
  DAT_004136e0 = GlobalLock(DAT_0041371c);
  *DAT_004136e0 = 0;
  uVar7 = 1;
  do {
    iVar3 = 8;
    uVar11 = uVar7;
    do {
      if ((uVar11 & 1) == 0) {
        uVar11 = uVar11 >> 1;
      }
      else {
        uVar11 = uVar11 >> 1 ^ 0xedb88320;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_004136e0[uVar7] = uVar11;
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x100);
  DAT_00413a9c = (LPCSTR)FUN_0040b671(0x100);
  DAT_00413764 = (LPCSTR)FUN_0040b671(0x100);
  FUN_0040ab9d(DAT_00413a90,0x19,DAT_00413a9c,0x100);
  FUN_0040ab9d(DAT_00413a90,0x3b,DAT_00413764,0x100);
  if (DAT_00413694 != (HWND)0x0) {
    DAT_00413aac = 1;
    SetTimer(DAT_00413698,0x206a,100,(TIMERPROC)0x0);
    do {
      while (BVar5 = PeekMessageA((LPMSG)(local_80 + 0x54),(HWND)0x0,0,0,1), BVar5 != 0) {
        TranslateMessage((MSG *)(local_80 + 0x54));
        DispatchMessageA((MSG *)(local_80 + 0x54));
      }
    } while (DAT_00413aac != 0);
    KillTimer(DAT_00413698,0x206a);
  }
  if ((DAT_0041374c == 0) || ((char)param_3->unused == '\0')) {
    SetErrorMode(0x8000);
    _DAT_00413788 = 0xffffff;
    if (DAT_00413780 != (code *)0x0) {
      iVar3 = (*DAT_00413780)(param_1);
      if (iVar3 == 0) {
        DAT_00413780 = (code *)0x0;
      }
      else {
        if (((DAT_004136b0 != 1) || (DAT_004136ec == 0)) && (DAT_004136ec == 0)) {
          (*DAT_004136f0)(param_1);
        }
        _DAT_00413788 = GetSysColor(0xf);
      }
    }
    acStack_381[1] = '\0';
    pHVar6 = param_3;
    if ((char)param_3->unused == '\0') {
      _memset(local_80,0,0x4c);
      local_80._4_4_ = DAT_00413698;
      local_80._8_4_ = param_1;
      local_80._0_4_ = 0x4c;
      local_80._32_4_ = 0x100;
      local_80._52_4_ = 0x1000;
      FUN_0040ab9d(DAT_00413a90,1,(LPCSTR)&local_480,0x100);
      iVar3 = lstrlenA((LPCSTR)&local_480);
      lpString1 = (LPSTR)((int)&local_480 + iVar3 + 1);
      lstrcpyA(lpString1,s_install_log_004120e4);
      iVar3 = lstrlenA(lpString1);
      lpString1[iVar3 + 1] = '\0';
      local_80._12_4_ = &local_480;
      lstrcpyA((LPSTR)local_180,s_INSTALL_LOG_0041215c);
      local_80._28_4_ = local_180;
      FUN_0040bcf0();
      BVar5 = GetOpenFileNameA((LPOPENFILENAMEA)local_80);
      pHVar6 = (HRSRC)local_80._28_4_;
      if (BVar5 != 0) goto LAB_0040183e;
    }
    else {
LAB_0040183e:
      lstrcpyA(acStack_381 + 1,(LPCSTR)pHVar6);
    }
    if ((acStack_381[1] != '\0') &&
       (pCVar13 = FUN_0040be4c(acStack_381 + 1,0x5c), pCVar13 == (LPCSTR)0x0)) {
      FUN_0040bf2e((uint *)(acStack_281 + 1),0x100);
      iVar3 = lstrlenA(acStack_281 + 1);
      if (acStack_281[iVar3] != '\\') {
        lstrcatA(acStack_281 + 1,&DAT_004120e0);
      }
      lstrcatA(acStack_281 + 1,acStack_381 + 1);
      lstrcpyA(acStack_381 + 1,acStack_281 + 1);
    }
    DAT_00413aa8 = FUN_0040b671(0x100);
    DAT_00413684 = FUN_0040b671(0x4000);
    _memset(DAT_00413684,0,0x4000);
    DAT_00413b80 = FUN_0040b671(0x100);
    DAT_00413754 = FUN_0040b671(0x400);
    _DAT_004137b0 = FUN_0040b671(0x100);
    DAT_00413738 = FUN_0040b671(0x104);
    DAT_00413790 = FUN_0040b671(0x200);
    _memset(DAT_00413790,0,0x200);
    DAT_004136e8 = FUN_0040b671(0x2ee00);
    DAT_00413b0c = FUN_0040b671(64000);
    DAT_00413700 = FUN_0040b671(64000);
    DAT_004136a0 = FUN_0040b671(64000);
    DAT_004136fc = FUN_0040b671(64000);
    DAT_004136a8 = FUN_0040b671(64000);
    DAT_004137a8 = FUN_0040b671(64000);
    DAT_004136cc = FUN_0040b671(64000);
    DAT_004137c0 = FUN_0040b671(64000);
    DAT_00413a84 = FUN_0040b671(64000);
    DAT_00413744 = FUN_0040b671(64000);
    DAT_00413734 = FUN_0040b671(64000);
    DAT_00413748 = FUN_0040b671(64000);
    DAT_00413b98 = FUN_0040b671(64000);
    DAT_004136a4 = FUN_0040b671(0x1000);
    if (acStack_381[1] != '\0') {
      hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
      param_3 = (HRSRC)SetCursor(hCursor);
      iVar3 = FUN_00403d2b(acStack_381 + 1,local_780);
      if (iVar3 == 0) {
        SetCursor((HCURSOR)param_3);
        if (DAT_00413b00 != 0) {
          DAT_004136c4 = 1000;
          DAT_00413a60 = 0xb;
        }
        if (DAT_00413a64 != 0) {
          DAT_004136c4 = 1000;
          DAT_00413a60 = 0xb;
        }
        if (DAT_0041370c == 0) {
          FUN_0040bcf0();
          EnableWindow(DAT_00413698,0);
          dwInitParam = 0;
          lpDialogFunc = _ItemDlg_16;
          BVar5 = IsWindowVisible(DAT_00413698);
          DAT_00413690 = CreateDialogParamA(DAT_00413a90,(LPCSTR)0x6a,
                                            (HWND)(-(uint)(BVar5 != 0) & (uint)DAT_00413698),
                                            lpDialogFunc,dwInitParam);
          if (DAT_00413b00 != 0) goto LAB_00401b10;
          if (DAT_00413724 == 0) {
            do {
              if (DAT_004136ac != 0) break;
              while (BVar5 = PeekMessageA((LPMSG)(local_80 + 0x54),(HWND)0x0,0,0,1), BVar5 != 0) {
                BVar5 = IsDialogMessageA(DAT_00413690,(LPMSG)(local_80 + 0x54));
                if (BVar5 == 0) {
                  TranslateMessage((MSG *)(local_80 + 0x54));
                  DispatchMessageA((MSG *)(local_80 + 0x54));
                }
              }
            } while (DAT_00413724 == 0);
            goto LAB_00401b10;
          }
        }
        else {
LAB_00401b10:
          if (DAT_00413724 == 0) {
            FUN_0040bea8(&DAT_004120e0);
            if (DAT_004136c4 == 0x3f1) {
              FUN_00406ba3();
            }
            else {
              FUN_00407c36(acStack_381 + 1);
            }
            PostMessageA((HWND)0xffff,0x1a,0,0);
          }
        }
        if (DAT_004136f4 == 0) {
LAB_00401bc4:
          if (DAT_0041370c == 0) {
            DestroyWindow(DAT_00413690);
          }
        }
        else if (DAT_0041370c == 0) {
          FUN_0040ab9d(DAT_00413a90,0x19,acStack_281 + 1,0x100);
          FUN_0040ab9d(DAT_00413a90,0x44,local_980,0x200);
          iVar3 = MessageBoxA(DAT_00413690,local_980,acStack_281 + 1,(uint)(DAT_004136b0 != 0));
          if (iVar3 == 2) {
            DAT_004136f4 = 0;
          }
          goto LAB_00401bc4;
        }
        FUN_0040b02c();
      }
      else {
        SetCursor((HCURSOR)param_3);
      }
    }
    if (DAT_00413694 != (HWND)0x0) {
      DestroyWindow(DAT_00413694);
    }
    DestroyWindow(DAT_00413698);
    while (BVar5 = GetMessageA((LPMSG)(local_80 + 0x54),(HWND)0x0,0,0), BVar5 != 0) {
      TranslateMessage((MSG *)(local_80 + 0x54));
      DispatchMessageA((MSG *)(local_80 + 0x54));
    }
    if (DAT_00413758 != (code *)0x0) {
      (*DAT_00413758)(param_1);
    }
    if (DAT_00413b8c != (code *)0x0) {
      GetWindowsDirectoryA((LPSTR)local_180,0x100);
      (*DAT_00413b8c)(0x1000,0x2001,local_180,0);
    }
    if (DAT_0041373c != (HMODULE)0x0) {
      FreeLibrary(DAT_0041373c);
    }
    DeleteObject(DAT_00413ac0);
    FreeResource((HGLOBAL)local_80._76_4_);
    FreeResource((HGLOBAL)local_80._80_4_);
    FreeResource(local_c);
    if (DAT_0041371c != (HGLOBAL)0x0) {
      GlobalUnlock(DAT_0041371c);
      GlobalFree(DAT_0041371c);
    }
    if (DAT_004136f4 != 0) {
      if (DAT_004136b0 == 1) {
        pCVar13 = (LPCSTR)0x75fa;
      }
      else {
        if (DAT_004136b0 != 0) goto LAB_00401dcc;
        pCVar13 = (LPCSTR)0x75f9;
      }
      param_3 = FindResourceA(DAT_00413a90,pCVar13,(LPCSTR)0x12c);
      if (param_3 != (HRSRC)0x0) {
        param_4 = SizeofResource(DAT_00413a90,param_3);
        param_2 = LoadResource(DAT_00413a90,param_3);
        if (param_2 != (HGLOBAL)0x0) {
          local_c = LockResource(param_2);
          if (local_c != (LPCCH)0x0) {
            GetWindowsDirectoryA(acStack_381 + 1,0x100);
            iVar3 = lstrlenA(acStack_381 + 1);
            if (acStack_381[iVar3] != '\\') {
              lstrcatA(acStack_381 + 1,&DAT_004120e0);
            }
            if (DAT_004136b0 == 0) {
              pcVar4 = s__MSSETUP_EXE_004120d0;
            }
            else {
              pcVar4 = s__MSRSTRT_EXE_004120c0;
            }
            lstrcatA(acStack_381 + 1,pcVar4);
            param_3 = (HRSRC)_lcreat(acStack_381 + 1,0);
            if (param_3 != (HRSRC)0xffffffff) {
              _lwrite((HFILE)param_3,local_c,param_4);
              _lclose((HFILE)param_3);
            }
          }
          FreeResource(param_2);
        }
      }
    }
LAB_00401dcc:
    if (DAT_00413b08 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413b08);
    }
    if (DAT_00413750 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413750);
    }
    if (local_10 == 0) {
      GetModuleFileNameA(param_1,(LPSTR)&local_480,0x100);
      FUN_0040a794(&local_480,0);
      param_1 = (HINSTANCE)((uint)param_1 & 0xffffff00);
      if ((DAT_004136f4 != 0) && (DAT_004136b0 == 2)) {
        lstrcpyA((LPSTR)&param_1,&DAT_004120bc);
      }
      wsprintfA((LPSTR)local_180,s__s__z_s__s__s_004120ac,aCStack_683 + 3,&param_1,&local_480,
                local_780);
      if ((DAT_00413a88 == 0) || (DAT_00413724 != 0)) {
        DeleteFileA((LPCSTR)&local_480);
      }
      else {
        WinExec((LPCSTR)local_180,5);
      }
    }
    else if (DAT_00413724 == 0) {
      GetModuleFileNameA(param_1,(LPSTR)local_180,0x100);
      if (DAT_004136b0 != 0) {
        OpenFile((LPCSTR)local_180,&local_208,0x200);
      }
      pCVar13 = &DAT_00412168;
      iVar3 = lstrlenA((LPCSTR)local_180);
      lstrcpyA(local_208.szPathName + iVar3 + 0x7d,pCVar13);
      OpenFile((LPCSTR)local_180,&local_208,0x200);
    }
    FUN_0040b6fa();
    if (DAT_00413760 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413760);
    }
    if (DAT_004136f4 == 0) {
      return local_24;
    }
    if ((DAT_004136b0 == 1) || (DAT_004136b0 == 0)) {
      WinExec(acStack_381 + 1,5);
      return local_24;
    }
    if (local_10 != 0) {
      return local_24;
    }
    iVar3 = DAT_00413724;
    if (DAT_00413a88 == 0) goto LAB_00401f50;
  }
  else {
    DAT_00413aac = 1;
    SetTimer(DAT_00413698,0x206a,1000,(TIMERPROC)0x0);
    do {
      while (BVar5 = PeekMessageA((LPMSG)(local_80 + 0x54),(HWND)0x0,0,0,1), BVar5 != 0) {
        TranslateMessage((MSG *)(local_80 + 0x54));
        DispatchMessageA((MSG *)(local_80 + 0x54));
      }
    } while (DAT_00413aac != 0);
    KillTimer(DAT_00413698,0x206a);
    lstrcpyA((LPSTR)local_180,(LPCSTR)param_3);
    pCVar13 = FUN_0040be4c((LPCSTR)local_180,0x20);
    if (pCVar13 != (LPCSTR)0x0) {
      *pCVar13 = '\0';
    }
    iVar3 = lstrlenA((LPCSTR)local_180);
    if (local_208.szPathName[iVar3 + 0x7f] != '\\') {
      DeleteFileA((LPCSTR)local_180);
    }
    iVar3 = lstrlenA((LPCSTR)local_180);
    for (pCVar10 = local_208.szPathName + iVar3 + 0x7f; local_180 < pCVar10; pCVar10 = pCVar10 + -1)
    {
      if (*pCVar10 == '\\') goto LAB_0040165a;
    }
    if (*pCVar10 == '\\') {
LAB_0040165a:
      *pCVar10 = '\0';
    }
    FUN_004091af((LPCSTR)local_180,0);
    if ((pCVar13 != (LPCSTR)0x0) && (pCVar13 = pCVar13 + 1, *pCVar13 != '\0')) {
      iVar3 = lstrlenA(pCVar13);
      if (pCVar13[iVar3 + -1] == '\\') {
        pCVar13[iVar3 + -1] = '\0';
      }
      FUN_004091af(pCVar13,0);
    }
    DestroyWindow(DAT_00413698);
    while (BVar5 = GetMessageA((LPMSG)(local_80 + 0x54),(HWND)0x0,0,0), BVar5 != 0) {
      TranslateMessage((MSG *)(local_80 + 0x54));
      DispatchMessageA((MSG *)(local_80 + 0x54));
    }
    DeleteObject(DAT_00413ac0);
    FreeResource((HGLOBAL)local_80._76_4_);
    FreeResource((HGLOBAL)local_80._80_4_);
    FreeResource(local_c);
    GetModuleFileNameA(param_1,(LPSTR)local_180,0x100);
    if (DAT_00413b08 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413b08);
    }
    iVar3 = DAT_004136f4;
    if (DAT_00413760 != (HGDIOBJ)0x0) {
      DeleteObject(DAT_00413760);
      iVar3 = DAT_004136f4;
    }
  }
  if (iVar3 == 0) {
    return local_24;
  }
LAB_00401f50:
  ExitWindowsEx(2,0);
  return local_24;
}

