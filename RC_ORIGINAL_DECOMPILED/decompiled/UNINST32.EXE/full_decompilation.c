/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
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


/*
 * FUN_00401f70 at 00401f70
 * ATOM __cdecl FUN_00401f70(HINSTANCE param_1)
 * Address ranges: 00401f70-00401fce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


ATOM __cdecl FUN_00401f70(HINSTANCE param_1)

{
  ATOM AVar1;
  WNDCLASSA local_2c;
  
  local_2c.style = 0;
  local_2c.lpfnWndProc = _MainWndProc_16;
  local_2c.cbClsExtra = 0;
  local_2c.cbWndExtra = 0;
  local_2c.hInstance = param_1;
  local_2c.hIcon = LoadIconA(param_1,(LPCSTR)0x65);
  local_2c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_2c.hbrBackground = GetStockObject(0);
  local_2c.lpszClassName = PTR_s_GLBSUninstall_0041205c;
  local_2c.lpszMenuName = (LPCSTR)0x0;
  AVar1 = RegisterClassA(&local_2c);
  return AVar1;
}


/*
 * FUN_00401fcf at 00401fcf
 * undefined4 __cdecl FUN_00401fcf(HINSTANCE param_1)
 * Address ranges: 00401fcf-004020e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00401fcf(HINSTANCE param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int nWidth;
  int nHeight;
  HWND hWndParent;
  HMENU hMenu;
  HINSTANCE hInstance;
  LPVOID lpParam;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  
  DAT_00413a90 = param_1;
  if ((DAT_0041370c == 0) && (DAT_0041374c == 0)) {
    DAT_00413750 = FUN_0040bbac(0x6f,&DAT_00413b84);
    GetObjectA(DAT_00413750,0x18,local_1c);
    lpParam = (LPVOID)0x0;
    hMenu = (HMENU)0x0;
    hWndParent = (HWND)0x0;
    nWidth = local_18;
    nHeight = local_14;
    hInstance = param_1;
    iVar1 = GetSystemMetrics(1);
    iVar1 = (iVar1 - local_14) / 2;
    iVar2 = GetSystemMetrics(0);
    DAT_00413694 = CreateWindowExA(0,PTR_s_GLBSUninstall_0041205c,&DAT_0041216c,0x90000000,
                                   (iVar2 - local_18) / 2,iVar1,nWidth,nHeight,hWndParent,hMenu,
                                   hInstance,lpParam);
    SetTimer(DAT_00413694,1,0x9c4,(TIMERPROC)0x0);
  }
  DAT_00413698 = CreateWindowExA(0,PTR_s_GLBSUninstall_0041205c,&DAT_0041216c,0xcd0000,0,0,0x280,
                                 0x1e0,(HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  if (DAT_00413698 == (HWND)0x0) {
    uVar3 = 0;
  }
  else {
    if (DAT_00413ac4 != (LPCSTR)0x0) {
      SetWindowTextA(DAT_00413698,DAT_00413ac4);
    }
    if (((DAT_0041370c == 0) && (DAT_0041374c == 0)) && (DAT_004136b4 == 0)) {
      ShowWindow(DAT_00413698,3);
    }
    UpdateWindow(DAT_00413698);
    uVar3 = 1;
  }
  return uVar3;
}


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


/*
 * _SharedDlg@16 at 00402558
 * undefined4 __stdcall _SharedDlg@16(HWND param_1, int param_2, INT_PTR param_3)
 * Address ranges: 00402558-004026c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 _SharedDlg_16(HWND param_1,int param_2,INT_PTR param_3)

{
  undefined4 uVar1;
  UINT UVar2;
  CHAR local_114 [256];
  tagRECT local_14;
  
                    /* 0x2558  4  _SharedDlg@16 */
  if (param_2 == 0x110) {
    FUN_0040a9ec(param_1);
    SetDlgItemTextA(param_1,0x3ea,DAT_00413754);
    if (DAT_004136c0 == 0) {
      UVar2 = 0x3e;
    }
    else {
      UVar2 = 0x4c;
    }
    FUN_0040ab9d(DAT_00413a90,UVar2,local_114,0x100);
    SetWindowTextA(param_1,local_114);
    FUN_0040ab9d(DAT_00413a90,0x33,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ed,local_114);
    FUN_0040ab9d(DAT_00413a90,0x34,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ee,local_114);
    FUN_0040ab9d(DAT_00413a90,0x45,local_114,0x100);
    SetDlgItemTextA(param_1,0x3ef,local_114);
    FUN_0040ab9d(DAT_00413a90,0x35,local_114,0x100);
    SetDlgItemTextA(param_1,1,local_114);
    GetWindowRect(param_1,&local_14);
    MoveWindow(param_1,(DAT_004137a0 - (local_14.right - local_14.left)) / 2,
               (DAT_004137a4 - (local_14.bottom - local_14.top)) / 2,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
    uVar1 = 1;
  }
  else if (param_2 == 0x111) {
    EndDialog(param_1,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/*
 * _PromptDlg@16 at 004026c1
 * undefined4 __stdcall _PromptDlg@16(HWND param_1, int param_2, int param_3)
 * Address ranges: 004026c1-00402832
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 _PromptDlg_16(HWND param_1,int param_2,int param_3)

{
  CHAR local_214 [256];
  CHAR local_114 [256];
  tagRECT local_14;
  
                    /* 0x26c1  3  _PromptDlg@16 */
  if (param_2 == 0x110) {
    FUN_0040a9ec(param_1);
    FUN_0040ab9d(DAT_00413a90,0x4e,local_114,0x100);
    SetWindowTextA(param_1,local_114);
    FUN_0040ab9d(DAT_00413a90,0x4f,local_114,0x100);
    wsprintfA(local_214,local_114,DAT_00413778);
    SetDlgItemTextA(param_1,0x3ea,local_114);
    FUN_0040ab9d(DAT_00413a90,0x50,local_114,0x100);
    SetDlgItemTextA(param_1,1,local_114);
    FUN_0040ab9d(DAT_00413a90,0x30,local_114,0x100);
    SetDlgItemTextA(param_1,2,local_114);
    SetDlgItemTextA(param_1,0x3f2,DAT_00413714);
    GetWindowRect(param_1,&local_14);
    MoveWindow(param_1,(DAT_004137a0 - (local_14.right - local_14.left)) / 2,
               (DAT_004137a4 - (local_14.bottom - local_14.top)) / 2,local_14.right - local_14.left,
               local_14.bottom - local_14.top,0);
    return 1;
  }
  if (param_2 == 0x111) {
    if (param_3 == 1) {
      GetDlgItemTextA(param_1,0x3f2,DAT_00413714,0x100);
    }
    else if (param_3 != 2) {
      return 1;
    }
    EndDialog(param_1,param_3);
    return 1;
  }
  return 0;
}


/*
 * _ItemDlg@16 at 00402833
 * undefined4 __stdcall _ItemDlg@16(HWND param_1, int param_2, int param_3)
 * Address ranges: 00402833-00402e7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 _ItemDlg_16(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  HDC hdc;
  HDC hdc_00;
  HGDIOBJ pvVar3;
  DWORD DVar4;
  HPEN pHVar5;
  uint uVar6;
  WPARAM wParam;
  tagPAINTSTRUCT local_16c;
  CHAR local_12c [256];
  undefined1 local_2c [12];
  int local_20;
  tagRECT local_1c;
  tagPOINT local_c;
  
                    /* 0x2833  1  _ItemDlg@16 */
  if (param_2 == 0xf) {
    if (DAT_004134d4 == 0) {
      SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
      DAT_004134d4 = 1;
    }
    hdc = BeginPaint(param_1,&local_16c);
    hdc_00 = CreateCompatibleDC(hdc);
    pvVar3 = SelectObject(hdc_00,DAT_00413ac0);
    BitBlt(hdc,0xc,0xc,0x7a,0x106,hdc_00,0,0,0xcc0020);
    SelectObject(hdc_00,pvVar3);
    DeleteDC(hdc_00);
    if ((DAT_00413780 == 0) && (pHVar2 = GetDlgItem(param_1,0x3f0), pHVar2 != (HWND)0x0)) {
      GetWindowRect(pHVar2,&local_1c);
      local_20 = 0;
      local_c.x = local_1c.left + 1;
      local_c.y = local_1c.top + 1;
      local_2c._8_4_ = local_1c.right + 1;
      ScreenToClient(param_1,&local_c);
      ScreenToClient(param_1,(LPPOINT)(local_2c + 8));
      DVar4 = GetSysColor(0x10);
      pHVar5 = CreatePen(0,1,DVar4);
      pvVar3 = SelectObject(hdc,pHVar5);
      MoveToEx(hdc,local_c.x,local_c.y,(LPPOINT)0x0);
      LineTo(hdc,local_2c._8_4_,local_c.y);
      SelectObject(hdc,pvVar3);
      DeleteObject(pHVar5);
      DVar4 = GetSysColor(5);
      pHVar5 = CreatePen(0,1,DVar4);
      pvVar3 = SelectObject(hdc,pHVar5);
      MoveToEx(hdc,local_c.x,local_c.y + 1,(LPPOINT)0x0);
      LineTo(hdc,local_2c._8_4_,local_c.y + 1);
      SelectObject(hdc,pvVar3);
      DeleteObject(pHVar5);
    }
    if (DAT_00413a8c != 0) {
      FUN_0040b864(hdc,param_1);
      uVar6 = ((DAT_0041368c - DAT_004137bc & 0xffffU) << 1) / 3;
      local_c.y = (int)((DAT_00413688 - DAT_004137b8 & 0xffffU) * DAT_004136f8) / DAT_00413af8 &
                  0xffff;
      SetBkColor(hdc,0x7f0000);
      param_3 = 0;
      local_1c.top = DAT_004137bc + 1;
      local_1c.bottom = DAT_0041368c + -1;
      local_1c.left = DAT_004137b8;
      if (0 < local_c.y) {
        do {
          local_1c.right = (uVar6 - 3) + local_1c.left;
          ExtTextOutA(hdc,local_1c.left,local_1c.top,6,&local_1c,&DAT_004134d0,0,(INT *)0x0);
          param_3 = param_3 + uVar6;
          local_1c.left = local_1c.left + uVar6;
        } while (param_3 < local_c.y);
      }
      if (DAT_00413780 == 0) {
        SetRect((LPRECT)local_2c,DAT_004137b8 + -1,DAT_004137bc + -1,DAT_00413688 + 1,
                DAT_0041368c + 1);
        DVar4 = GetSysColor(0x10);
        pHVar5 = CreatePen(0,1,DVar4);
        pvVar3 = SelectObject(hdc,pHVar5);
        MoveToEx(hdc,local_2c._0_4_,local_20 + -1,(LPPOINT)0x0);
        LineTo(hdc,local_2c._0_4_,local_2c._4_4_);
        LineTo(hdc,local_2c._8_4_ + -1,local_2c._4_4_);
        SelectObject(hdc,pvVar3);
        DeleteObject(pHVar5);
        DVar4 = GetSysColor(5);
        pHVar5 = CreatePen(0,1,DVar4);
        pvVar3 = SelectObject(hdc,pHVar5);
        MoveToEx(hdc,local_2c._8_4_ + -1,local_2c._4_4_,(LPPOINT)0x0);
        LineTo(hdc,local_2c._8_4_ + -1,local_20 + -1);
        LineTo(hdc,local_2c._0_4_ + -1,local_20 + -1);
        SelectObject(hdc,pvVar3);
        DeleteObject(pHVar5);
      }
    }
    EndPaint(param_1,&local_16c);
  }
  else {
    if (param_2 == 0x110) {
      FUN_0040a9ec(param_1);
      FUN_0040ab9d(DAT_00413a90,0x2f,local_12c,0x100);
      SetDlgItemTextA(param_1,5,local_12c);
      FUN_0040ab9d(DAT_00413a90,0x30,local_12c,0x100);
      SetDlgItemTextA(param_1,2,local_12c);
      FUN_0040ab9d(DAT_00413a90,0x31,local_12c,0x100);
      SetDlgItemTextA(param_1,3,local_12c);
      FUN_0040ab9d(DAT_00413a90,0x32,local_12c,0x100);
      SetDlgItemTextA(param_1,4,local_12c);
      GetWindowTextA(DAT_00413698,local_12c,0x100);
      SetWindowTextA(param_1,local_12c);
      GetWindowRect(param_1,&local_1c);
      MoveWindow(param_1,(DAT_004137a0 - (local_1c.right - local_1c.left)) / 2,
                 (DAT_004137a4 - (local_1c.bottom - local_1c.top)) / 2,
                 local_1c.right - local_1c.left,local_1c.bottom - local_1c.top,0);
      DAT_00413690 = param_1;
      if ((DAT_00413a60 == '\v') && (DAT_00413b00 != 0)) {
        iVar1 = 0;
        pHVar2 = GetDlgItem(param_1,1);
        ShowWindow(pHVar2,iVar1);
        iVar1 = 0;
        pHVar2 = GetDlgItem(DAT_00413690,5);
        ShowWindow(pHVar2,iVar1);
      }
      FUN_004031ae();
      iVar1 = 0;
      pHVar2 = GetDlgItem(DAT_00413690,0xef6);
      ShowWindow(pHVar2,iVar1);
      pHVar2 = GetDlgItem(param_1,0xef6);
      if (pHVar2 != (HWND)0x0) {
        GetWindowRect(pHVar2,&local_1c);
        DAT_004137b8 = local_1c.left + 1;
        DAT_004137bc = local_1c.top + 1;
        ScreenToClient(param_1,(LPPOINT)&DAT_004137b8);
        DAT_00413688 = local_1c.right + -1;
        DAT_0041368c = local_1c.bottom + -1;
        ScreenToClient(param_1,(LPPOINT)&DAT_00413688);
      }
      if (DAT_00413780 == 0) {
        if (pHVar2 != (HWND)0x0) {
          ShowWindow(pHVar2,0);
        }
        pHVar2 = GetDlgItem(param_1,0x3f0);
        if (pHVar2 != (HWND)0x0) {
          ShowWindow(pHVar2,0);
        }
      }
      return 1;
    }
    if (param_2 == 0x111) {
      if (param_3 == 2) {
        if (DAT_00413a8c != 0) {
          KillTimer(param_1,0x19);
        }
        iVar1 = MessageBoxA(param_1,DAT_00413764,DAT_00413a9c,4);
        if (iVar1 == 6) {
          DAT_00413724 = 1;
          EndDialog(param_1,2);
        }
        if (DAT_00413a8c == 0) {
          return 1;
        }
        SetTimer(param_1,0x19,0x96,(TIMERPROC)0x0);
        return 1;
      }
      if (param_3 == 1) {
        if (DAT_00413a60 == '\v') {
          DAT_004136ac = 1;
          return 0;
        }
        FUN_00402fa0(param_1);
        iVar1 = 1;
      }
      else {
        if (param_3 != 5) {
          if (param_3 == 3) {
            wParam = 1;
          }
          else {
            if (param_3 != 4) {
              return 0;
            }
            wParam = 0;
          }
          SendDlgItemMessageA(param_1,0x3eb,0x185,wParam,-1);
          return 0;
        }
        FUN_00402fa0(param_1);
        iVar1 = 0;
      }
      FUN_00402e7d(iVar1);
      FUN_004031ae();
    }
    else if ((param_2 == 0x113) && (param_3 == 0x19)) {
      DAT_00412060 = DAT_00412060 + 1;
      if (0x19 < DAT_00412060) {
        DAT_00412060 = 1;
      }
      InvalidateRect(param_1,(RECT *)&DAT_00413a70,0);
      UpdateWindow(param_1);
    }
  }
  return 0;
}


/*
 * FUN_00402e7d at 00402e7d
 * undefined __cdecl FUN_00402e7d(int param_1)
 * Address ranges: 00402e7d-00402f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00402e7d(int param_1)

{
  bool bVar1;
  bool bVar2;
  
  if ((DAT_004136c4 == 1000) || (DAT_004136c4 == 0x3f1)) {
    if (param_1 == 0) {
      if (DAT_00413a60 != 0) {
        if (DAT_00413a60 == 0xc) {
          DAT_00413a60 = 0;
          return;
        }
        DAT_00413a60 = (DAT_00413a98 == 0) - 1U & 0xc;
      }
    }
    else if (DAT_00413a60 != 0xb) {
      if (DAT_00413a60 == 0xc) {
switchD_00402eba_default:
        DAT_00413a60 = 0xb;
        return;
      }
      DAT_00413a60 = (DAT_00413a98 != 0) + 0xb;
    }
  }
  else {
    do {
      if (param_1 == 0) {
        DAT_00413a60 = DAT_00413a60 - 1;
      }
      else {
        DAT_00413a60 = DAT_00413a60 + 1;
      }
      switch(DAT_00413a60) {
      case 0:
        goto switchD_00402eba_caseD_0;
      case 1:
        bVar2 = DAT_00413ab4 < 0;
        bVar1 = DAT_00413ab4 == 0;
        break;
      case 2:
        bVar2 = DAT_00413768 < 0;
        bVar1 = DAT_00413768 == 0;
        break;
      case 3:
        bVar2 = DAT_00413b88 < 0;
        bVar1 = DAT_00413b88 == 0;
        break;
      case 4:
        bVar2 = DAT_00413774 < 0;
        bVar1 = DAT_00413774 == 0;
        break;
      case 5:
        bVar2 = DAT_00413720 < 0;
        bVar1 = DAT_00413720 == 0;
        break;
      case 6:
        bVar2 = DAT_00413b9c < 0;
        bVar1 = DAT_00413b9c == 0;
        break;
      case 7:
        bVar2 = DAT_00413b04 < 0;
        bVar1 = DAT_00413b04 == 0;
        break;
      case 8:
        bVar2 = DAT_00413afc < 0;
        bVar1 = DAT_00413afc == 0;
        break;
      case 9:
        bVar2 = DAT_004136c8 < 0;
        bVar1 = DAT_004136c8 == 0;
        break;
      case 10:
        if (DAT_0041379c != 0) {
          return;
        }
        if (0 < DAT_00413aa0) {
          return;
        }
        bVar2 = DAT_00413a80 < 0;
        bVar1 = DAT_00413a80 == 0;
        break;
      default:
        goto switchD_00402eba_default;
      }
    } while (bVar1 || bVar2);
  }
switchD_00402eba_caseD_0:
  return;
}


/*
 * FUN_00402fa0 at 00402fa0
 * undefined __cdecl FUN_00402fa0(HWND param_1)
 * Address ranges: 00402fa0-00403154
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00402fa0(HWND param_1)

{
  bool bVar1;
  LRESULT LVar2;
  LRESULT LVar3;
  int iVar4;
  int iVar5;
  WPARAM wParam;
  
  if (DAT_00413a60 == '\0') {
    LVar2 = SendDlgItemMessageA(DAT_00413690,1000,0xf0,0,0);
    if (LVar2 == 0) {
      LVar2 = SendDlgItemMessageA(DAT_00413690,0x3f1,0xf0,0,0);
      DAT_004136c4 = (-(uint)(LVar2 != 0) & 8) + 0x3e9;
    }
    else {
      DAT_004136c4 = 1000;
    }
  }
  else if (DAT_00413a60 == '\f') {
    LVar2 = SendDlgItemMessageA(DAT_00413690,1000,0xf0,0,0);
    DAT_00413770 = (uint)(LVar2 != 0);
  }
  else if (DAT_00413a60 == '\v') {
    return;
  }
  wParam = 0;
  if (0 < DAT_00413af8) {
    do {
      LVar3 = SendDlgItemMessageA(param_1,0x3eb,0x187,wParam,0);
      LVar2 = DAT_004136d0;
      switch(DAT_00413a60) {
      case '\x01':
        *(LRESULT *)(*(int *)(DAT_004136e8 + wParam * 4) + 0x264) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\x02':
        *(LRESULT *)(*(int *)(DAT_00413b0c + wParam * 4) + 0x25c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\x03':
        iVar5 = DAT_004136fc;
        goto LAB_004030c5;
      case '\x04':
        iVar5 = DAT_004136a8;
        goto LAB_004030c5;
      case '\x05':
        *(LRESULT *)(*(int *)(DAT_004137a8 + wParam * 4) + 0x70c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\x06':
        *(LRESULT *)(*(int *)(DAT_004136cc + wParam * 4) + 0x21c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\a':
        iVar5 = DAT_004137c0;
LAB_004030c5:
        iVar5 = *(int *)(iVar5 + wParam * 4);
LAB_0040313d:
        *(LRESULT *)(iVar5 + 0x104) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\b':
        *(LRESULT *)(*(int *)(DAT_00413a84 + wParam * 4) + 0x121c) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\t':
        *(LRESULT *)(*(int *)(DAT_00413734 + wParam * 4) + 0x300) = LVar3;
        LVar2 = DAT_004136d0;
        break;
      case '\n':
        iVar5 = 0;
        if ((DAT_0041379c != 0) && (iVar5 = 1, LVar2 = LVar3, wParam == 0)) break;
        iVar4 = wParam - iVar5;
        bVar1 = iVar4 < DAT_00413aa0;
        if (bVar1) {
          *(LRESULT *)(*(int *)(DAT_00413748 + iVar4 * 4) + 0x204) = LVar3;
        }
        LVar2 = DAT_004136d0;
        if (bVar1) break;
        iVar5 = *(int *)(DAT_00413b98 + (wParam - (iVar5 + DAT_00413aa0)) * 4);
        goto LAB_0040313d;
      }
      DAT_004136d0 = LVar2;
      wParam = wParam + 1;
    } while ((int)wParam < DAT_00413af8);
  }
  return;
}


/*
 * FUN_0040317d at 0040317d
 * undefined __cdecl FUN_0040317d(int param_1, int param_2)
 * Address ranges: 0040317d-004031ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040317d(int param_1,int param_2)

{
  HWND hWnd;
  
  hWnd = GetDlgItem(DAT_00413690,param_1);
  EnableWindow(hWnd,param_2);
  ShowWindow(hWnd,(uint)(param_2 != 0));
  return;
}


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


/*
 * FUN_00406a16 at 00406a16
 * undefined __cdecl FUN_00406a16(LPCSTR param_1, LPCSTR param_2, LPCSTR param_3)
 * Address ranges: 00406a16-00406b06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00406a16(LPCSTR param_1,LPCSTR param_2,LPCSTR param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_0040b671(0x274);
  *(undefined4 **)(DAT_00413700 + DAT_004136d4 * 4) = puVar1;
  if (DAT_00413710 == 0) {
    OemToCharA(param_1,*(LPSTR *)(DAT_00413700 + DAT_004136d4 * 4));
  }
  else {
    lstrcpyA(*(LPSTR *)(DAT_00413700 + DAT_004136d4 * 4),param_1);
  }
  *(undefined2 *)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 0x268) = DAT_00413b94;
  lstrcpyA((LPSTR)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 0x208),param_2);
  *(undefined4 *)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 600) = 0;
  if (*param_3 != '\0') {
    iVar2 = lstrlenA(param_3);
    puVar1 = FUN_0040b671(iVar2 + 1);
    *(undefined4 **)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 600) = puVar1;
    lstrcpyA(*(LPSTR *)(*(int *)(DAT_00413700 + DAT_004136d4 * 4) + 600),param_3);
  }
  DAT_004136d4 = DAT_004136d4 + 1;
  return;
}


/*
 * FUN_00406b07 at 00406b07
 * undefined4 __cdecl FUN_00406b07(char * param_1, int param_2, HFILE param_3, int param_4)
 * Address ranges: 00406b07-00406ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00406b07(char *param_1,int param_2,HFILE param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  param_2 = param_2 + -1;
  pcVar3 = param_1;
  do {
    while( true ) {
      if ((int)DAT_00413aa4 <= DAT_0041376c) {
        DAT_0041378c = DAT_0041378c + DAT_0041376c;
        DAT_0041376c = 0;
        DAT_00413aa4 = _lread(param_3,DAT_00413684,0x4000);
        if ((int)DAT_00413aa4 < 1) {
          uVar2 = 0;
          goto LAB_00406b9b;
        }
      }
      cVar1 = *(char *)((int)DAT_00413684 + DAT_0041376c);
      if (cVar1 == '\r') break;
      if ((cVar1 != '\n') && (0 < param_2)) {
        param_2 = param_2 + -1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
      }
      DAT_0041376c = DAT_0041376c + 1;
    }
    DAT_0041376c = DAT_0041376c + 1;
  } while ((pcVar3 == param_1) && (param_4 == 0));
  uVar2 = 1;
LAB_00406b9b:
  *pcVar3 = '\0';
  return uVar2;
}


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


/*
 * FUN_004072dc at 004072dc
 * char * __cdecl FUN_004072dc(char * param_1, char * param_2)
 * Address ranges: 004072dc-00407322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_004072dc(char *param_1,char *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  for (; *param_2 == ' '; param_2 = param_2 + 1) {
  }
  cVar1 = *param_2;
  puVar2 = (undefined1 *)0x0;
  if (cVar1 != '\0') {
    do {
      if (cVar1 == '|') break;
      *param_1 = cVar1;
      puVar2 = (undefined1 *)(~-(uint)(cVar1 != ' ') & (uint)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    } while (cVar1 != '\0');
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0;
    }
  }
  *param_1 = '\0';
  if (*param_2 == '|') {
    param_2 = param_2 + 1;
  }
  return param_2;
}


/*
 * FUN_00407323 at 00407323
 * undefined __cdecl FUN_00407323(LPCSTR param_1, char * param_2)
 * Address ranges: 00407323-004074b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00407323(LPCSTR param_1,char *param_2)

{
  HRESULT HVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined4 uVar5;
  uint uVar6;
  void *this;
  void *this_00;
  void *this_01;
  WCHAR local_41c [260];
  byte local_214 [520];
  int *local_c;
  int *local_8;
  
  HVar1 = CoInitialize((LPVOID)0x0);
  if (HVar1 == 0) {
    HVar1 = CoCreateInstance((IID *)&DAT_00410378,(LPUNKNOWN)0x0,1,(IID *)&DAT_004104f8,&local_8);
    if (HVar1 == 0) {
      iVar2 = (**(code **)*local_8)(local_8,&DAT_004107d8,&local_c);
      if (iVar2 == 0) {
        MultiByteToWideChar(0,0,param_1,-1,local_41c,0x104);
        pcVar3 = FUN_004072dc((char *)local_214,param_2);
        (**(code **)(*local_8 + 0x50))(local_8,local_214);
        pcVar3 = FUN_004072dc((char *)local_214,pcVar3);
        (**(code **)(*local_8 + 0x24))(local_8,local_214);
        pbVar4 = (byte *)FUN_004072dc((char *)local_214,pcVar3);
        uVar5 = FUN_0040c37e(this,pbVar4);
        (**(code **)(*local_8 + 0x44))(local_8,local_214,uVar5);
        pcVar3 = FUN_004072dc((char *)local_214,(char *)pbVar4);
        pcVar3 = FUN_004072dc((char *)local_214,pcVar3);
        uVar6 = FUN_0040c37e(this_00,local_214);
        (**(code **)(*local_8 + 0x3c))(local_8,uVar6 & 7);
        pcVar3 = FUN_004072dc((char *)local_214,pcVar3);
        uVar5 = FUN_0040c37e(this_01,local_214);
        if ((char)uVar5 != '\0') {
          (**(code **)(*local_8 + 0x34))(local_8,uVar5);
        }
        FUN_004072dc((char *)local_214,pcVar3);
        (**(code **)(*local_8 + 0x2c))(local_8,local_214);
        FUN_0040be03(param_1);
        (**(code **)(*local_c + 0x18))(local_c,local_41c,0);
        (**(code **)(*local_c + 8))(local_c);
      }
      (**(code **)(*local_8 + 8))(local_8);
    }
    CoUninitialize();
  }
  return;
}


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


/*
 * FUN_00407a97 at 00407a97
 * undefined __cdecl FUN_00407a97(byte * param_1, int param_2, LPCSTR param_3, char * param_4, byte * param_5, HKEY param_6)
 * Address ranges: 00407a97-00407c35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl
FUN_00407a97(byte *param_1,int param_2,LPCSTR param_3,char *param_4,byte *param_5,HKEY param_6)

{
  char cVar1;
  int iVar2;
  void *this;
  uint uVar3;
  byte bVar4;
  undefined *this_00;
  DWORD cbData;
  byte *pbVar5;
  byte *pbVar6;
  undefined *this_01;
  
  if (DAT_004136b0 == 0) {
    if ((*param_4 == '\0') && (param_1 == (byte *)0x0)) {
      RegSetValueA((HKEY)0x80000000,param_3,1,(LPCSTR)param_5,0);
    }
  }
  else {
    if (param_6 == (HKEY)0x0) {
      iVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_00412030 + (int)param_1 * 4),param_3,0,0x1f,&param_6);
    }
    else {
      iVar2 = RegCreateKeyExA(*(HKEY *)(&DAT_00412030 + (int)param_1 * 4),param_3,0,(LPSTR)0x0,0,6,
                              (LPSECURITY_ATTRIBUTES)0x0,&param_6,(LPDWORD)&param_1);
    }
    pbVar5 = param_5;
    if (iVar2 == 0) {
      iVar2 = lstrlenA((LPCSTR)param_5);
      cbData = iVar2 + 1;
      if (param_2 == 3) {
        iVar2 = FUN_0040c2f3(this_00,pbVar5);
        *(int *)pbVar5 = iVar2;
        cbData = 4;
      }
      else if (param_2 == 2) {
        cbData = 0;
        bVar4 = *param_5;
        pbVar6 = pbVar5;
        while (pbVar5 = param_5, param_5 = pbVar5, bVar4 != 0) {
          iVar2 = lstrlenA((LPCSTR)pbVar6);
          cbData = cbData + 1 + iVar2;
          iVar2 = lstrlenA((LPCSTR)pbVar6);
          pbVar5 = pbVar6 + iVar2 + 1;
          pbVar6 = pbVar6 + iVar2 + 1;
          bVar4 = *pbVar5;
        }
      }
      else if (param_2 == 4) {
        cbData = 0;
        param_5 = (byte *)((uint)param_5 & 0xffffff);
        bVar4 = *pbVar5;
        param_3 = (LPCSTR)0x0;
        param_1 = pbVar5;
        this_01 = this_00;
        pbVar6 = pbVar5;
        while (bVar4 != 0) {
          this = (void *)(int)(char)*pbVar6;
          uVar3 = FUN_0040c0a8(this_01,(uint)this);
          bVar4 = (byte)uVar3;
          *pbVar6 = bVar4;
          if (DAT_0041311c < 2) {
            uVar3 = (byte)PTR_DAT_00412f10[(char)bVar4 * 2] & 4;
            this_01 = PTR_DAT_00412f10;
          }
          else {
            this_01 = (undefined *)0x4;
            uVar3 = FUN_0040c27e(this,(int)(char)bVar4,4);
          }
          if ((uVar3 != 0) || (('@' < (char)*pbVar6 && ((char)*pbVar6 < 'G')))) {
            bVar4 = *pbVar6;
            if (param_3 == (LPCSTR)0x0) {
              if ((char)bVar4 < ':') {
                cVar1 = bVar4 - 0x30;
              }
              else {
                cVar1 = bVar4 - 0x37;
              }
              param_5 = (byte *)CONCAT13(cVar1,param_5._0_3_);
              param_3 = (LPCSTR)0x1;
            }
            else {
              if ((char)bVar4 < ':') {
                cVar1 = -0x30;
              }
              else {
                cVar1 = -0x37;
              }
              bVar4 = param_5._3_1_ << 4 | bVar4 + cVar1;
              this_01 = (undefined *)CONCAT31((int3)((uint)this_01 >> 8),bVar4);
              cbData = cbData + 1;
              param_3 = (LPCSTR)0x0;
              *param_1 = bVar4;
              param_1 = param_1 + 1;
            }
          }
          pbVar6 = pbVar6 + 1;
          bVar4 = *pbVar6;
        }
      }
      RegSetValueExA(param_6,param_4,0,*(DWORD *)(&DAT_00412044 + param_2 * 4),pbVar5,cbData);
      RegCloseKey(param_6);
    }
  }
  return;
}


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


/*
 * FUN_00409026 at 00409026
 * undefined __cdecl FUN_00409026(int param_1)
 * Address ranges: 00409026-0040912b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00409026(int param_1)

{
  int iVar1;
  HWND hWnd;
  tagRECT *lpRect;
  CHAR local_81c [1024];
  CHAR local_41c [1024];
  tagRECT local_1c;
  tagPOINT local_c;
  
  if (DAT_00413690 != (HWND)0x0) {
    if (param_1 != 0) {
      wsprintfA(local_41c,s__s_004125e8,param_1);
      GetDlgItemTextA(DAT_00413690,0x3ef,local_81c,0x400);
      iVar1 = lstrcmpA(local_81c,local_41c);
      if (iVar1 != 0) {
        SetDlgItemTextA(DAT_00413690,0x3ef,local_41c);
      }
    }
    lpRect = &local_1c;
    hWnd = GetDlgItem(DAT_00413690,0xef6);
    GetWindowRect(hWnd,lpRect);
    local_c.x = local_1c.left;
    local_c.y = local_1c.top;
    ScreenToClient(DAT_00413690,&local_c);
    local_1c.left = local_c.x;
    local_1c.top = local_c.y;
    local_c.x = local_1c.right;
    local_c.y = local_1c.bottom;
    ScreenToClient(DAT_00413690,&local_c);
    local_1c.right = local_c.x;
    local_1c.bottom = local_c.y;
    InvalidateRect(DAT_00413690,&local_1c,0);
  }
  FUN_0040912c(1);
  return;
}


/*
 * FUN_0040912c at 0040912c
 * undefined __cdecl FUN_0040912c(UINT param_1)
 * Address ranges: 0040912c-004091ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040912c(UINT param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  if (param_1 == 0) {
    DAT_00413aac = 0;
  }
  else {
    DAT_00413aac = 1;
    SetTimer(DAT_00413698,0x206a,param_1,(TIMERPROC)0x0);
  }
  do {
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  } while (DAT_00413aac != 0);
  if (param_1 != 0) {
    KillTimer(DAT_00413698,0x206a);
  }
  return;
}


/*
 * FUN_004091af at 004091af
 * undefined __cdecl FUN_004091af(LPCSTR param_1, int param_2)
 * Address ranges: 004091af-00409433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_004091af(LPCSTR param_1,int param_2)

{
  bool bVar1;
  LPCSTR pCVar2;
  char *pcVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  CHAR local_54c [256];
  char local_44c [256];
  byte local_34c;
  CHAR local_204 [256];
  CHAR local_104 [256];
  
  lstrcpyA(local_204,param_1);
  lstrcpyA(local_54c,&DAT_00412304);
  pCVar2 = FUN_0040be4c(local_204,0x2a);
  if (((pCVar2 != (LPCSTR)0x0) || (pCVar2 = FUN_0040be4c(local_204,0x3f), pCVar2 != (LPCSTR)0x0)) &&
     (pcVar3 = FUN_0040b53f(local_204), local_204 < pcVar3)) {
    lstrcpyA(local_54c,pcVar3 + -1);
    pcVar3[-1] = '\0';
  }
  iVar4 = lstrlenA(local_204);
  if (3 < iVar4) {
    GetWindowsDirectoryA(local_104,0x100);
    iVar4 = lstrcmpiA(local_204,local_104);
    if (iVar4 != 0) {
      GetSystemDirectoryA(local_104,0x100);
      iVar4 = lstrcmpiA(local_204,local_104);
      if (iVar4 != 0) {
        if ((DAT_00413738 != (LPCSTR)0x0) && (iVar4 = lstrcmpiA(local_204,DAT_00413738), iVar4 == 0)
           ) {
          return;
        }
        lstrcpyA(local_104,local_204);
        lstrcatA(local_104,&DAT_00412304);
        bVar1 = FUN_0040a6fe(local_104,0x17,local_44c);
        iVar4 = CONCAT31(extraout_var,bVar1);
        while (iVar4 == 0) {
          if (((local_34c & 0x10) != 0) && (local_44c[0] != '.')) {
            lstrcpyA(local_104,local_204);
            lstrcatA(local_104,&DAT_004120e0);
            lstrcatA(local_104,local_44c);
            lstrcatA(local_104,local_54c);
            FUN_004091af(local_104,param_2);
          }
          bVar1 = FUN_0040a740(local_44c);
          iVar4 = CONCAT31(extraout_var_00,bVar1);
        }
        FUN_0040a77d((int)local_44c);
        if (param_2 != 0) {
          lstrcpyA(local_104,local_204);
          lstrcatA(local_104,local_54c);
          bVar1 = FUN_0040a6fe(local_104,7,local_44c);
          iVar4 = CONCAT31(extraout_var_01,bVar1);
          while (iVar4 == 0) {
            if ((local_34c & 0x10) == 0) {
              lstrcpyA(local_104,local_204);
              lstrcatA(local_104,&DAT_004120e0);
              lstrcatA(local_104,local_44c);
              FUN_0040a6db(local_104,0);
              FUN_0040a440(local_104);
            }
            bVar1 = FUN_0040a740(local_44c);
            iVar4 = CONCAT31(extraout_var_02,bVar1);
          }
          FUN_0040a77d((int)local_44c);
        }
        FUN_0040a3ff(local_204);
      }
    }
  }
  return;
}


/*
 * FUN_00409434 at 00409434
 * undefined __stdcall FUN_00409434(void)
 * Address ranges: 00409434-00409600
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_00409434(void)

{
  UINT UVar1;
  HSZ pHVar2;
  HDDEDATA hData;
  int iVar3;
  LPCSTR pCVar4;
  undefined4 *puVar5;
  char *_Source;
  CHAR local_10c [256];
  int local_c;
  HDDEDATA local_8;
  
  UVar1 = DdeInitializeA(&DAT_004136bc,(PFNCALLBACK)&LAB_00403d26,0x3f000,0);
  if (UVar1 == 0) {
    pHVar2 = DdeCreateStringHandleA(DAT_004136bc,s_PROGMAN_004125f8,0x3ec);
    DAT_00413728 = DdeConnect(DAT_004136bc,pHVar2,pHVar2,(PCONVCONTEXT)0x0);
    if (DAT_00413728 != (HCONV)0x0) {
      pHVar2 = DdeCreateStringHandleA(DAT_004136bc,s_GROUPS_004125f0,0x3ec);
      hData = DdeClientTransaction((LPBYTE)0x0,0,DAT_00413728,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
      if (hData != (HDDEDATA)0x0) {
        DdeGetData(hData,DAT_00413b10,0x4000,0);
        iVar3 = lstrlenA((LPCSTR)DAT_00413b10);
        DAT_004136dc = (char *)FUN_0040b671(iVar3 + 1);
        lstrcpyA(DAT_004136dc,(LPCSTR)DAT_00413b10);
        DdeFreeDataHandle(hData);
        if (*DAT_004136dc != '\0') {
          local_c = 0;
          _Source = DAT_004136dc;
          do {
            pCVar4 = FUN_0040be4c(_Source,0xd);
            if (pCVar4 == (LPCSTR)0x0) {
              lstrcpyA(local_10c,_Source);
            }
            else {
              local_8 = (HDDEDATA)(pCVar4 + -(int)_Source);
              _strncpy(local_10c,_Source,(size_t)local_8);
              local_10c[(int)local_8] = '\0';
            }
            pHVar2 = DdeCreateStringHandleA(DAT_004136bc,local_10c,0x3ec);
            local_8 = DdeClientTransaction
                                ((LPBYTE)0x0,0,DAT_00413728,pHVar2,1,0x20b0,5000,(LPDWORD)0x0);
            if (local_8 != (HDDEDATA)0x0) {
              DdeGetData(local_8,DAT_00413b10,0x4000,0);
              iVar3 = lstrlenA((LPCSTR)DAT_00413b10);
              puVar5 = FUN_0040b671(iVar3 + 1);
              *(undefined4 **)(local_c + DAT_00413790) = puVar5;
              lstrcpyA(*(LPSTR *)(local_c + DAT_00413790),(LPCSTR)DAT_00413b10);
              local_c = local_c + 4;
              DdeFreeDataHandle(local_8);
            }
            for (; (*_Source != '\0' && (*_Source != '\r')); _Source = _Source + 1) {
            }
            for (; (*_Source == '\r' || (*_Source == '\n')); _Source = _Source + 1) {
            }
          } while (*_Source != '\0');
        }
      }
    }
  }
  return;
}


/*
 * FUN_00409601 at 00409601
 * undefined __cdecl FUN_00409601(int param_1)
 * Address ranges: 00409601-0040984e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00409601(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  int *piVar3;
  LPCSTR _Source;
  int iVar4;
  char local_40c [256];
  char local_30c [256];
  char local_20c [256];
  BYTE local_10c [256];
  LPCSTR local_c;
  int local_8;
  
  if (*DAT_00413790 != 0) {
    local_8 = 0;
    piVar3 = DAT_00413790;
    do {
      if (**(char **)(local_8 + (int)piVar3) == '\"') {
        _Source = *(char **)(local_8 + (int)piVar3) + 1;
        pCVar1 = FUN_0040be4c(_Source,0x22);
        piVar3 = DAT_00413790;
        if (pCVar1 != (LPCSTR)0x0) {
          _strncpy(local_20c,_Source,(int)pCVar1 - (int)_Source);
          local_20c[(int)pCVar1 - (int)_Source] = '\0';
          for (; (*_Source != '\0' && (*_Source != '\r')); _Source = _Source + 1) {
          }
          while( true ) {
            pCVar1 = _Source;
            if (*_Source != '\0') {
              pCVar1 = _Source + 2;
            }
            piVar3 = DAT_00413790;
            if (*pCVar1 == '\0') break;
            _Source = pCVar1;
            if (*pCVar1 == '\"') {
              _Source = pCVar1 + 1;
              local_c = pCVar1;
              pCVar1 = FUN_0040be4c(_Source,0x22);
              if (pCVar1 != (LPCSTR)0x0) {
                _strncpy(local_30c,_Source,(int)pCVar1 - (int)_Source);
                local_30c[(int)pCVar1 - (int)_Source] = '\0';
                _Source = pCVar1 + 1;
                if ((*_Source == ',') && (pCVar1[2] == '\"')) {
                  _Source = pCVar1 + 3;
                  pCVar1 = FUN_0040be4c(_Source,0x22);
                  if (pCVar1 != (LPCSTR)0x0) {
                    _strncpy(local_40c,_Source,(int)pCVar1 - (int)_Source);
                    local_40c[(int)pCVar1 - (int)_Source] = '\0';
                    iVar4 = param_1 * 4;
                    iVar2 = lstrcmpiA(local_40c,(LPCSTR)(*(int *)(iVar4 + DAT_00413734) + 0x200));
                    if ((iVar2 == 0) ||
                       ((iVar2 = lstrcmpiA(local_20c,*(LPCSTR *)(iVar4 + DAT_00413734)), iVar2 == 0
                        && (iVar2 = lstrcmpiA(local_30c,
                                              (LPCSTR)(*(int *)(iVar4 + DAT_00413734) + 0x100)),
                           iVar2 == 0)))) {
                      *local_c = '*';
                      wsprintfA((LPSTR)local_10c,s__ShowGroup__s_2___00412644,local_20c);
                      FUN_0040984f(local_10c);
                      wsprintfA((LPSTR)local_10c,s__ShowGroup__s_1___00412630,local_20c);
                      FUN_0040984f(local_10c);
                      wsprintfA((LPSTR)local_10c,s__DeleteItem__s___0041261c,local_30c);
                      FUN_0040984f(local_10c);
                      iVar2 = FUN_00409896(*(char **)(local_8 + (int)DAT_00413790));
                      if ((iVar2 != 0) &&
                         (iVar2 = lstrcmpiA(local_20c,s_STARTUP_00412614), iVar2 != 0)) {
                        wsprintfA((LPSTR)local_10c,s__DeleteGroup__s___00412600,local_20c);
                        FUN_0040984f(local_10c);
                      }
                    }
                  }
                }
              }
            }
            for (; (*_Source != '\0' && (*_Source != '\r')); _Source = _Source + 1) {
            }
          }
        }
      }
      local_8 = local_8 + 4;
    } while (*(int *)(local_8 + (int)piVar3) != 0);
  }
  return;
}


/*
 * FUN_0040984f at 0040984f
 * undefined __cdecl FUN_0040984f(LPBYTE param_1)
 * Address ranges: 0040984f-00409895
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040984f(LPBYTE param_1)

{
  int iVar1;
  HDDEDATA pData;
  DWORD cbOff;
  HSZ hszItem;
  UINT wFmt;
  UINT afCmd;
  
  if (DAT_00413728 != (HCONV)0x0) {
    afCmd = 0;
    wFmt = 0;
    hszItem = (HSZ)0x0;
    cbOff = 0;
    iVar1 = lstrlenA((LPCSTR)param_1);
    pData = DdeCreateDataHandle(DAT_004136bc,param_1,iVar1 + 1,cbOff,hszItem,wFmt,afCmd);
    DdeClientTransaction((LPBYTE)pData,0xffffffff,DAT_00413728,(HSZ)0x0,0,0x4050,1000,(LPDWORD)0x0);
  }
  return;
}


/*
 * FUN_00409896 at 00409896
 * undefined4 __cdecl FUN_00409896(char * param_1)
 * Address ranges: 00409896-004098d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_00409896(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
  while ((cVar3 != '\0' && (cVar3 != '\r'))) {
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar1;
  }
  while( true ) {
    if (*pcVar2 != '\0') {
      pcVar2 = pcVar2 + 2;
    }
    cVar3 = *pcVar2;
    if (cVar3 == '\0') break;
    if (cVar3 == '\"') {
      return 0;
    }
    while ((cVar3 != '\0' && (cVar3 != '\r'))) {
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar1;
    }
  }
  *param_1 = '*';
  return 1;
}


/*
 * FUN_004098d8 at 004098d8
 * undefined __cdecl FUN_004098d8(HWND param_1, LPCSTR param_2)
 * Address ranges: 004098d8-00409ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_004098d8(HWND param_1,LPCSTR param_2)

{
  char *pcVar1;
  char cVar2;
  HDC hdc;
  int iVar3;
  LPSTR pCVar4;
  char *pcVar5;
  tagSIZE *ptVar6;
  CHAR *lpString2;
  CHAR local_32c [256];
  CHAR local_22c [256];
  CHAR aCStack_12c [4];
  char local_128 [255];
  undefined1 local_29;
  tagRECT local_28;
  HGDIOBJ local_18;
  tagSIZE local_14;
  HGDIOBJ local_c;
  LPCSTR local_8;
  
  cVar2 = *param_2;
  local_8 = param_2;
  while (((cVar2 != '\n' && (cVar2 != '\r')) && (cVar2 != '\0'))) {
    pcVar5 = local_8 + 1;
    local_8 = local_8 + 1;
    cVar2 = *pcVar5;
  }
  for (; (*local_8 == '\r' || (*local_8 == '\n')); local_8 = local_8 + 1) {
  }
  if (*local_8 == '\0') {
    lstrcpyA(local_22c,param_2);
    local_8 = param_2;
  }
  else {
    lstrcpyA(local_22c,local_8);
  }
  if (param_1 != (HWND)0x0) {
    GetWindowRect(param_1,&local_28);
    local_28.right = local_28.right - local_28.left;
    local_c = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
    hdc = GetDC(param_1);
    if (local_c != (HGDIOBJ)0x0) {
      local_18 = SelectObject(hdc,local_c);
    }
    ptVar6 = &local_14;
    iVar3 = lstrlenA(param_2);
    GetTextExtentPointA(hdc,local_22c,iVar3,ptVar6);
    if (local_28.right <= local_14.cx) {
      lstrcpynA(local_128,local_22c,0x100);
      local_29 = 0;
      pcVar5 = local_128;
      while ((local_128[0] != '\0' && (local_128[0] != '\\'))) {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        local_128[0] = *pcVar1;
      }
      if (*pcVar5 == '\\') {
        pcVar5 = pcVar5 + 1;
      }
      if (local_28.right <= local_14.cx) {
        do {
          pCVar4 = pcVar5;
          if (*pcVar5 != '.') goto LAB_00409a18;
          cVar2 = '.';
          do {
            if (cVar2 == '\\') break;
            cVar2 = pCVar4[1];
            pCVar4 = pCVar4 + 1;
          } while (cVar2 != '\0');
          if (*pCVar4 != '\\') goto LAB_00409a18;
          do {
            pCVar4 = pCVar4 + 1;
LAB_00409a18:
          } while ((*pCVar4 != '\0') && (*pCVar4 != '\\'));
          if ((*pCVar4 == '\0') || ((int)pCVar4 - (int)pcVar5 < 4)) {
            lpString2 = &DAT_004125cc;
            iVar3 = lstrlenA(local_128);
            pCVar4 = aCStack_12c + iVar3;
          }
          else {
            lstrcpyA(local_32c,pCVar4);
            lstrcpyA(pcVar5,&DAT_004125cc);
            lpString2 = local_32c;
            pCVar4 = pcVar5 + 3;
          }
          lstrcpyA(pCVar4,lpString2);
          ptVar6 = &local_14;
          iVar3 = lstrlenA(local_128);
          GetTextExtentPointA(hdc,local_128,iVar3,ptVar6);
        } while (local_28.right <= local_14.cx);
      }
      lstrcpyA(local_8,local_128);
    }
    if (local_c != (HGDIOBJ)0x0) {
      SelectObject(hdc,local_18);
    }
    ReleaseDC(param_1,hdc);
  }
  return;
}


/*
 * FUN_00409ac4 at 00409ac4
 * char __cdecl FUN_00409ac4(LPCSTR param_1, undefined4 param_2, int param_3)
 * Address ranges: 00409ac4-00409cc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char __cdecl FUN_00409ac4(LPCSTR param_1,undefined4 param_2,int param_3)

{
  LSTATUS LVar1;
  int iVar2;
  void *this;
  CHAR local_210 [256];
  int local_110 [64];
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_004136ec == 0) {
    return '\0';
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,PTR_s_Software_Microsoft_Windows_Curre_00412058,0,0x1f,
                        &local_8);
  if (LVar1 != 0) {
    return '\0';
  }
  local_10 = 0x100;
  LVar1 = RegQueryValueExA(local_8,param_1,(LPDWORD)0x0,&local_c,(LPBYTE)local_110,&local_10);
  if (LVar1 == 0) {
    if (local_c == 1) {
      local_110[0] = FUN_0040c37e(this,(byte *)local_110);
    }
    else if ((local_c != 4) && ((local_c != 3 || (local_10 != 4)))) goto LAB_00409cb9;
    if (0 < local_110[0]) {
      if (DAT_00413770 == 0) {
        iVar2 = -param_3;
      }
      else {
        iVar2 = -1;
      }
      iVar2 = local_110[0] + iVar2;
      local_110[0] = iVar2;
      if (iVar2 < 0) {
        local_110[0] = 0;
      }
      if (iVar2 < 1) {
        FUN_0040ab9d(DAT_00413a90,0x26,local_210,0x100);
        wsprintfA(DAT_00413754,local_210,param_1);
        FUN_0040ab9d(DAT_00413a90,0x27,local_210,0x100);
        lstrcatA(DAT_00413754,local_210);
        if ((DAT_0041370c == 0) && (DAT_00413b90 == 0)) {
          if (DAT_00413730 == 0) {
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
            SetFocus(DAT_00413690);
          }
          else {
            iVar2 = 0x3ed;
          }
        }
        else {
          iVar2 = 7;
        }
        RegDeleteValueA(local_8,param_1);
        return (iVar2 == 0x3ed) + '\x01';
      }
      if (0 < local_110[0]) {
        RegSetValueExA(local_8,param_1,0,4,(BYTE *)local_110,4);
        return '\x01';
      }
    }
  }
LAB_00409cb9:
  RegCloseKey(local_8);
  return '\0';
}


/*
 * FUN_00409cc9 at 00409cc9
 * undefined4 __cdecl FUN_00409cc9(LPCSTR param_1, LPCSTR param_2, int param_3)
 * Address ranges: 00409cc9-00409e39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00409cc9(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  bool bVar1;
  LPCSTR pCVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char *lpString1;
  CHAR local_34c [256];
  byte local_24c;
  char acStack_105 [257];
  
  pCVar2 = FUN_0040be4c(param_1,0x2a);
  if ((pCVar2 == (LPCSTR)0x0) && (pCVar2 = FUN_0040be4c(param_1,0x3f), pCVar2 == (LPCSTR)0x0)) {
    FUN_00409e3a(param_1);
    if ((param_3 != 0) && (*param_2 != '\0')) {
      FUN_0040b32f(param_2,param_1);
    }
  }
  else {
    iVar3 = lstrlenA(param_1);
    if ((2 < iVar3) && (iVar3 = lstrcmpA(param_1 + iVar3 + -3,&DAT_00412658), iVar3 == 0)) {
      iVar3 = lstrlenA(param_1);
      if (iVar3 < 4) {
        return 0;
      }
      GetWindowsDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      GetSystemDirectoryA((LPSTR)((int)acStack_105 + 1),0x100);
      iVar3 = lstrcmpiA(param_1,(LPCSTR)((int)acStack_105 + 1));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = lstrcmpiA(param_1,DAT_00413738);
      if (iVar3 == 0) {
        return 0;
      }
    }
    lstrcpyA((LPSTR)((int)acStack_105 + 1),param_1);
    iVar3 = lstrlenA((LPCSTR)((int)acStack_105 + 1));
    for (lpString1 = acStack_105 + iVar3; (uint)((int)acStack_105 + 1U) < lpString1;
        lpString1 = lpString1 + -1) {
      if (*lpString1 == '\\') goto LAB_00409dd9;
    }
    if (*lpString1 == '\\') {
LAB_00409dd9:
      lpString1 = lpString1 + 1;
    }
    bVar1 = FUN_0040a6fe((LPCSTR)((int)acStack_105 + 1),7,local_34c);
    iVar3 = CONCAT31(extraout_var,bVar1);
    while (iVar3 == 0) {
      if ((local_24c & 0x10) == 0) {
        lstrcpyA(lpString1,local_34c);
        FUN_00409e3a((LPCSTR)((int)acStack_105 + 1));
      }
      bVar1 = FUN_0040a740(local_34c);
      iVar3 = CONCAT31(extraout_var_00,bVar1);
    }
    FUN_0040a77d((int)local_34c);
  }
  return 1;
}


/*
 * FUN_00409e3a at 00409e3a
 * undefined __cdecl FUN_00409e3a(LPCSTR param_1)
 * Address ranges: 00409e3a-00409ec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00409e3a(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  CHAR local_104 [256];
  
  FUN_0040a6db(param_1,0);
  FUN_0040a440(param_1);
  iVar1 = lstrlenA(param_1);
  if ((4 < iVar1) && (DAT_004136b0 != 0)) {
    iVar2 = lstrcmpiA(param_1 + iVar1 + -4,&DAT_0041266c);
    if (iVar2 == 0) {
      lstrcpyA(local_104,param_1);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_00412664);
      FUN_0040a440(local_104);
      lstrcpyA(local_104 + iVar1 + -4,&DAT_0041265c);
      FUN_0040a440(local_104);
    }
  }
  return;
}


/*
 * FUN_00409eca at 00409eca
 * undefined __cdecl FUN_00409eca(LPCSTR param_1, LPCSTR param_2, int param_3)
 * Address ranges: 00409eca-0040a079
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_00409eca(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  HWND pHVar1;
  uint *puVar2;
  int iVar3;
  LPCSTR lpString1;
  BOOL BVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  HMODULE hModule_00;
  char *lpProcName;
  LPSTR pCVar6;
  CHAR local_458 [512];
  uint local_258 [64];
  uint local_158 [64];
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  lstrcpyA(DAT_00413754,param_1);
  lstrcatA(DAT_00413754,param_2);
  pCVar6 = DAT_00413754;
  pHVar1 = GetDlgItem(DAT_00413690,0x3ef);
  FUN_004098d8(pHVar1,pCVar6);
  FUN_00409026((int)DAT_00413754);
  lstrcpyA((LPSTR)local_158,param_2);
  puVar2 = (uint *)FUN_0040b53f((LPCSTR)local_158);
  if (local_158 < puVar2) {
    *(char *)((int)puVar2 + -1) = '\0';
  }
  FUN_0040a794(local_158,0);
  FUN_0040bea8((LPCSTR)local_158);
  iVar3 = lstrlenA(param_2);
  lpString1 = param_2 + iVar3 + -3;
  if (param_2 + iVar3 + -3 < param_2) {
    lpString1 = param_2;
  }
  iVar3 = lstrcmpiA(lpString1,&DAT_00412150);
  if (iVar3 == 0) {
    lstrcpyA((LPSTR)local_258,param_2);
    FUN_0040a794(local_258,0);
    _memset(&local_58,0,0x44);
    local_58.cb = 0x44;
    wsprintfA(local_458,s__s__UNREGSERVER_004126c8,local_258);
    BVar4 = CreateProcessA((LPCSTR)0x0,local_458,(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_58,
                           &local_14);
    if (BVar4 != 0) {
      WaitForSingleObject(local_14.hProcess,0xffffffff);
    }
  }
  else {
    iVar3 = FUN_0040a949(param_2);
    if (iVar3 != 0) {
      hModule = LoadLibraryA(s_OLE32_DLL_004126bc);
      if (hModule != (HMODULE)0x0) {
        pFVar5 = GetProcAddress(hModule,s_OleInitialize_004126ac);
        if (pFVar5 != (FARPROC)0x0) {
          iVar3 = (*pFVar5)(0);
          if (iVar3 == 0) {
            hModule_00 = LoadLibraryA(param_2);
            if (hModule_00 != (HMODULE)0x0) {
              lpProcName = s_DllRegisterServer_00412698;
              if (param_3 == 0) {
                lpProcName = s_DllUnregisterServer_00412684;
              }
              pFVar5 = GetProcAddress(hModule_00,lpProcName);
              if (pFVar5 != (FARPROC)0x0) {
                (*pFVar5)();
              }
              FreeLibrary(hModule_00);
            }
          }
        }
        pFVar5 = GetProcAddress(hModule,s_OleUninitialize_00412674);
        if (pFVar5 != (FARPROC)0x0) {
          (*pFVar5)();
        }
        FreeLibrary(hModule);
      }
    }
  }
  return;
}


/*
 * FUN_0040a07a at 0040a07a
 * undefined4 __stdcall FUN_0040a07a(void)
 * Address ranges: 0040a07a-0040a280
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_0040a07a(void)

{
  LSTATUS LVar1;
  HWND pHVar2;
  int iVar3;
  void *this;
  CHAR local_314 [256];
  CHAR local_214 [256];
  int local_114 [64];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  HKEY local_8;
  
  if (DAT_004136b0 == 0) {
    return 0;
  }
  LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_Database_Engine_0041271c,0,0x1f,&local_8
                       );
  if (LVar1 != 0) {
    return 0;
  }
  local_c = 0x100;
  LVar1 = RegQueryValueExA(local_8,s_UseCount_00412710,(LPDWORD)0x0,&local_10,(LPBYTE)local_114,
                           &local_c);
  if (LVar1 == 0) {
    if (local_10 == 1) {
      local_114[0] = FUN_0040c37e(this,(byte *)local_114);
    }
    else if (local_10 != 4) {
      if (local_10 != 3) {
        return 0;
      }
      if (local_c != 4) {
        return 0;
      }
    }
    if (local_114[0] == 1) {
      do {
        pHVar2 = FindWindowA(s_IB_Server_00412704,(LPCSTR)0x0);
        if (pHVar2 == (HWND)0x0) {
          iVar3 = 5;
        }
        else {
          FUN_0040ab9d(DAT_00413a90,0x1c,local_314,0x100);
          FUN_0040ab9d(DAT_00413a90,0x19,local_214,0x100);
          iVar3 = MessageBoxA(DAT_00413690,local_314,local_214,2);
          if (iVar3 == 3) {
            return 1;
          }
        }
      } while (iVar3 != 5);
      RegCloseKey(local_8);
      FUN_0040a281(s_Software_Borland_Database_Engine_0041271c,2);
      FUN_0040a281(s_Software_Borland_BLW32_004126ec,2);
      LVar1 = RegOpenKeyExA((HKEY)0x80000002,s_Software_Borland_004126d8,0,0x1f,&local_8);
      if (LVar1 != 0) {
        return 0;
      }
      LVar1 = RegEnumValueA(local_8,0,(LPSTR)local_114,&local_c,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
      if (LVar1 == 0) {
        RegCloseKey(local_8);
        return 0;
      }
      local_c = 0x100;
      local_14 = RegEnumKeyExA(local_8,0,(LPSTR)local_114,&local_c,(LPDWORD)0x0,(LPSTR)0x0,
                               (LPDWORD)0x0,(PFILETIME)0x0);
      RegCloseKey(local_8);
      if (local_14 == 0) {
        return 0;
      }
      RegDeleteKeyA((HKEY)0x80000002,s_Software_Borland_004126d8);
      return 0;
    }
    if (local_114[0] < 2) {
      return 0;
    }
    wsprintfA((LPSTR)local_114,&DAT_00412434,local_114[0] + -1);
    iVar3 = lstrlenA((LPCSTR)local_114);
    RegSetValueExA(local_8,s_UseCount_00412710,0,1,(BYTE *)local_114,iVar3 + 1);
  }
  RegCloseKey(local_8);
  return 0;
}


/*
 * FUN_0040a281 at 0040a281
 * undefined __cdecl FUN_0040a281(LPCSTR param_1, int param_2)
 * Address ranges: 0040a281-0040a392
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040a281(LPCSTR param_1,int param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY pHVar3;
  CHAR local_194;
  CHAR aCStack_193 [383];
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  int local_8;
  
  local_8 = 0;
  do {
    lstrcpyA(&local_194,param_1);
    lstrcatA(&local_194,&DAT_004120e0);
    iVar1 = lstrlenA(param_1);
    if (DAT_004136b0 == 0) {
      LVar2 = RegOpenKeyA((HKEY)0x80000000,param_1,&local_c);
      if (LVar2 == 0) {
        LVar2 = RegEnumKeyA(local_c,0,aCStack_193 + iVar1,0x100);
        pHVar3 = local_c;
        goto LAB_0040a30f;
      }
LAB_0040a355:
      local_8 = 0x800;
    }
    else {
      LVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_00412030 + param_2 * 4),param_1,0,0x1f,&local_10);
      if (LVar2 != 0) goto LAB_0040a355;
      local_14 = 0x100;
      LVar2 = RegEnumKeyExA(local_10,0,aCStack_193 + iVar1,&local_14,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      pHVar3 = local_10;
LAB_0040a30f:
      RegCloseKey(pHVar3);
      if (LVar2 != 0) goto LAB_0040a355;
      FUN_0040a281(&local_194,param_2);
    }
    local_8 = local_8 + 1;
    if (0x7ff < local_8) {
      if (DAT_004136b0 == 0) {
        pHVar3 = (HKEY)0x80000000;
      }
      else {
        pHVar3 = *(HKEY *)(&DAT_00412030 + param_2 * 4);
      }
      RegDeleteKeyA(pHVar3,param_1);
      return;
    }
  } while( true );
}


/*
 * FUN_0040a393 at 0040a393
 * undefined __stdcall FUN_0040a393(void)
 * Address ranges: 0040a393-0040a3fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040a393(void)

{
  _OSVERSIONINFOA local_98;
  
  local_98.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_98);
  DAT_004136b0 = (local_98.dwPlatformId != 2) + 1;
  if (3 < local_98.dwMajorVersion) {
    DAT_004136ec = 1;
  }
  DAT_0041373c = LoadLibraryA(s_SHELL32_DLL_00412750);
  if (DAT_0041373c != (HMODULE)0x0) {
    DAT_00413b8c = GetProcAddress(DAT_0041373c,s_SHChangeNotify_00412740);
  }
  return;
}


/*
 * FUN_0040a3ff at 0040a3ff
 * bool __cdecl FUN_0040a3ff(LPCSTR param_1)
 * Address ranges: 0040a3ff-0040a43f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_0040a3ff(LPCSTR param_1)

{
  BOOL BVar1;
  
  FUN_0040a6db(param_1,0);
  BVar1 = RemoveDirectoryA(param_1);
  if (((DAT_004136ec != 0) && (BVar1 != 0)) && (DAT_00413b8c != (code *)0x0)) {
    (*DAT_00413b8c)(0x10,1,param_1,0);
  }
  return BVar1 == 0;
}


/*
 * FUN_0040a440 at 0040a440
 * uint __cdecl FUN_0040a440(LPCSTR param_1)
 * Address ranges: 0040a440-0040a6da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

uint __cdecl FUN_0040a440(LPCSTR param_1)

{
  int iVar1;
  BOOL BVar2;
  HFILE hFile;
  UINT UVar3;
  uint local_308 [63];
  char acStack_209 [256];
  char acStack_109 [257];
  uint local_8;
  
  lstrcpyA((LPSTR)local_308,param_1);
  FUN_0040a794(local_308,1);
  iVar1 = lstrcmpiA((LPCSTR)local_308,DAT_0041375c);
  if (iVar1 == 0) {
    DAT_00413a88 = 1;
  }
  BVar2 = DeleteFileA(param_1);
  local_8 = (uint)(BVar2 == 0);
  if (DAT_004136ec != 0) {
    if (local_8 != 0) goto LAB_0040a4ce;
    if (DAT_00413b8c == (code *)0x0) {
      return 0;
    }
    (*DAT_00413b8c)(4,1,param_1,0);
  }
  if (local_8 == 0) {
    return 0;
  }
LAB_0040a4ce:
  if (DAT_00413798 == 0) {
    return local_8;
  }
  lstrcpyA(acStack_109 + 1,param_1);
  FUN_0040a794((uint *)(acStack_109 + 1),1);
  iVar1 = lstrcmpiA(acStack_109 + 1,DAT_0041375c);
  if (iVar1 != 0) {
    DAT_004136f4 = 1;
  }
  FUN_0040a794((uint *)(acStack_109 + 1),0);
  if (DAT_004136b0 == 2) {
    GetWindowsDirectoryA(acStack_209 + 1,0x100);
    iVar1 = lstrlenA(acStack_209 + 1);
    if (acStack_209[iVar1] != '\\') {
      lstrcatA(acStack_209 + 1,&DAT_004120e0);
    }
    lstrcatA(acStack_209 + 1,s_WININIT_INI_00412790);
    hFile = _lopen(acStack_209 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_209 + 1,0);
      _lwrite(hFile,s__rename__00412784,10);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_NUL__s_00412778,acStack_109 + 1);
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,acStack_209 + 1,UVar3);
  }
  else {
    if (DAT_004136b0 == 1) {
      MoveFileExA(param_1,(LPCSTR)0x0,4);
      return local_8;
    }
    wsprintfA(acStack_209 + 1,s_del__s_0041276c,acStack_109 + 1);
    GetWindowsDirectoryA(acStack_109 + 1,0x100);
    iVar1 = lstrlenA(acStack_109 + 1);
    if (acStack_109[iVar1] != '\\') {
      lstrcatA(acStack_109 + 1,&DAT_004120e0);
    }
    lstrcatA(acStack_109 + 1,s__MSSETUP_BAT_0041275c);
    hFile = _lopen(acStack_109 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_109 + 1,0);
    }
    else {
      _llseek(hFile,0,2);
    }
    if (hFile == -1) {
      return local_8;
    }
    UVar3 = lstrlenA(acStack_209 + 1);
    _lwrite(hFile,(LPCCH)local_308,UVar3);
  }
  _lclose(hFile);
  return local_8;
}


/*
 * FUN_0040a6db at 0040a6db
 * bool __cdecl FUN_0040a6db(LPCSTR param_1, DWORD param_2)
 * Address ranges: 0040a6db-0040a6fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_0040a6db(LPCSTR param_1,DWORD param_2)

{
  BOOL BVar1;
  
  if (param_2 == 0) {
    param_2 = 0x80;
  }
  BVar1 = SetFileAttributesA(param_1,param_2);
  return (bool)('\x01' - (BVar1 != 0));
}


/*
 * FUN_0040a6fe at 0040a6fe
 * bool __cdecl FUN_0040a6fe(LPCSTR param_1, undefined4 param_2, LPSTR param_3)
 * Address ranges: 0040a6fe-0040a73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_0040a6fe(LPCSTR param_1,undefined4 param_2,LPSTR param_3)

{
  HANDLE pvVar1;
  
  pvVar1 = FindFirstFileA(param_1,(LPWIN32_FIND_DATAA)(param_3 + 0x108));
  *(HANDLE *)(param_3 + 0x104) = pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    lstrcpyA(param_3,param_3 + 0x134);
    *(DWORD *)(param_3 + 0x100) = ((LPWIN32_FIND_DATAA)(param_3 + 0x108))->dwFileAttributes;
  }
  return pvVar1 == (HANDLE)0xffffffff;
}


/*
 * FUN_0040a740 at 0040a740
 * bool __cdecl FUN_0040a740(LPSTR param_1)
 * Address ranges: 0040a740-0040a77c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_0040a740(LPSTR param_1)

{
  BOOL BVar1;
  
  BVar1 = FindNextFileA(*(HANDLE *)(param_1 + 0x104),(LPWIN32_FIND_DATAA)(param_1 + 0x108));
  if (BVar1 != 0) {
    lstrcpyA(param_1,param_1 + 0x134);
    *(DWORD *)(param_1 + 0x100) = ((LPWIN32_FIND_DATAA)(param_1 + 0x108))->dwFileAttributes;
  }
  return BVar1 == 0;
}


/*
 * FUN_0040a77d at 0040a77d
 * undefined __cdecl FUN_0040a77d(int param_1)
 * Address ranges: 0040a77d-0040a793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040a77d(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x104) != (HANDLE)0xffffffff) {
    FindClose(*(HANDLE *)(param_1 + 0x104));
  }
  return;
}


/*
 * FUN_0040a794 at 0040a794
 * undefined __cdecl FUN_0040a794(uint * param_1, int param_2)
 * Address ranges: 0040a794-0040a932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040a794(uint *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  void *extraout_ECX;
  uint *lpString2;
  uint *lpString1;
  void *this;
  undefined *this_00;
  CHAR local_348 [256];
  CHAR local_248 [568];
  char local_10 [16];
  
  pCVar3 = FUN_0040be4c((LPCSTR)param_1,0x7e);
  if (((pCVar3 != (LPCSTR)0x0) || (param_2 == 0)) && (DAT_004136b0 != 0)) {
    this = (void *)0x5c;
    pCVar3 = FUN_0040be4c((LPCSTR)param_1,0x5c);
    if (pCVar3 == (LPCSTR)0x0) {
      lstrcpyA(local_348,(LPCSTR)param_1);
      FUN_0040bf2e(param_1,0x100);
      iVar4 = lstrlenA((LPCSTR)param_1);
      if (*(char *)(iVar4 + -1 + (int)param_1) != '\\') {
        lstrcatA((LPSTR)param_1,&DAT_004120e0);
      }
      lstrcatA((LPSTR)param_1,local_348);
      this = extraout_ECX;
    }
    if (DAT_0041311c < 2) {
      uVar5 = *(ushort *)(PTR_DAT_00412f10 + (char)*param_1 * 2) & 0x103;
      this_00 = PTR_DAT_00412f10;
    }
    else {
      this_00 = (undefined *)0x103;
      uVar5 = FUN_0040c27e(this,(int)(char)*param_1,0x103);
    }
    if ((uVar5 != 0) && (*(char *)((int)param_1 + 1) == ':')) {
      uVar5 = FUN_0040c0a8(this_00,(int)(char)*param_1);
      *(char *)param_1 = (char)uVar5;
    }
    lpString1 = param_1;
    if ((char)*param_1 != '\\') goto LAB_0040a881;
    if (*(char *)((int)param_1 + 1) != '\\') goto LAB_0040a881;
    for (lpString1 = (uint *)((int)param_1 + 2);
        ((char)*lpString1 != '\0' && ((char)*lpString1 != '\\'));
        lpString1 = (uint *)((int)lpString1 + 1)) {
    }
    if ((char)*lpString1 != '\\') goto LAB_0040a881;
    do {
      lpString1 = (uint *)((int)lpString1 + 1);
LAB_0040a881:
    } while (((char)*lpString1 != '\0') && ((char)*lpString1 != '\\'));
    if ((char)*lpString1 == '\\') {
      lpString1 = (uint *)((int)lpString1 + 1);
    }
    cVar1 = (char)*lpString1;
    while (lpString2 = lpString1, cVar1 != '\0') {
      while ((cVar1 != '\0' && (cVar1 != '\\'))) {
        cVar1 = *(char *)((int)lpString2 + 1);
        lpString2 = (uint *)((int)lpString2 + 1);
      }
      lstrcpyA(local_348,(LPCSTR)lpString2);
      *(CHAR *)lpString2 = '\0';
      bVar2 = FUN_0040a6fe((LPCSTR)param_1,0x17,local_248);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        if ((param_2 != 0) || (pCVar3 = local_10, (bool)local_10[0] == bVar2)) {
          pCVar3 = local_248;
        }
        lstrcpyA((LPSTR)lpString1,pCVar3);
        FUN_0040a77d((int)local_248);
      }
      iVar4 = lstrlenA((LPCSTR)param_1);
      lpString1 = (uint *)(iVar4 + (int)param_1);
      lstrcatA((LPSTR)param_1,local_348);
      if ((char)*lpString1 == '\\') {
        lpString1 = (uint *)((int)lpString1 + 1);
      }
      cVar1 = (char)*lpString1;
    }
  }
  return;
}


/*
 * FUN_0040a933 at 0040a933
 * int __cdecl FUN_0040a933(LPCSTR param_1)
 * Address ranges: 0040a933-0040a948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040a933(LPCSTR param_1)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesA(param_1);
  return (DVar1 != 0xffffffff) - 1;
}


/*
 * FUN_0040a949 at 0040a949
 * undefined4 __cdecl FUN_0040a949(LPCSTR param_1)
 * Address ranges: 0040a949-0040a9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040a949(LPCSTR param_1)

{
  HFILE hFile;
  uint local_10c [64];
  LONG local_c;
  undefined4 local_8;
  
  lstrcpyA((LPSTR)local_10c,param_1);
  FUN_0040a794(local_10c,0);
  local_8 = 0;
  if (DAT_004136b0 != 0) {
    hFile = _lopen(param_1,0);
    if (-1 < hFile) {
      _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
      if (param_1._2_2_ == 0x5a4d) {
        _llseek(hFile,0x3c,0);
        _lread(hFile,&local_c,4);
        _llseek(hFile,local_c,0);
        _lread(hFile,(LPVOID)((int)&param_1 + 2),2);
        if (param_1._2_2_ == 0x4550) {
          local_8 = 1;
        }
      }
      _lclose(hFile);
    }
  }
  return local_8;
}


/*
 * FUN_0040a9ec at 0040a9ec
 * undefined __cdecl FUN_0040a9ec(HWND param_1)
 * Address ranges: 0040a9ec-0040ab02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040a9ec(HWND param_1)

{
  HANDLE h;
  int iVar1;
  HDC hdc;
  int nDenominator;
  LOGFONTA local_50;
  tagRECT local_14;
  
  GetWindowRect(param_1,&local_14);
  local_14.left = local_14.left + local_14.left / 6;
  local_14.right = local_14.right + local_14.right / 6;
  MoveWindow(param_1,local_14.left,local_14.top,local_14.right - local_14.left,
             local_14.bottom - local_14.top,0);
  if ((DAT_004136ec != 0) && (DAT_00413ab8 != (code *)0x0)) {
    (*DAT_00413ab8)(param_1,0x38);
  }
  if (DAT_00413b08 == (HFONT)0x0) {
    DAT_00413b08 = (HFONT)0x0;
    h = (HANDLE)SendMessageA(param_1,0x31,0,0);
    if ((h != (HANDLE)0x0) && (iVar1 = GetObjectA(h,0x3c,&local_50), iVar1 != 0)) {
      local_50.lfWeight = 300;
      local_50.lfCharSet = DAT_004136e4;
      hdc = GetDC(param_1);
      nDenominator = 0x48;
      iVar1 = GetDeviceCaps(hdc,0x5a);
      local_50.lfHeight = MulDiv((uint)DAT_00413740,iVar1,nDenominator);
      local_50.lfHeight = -local_50.lfHeight;
      ReleaseDC(param_1,hdc);
      if (DAT_0041369c != (LPCSTR)0x0) {
        lstrcpyA(local_50.lfFaceName,DAT_0041369c);
      }
      DAT_00413b08 = CreateFontIndirectA(&local_50);
    }
    if (DAT_00413b08 == (HFONT)0x0) {
      return;
    }
  }
  EnumChildWindows(param_1,FUN_0040ab03,(LPARAM)DAT_00413b08);
  return;
}


/*
 * FUN_0040ab03 at 0040ab03
 * undefined4 __stdcall FUN_0040ab03(HWND param_1, WPARAM param_2)
 * Address ranges: 0040ab03-0040ab9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_0040ab03(HWND param_1,WPARAM param_2)

{
  HWND hWnd;
  tagRECT local_24;
  tagPOINT local_14;
  tagPOINT local_c;
  
  GetWindowRect(param_1,&local_24);
  hWnd = GetParent(param_1);
  local_c.x = local_24.left;
  local_c.y = local_24.top;
  ScreenToClient(hWnd,&local_c);
  local_14.x = local_24.right;
  local_14.y = local_24.bottom;
  ScreenToClient(hWnd,&local_14);
  local_c.x = local_c.x + local_c.x / 6;
  local_14.x = local_14.x + local_14.x / 6;
  MoveWindow(param_1,local_c.x,local_c.y,local_14.x - local_c.x,local_14.y - local_c.y,0);
  SendMessageA(param_1,0x30,param_2,0);
  return 1;
}


/*
 * FUN_0040ab9d at 0040ab9d
 * DWORD __cdecl FUN_0040ab9d(HINSTANCE param_1, UINT param_2, LPCSTR param_3, DWORD param_4)
 * Address ranges: 0040ab9d-0040ac68
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


DWORD __cdecl FUN_0040ab9d(HINSTANCE param_1,UINT param_2,LPCSTR param_3,DWORD param_4)

{
  DWORD DVar1;
  LPSTR lpString1;
  LPCSTR pCVar2;
  CHAR local_224 [512];
  CHAR local_24 [32];
  
  wsprintfA(local_24,s_Msg_d_004127b0,param_2);
  DVar1 = GetPrivateProfileStringA
                    (s_Language_004127a0,local_24,&DAT_004127ac,param_3,param_4,DAT_00413abc);
  if ((*param_3 == '\x7f') && (DVar1 == 1)) {
    LoadStringA(param_1,param_2,param_3,param_4);
  }
  else {
    lpString1 = FUN_0040be4c(param_3,0x7c);
    while (lpString1 != (LPSTR)0x0) {
      lstrcpyA(local_224,lpString1 + 1);
      lstrcpyA(lpString1,&DAT_0041279c);
      lstrcpyA(lpString1 + 2,local_224);
      lpString1 = FUN_0040be4c(param_3,0x7c);
    }
    pCVar2 = FUN_0040be4c(param_3,0x7e);
    while (pCVar2 != (LPCSTR)0x0) {
      *pCVar2 = ' ';
      pCVar2 = FUN_0040be4c(param_3,0x7e);
    }
  }
  return DVar1;
}


/*
 * FUN_0040ac69 at 0040ac69
 * undefined __cdecl FUN_0040ac69(LPCSTR param_1)
 * Address ranges: 0040ac69-0040acbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040ac69(LPCSTR param_1)

{
  SC_HANDLE hSCManager;
  SC_HANDLE hService;
  _SERVICE_STATUS local_20;
  
  hSCManager = OpenSCManagerA((LPCSTR)0x0,(LPCSTR)0x0,1);
  if (hSCManager != (SC_HANDLE)0x0) {
    hService = OpenServiceA(hSCManager,param_1,0x10020);
    if (hService != (SC_HANDLE)0x0) {
      ControlService(hService,1,&local_20);
      DeleteService(hService);
      CloseServiceHandle(hService);
    }
    CloseServiceHandle(hSCManager);
  }
  return;
}


/*
 * FUN_0040acbe at 0040acbe
 * undefined __cdecl FUN_0040acbe(char * param_1)
 * Address ranges: 0040acbe-0040af6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040acbe(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  UINT uBytes;
  UINT UVar5;
  byte *pbVar6;
  char *pcVar7;
  CHAR local_528 [260];
  CHAR local_424 [250];
  CHAR aCStack_32a [10];
  CHAR local_320 [260];
  byte local_21c [259];
  char acStack_119 [261];
  int local_14;
  HFILE local_10;
  int local_c;
  HFILE local_8;
  
  GetWindowsDirectoryA(local_424,0x104);
  lstrcatA(local_424,s__SYSTEM_INI_004127dc);
  lstrcpyA(local_320,local_424);
  pcVar7 = s__GLBS383_TMP_004127cc;
  iVar3 = lstrlenA(local_320);
  lstrcpyA(aCStack_32a + iVar3,pcVar7);
  local_8 = _lopen(local_424,0);
  if (local_8 != -1) {
    local_10 = _lcreat(local_320,0);
    if (local_10 == -1) {
      _lclose(local_8);
    }
    else {
      local_c = 0;
      local_14 = 0;
      _memset(DAT_00413684,0,0x4000);
      DAT_00413aa4 = 0;
      DAT_0041376c = 0;
      GetSystemDirectoryA(acStack_119 + 1,0x104);
      iVar3 = lstrlenA(acStack_119 + 1);
      if (acStack_119[iVar3] != '\\') {
        lstrcatA(acStack_119 + 1,&DAT_004120e0);
      }
      pvVar4 = (void *)lstrlenA(acStack_119 + 1);
      iVar3 = FUN_0040f730((byte *)(acStack_119 + 1),param_1,pvVar4);
      pcVar7 = param_1;
      if (iVar3 == 0) {
        iVar3 = lstrlenA(acStack_119 + 1);
        pcVar7 = param_1 + iVar3;
      }
      lstrcpyA(acStack_119 + 1,pcVar7);
      do {
        iVar3 = FUN_00406b07((char *)local_21c,0x104,local_8,1);
        if (iVar3 == 0) {
          _lclose(local_8);
          _lclose(local_10);
          if (local_14 != 0) {
            FUN_0040a440(local_424);
            FUN_0040c888(local_320,local_424);
            return;
          }
          goto LAB_0040af21;
        }
        pbVar6 = local_21c;
        bVar2 = local_21c[0];
        while ((bVar2 != 0 && ((bVar2 == 0x20 || (bVar2 == 9))))) {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar1;
        }
        if (local_c == 0) {
          iVar3 = FUN_0040f730(pbVar6,s__386Enh__004127b8,(void *)0x8);
          if (iVar3 == 0) {
            local_c = 1;
          }
        }
        else if (*pbVar6 == 0x5b) {
          local_c = 0;
        }
        else {
          iVar3 = FUN_0040f730(pbVar6,s_device__004127c4,(void *)0x7);
          if (iVar3 == 0) {
            iVar3 = lstrcmpiA((LPCSTR)(pbVar6 + 7),acStack_119 + 1);
            if ((iVar3 == 0) || (iVar3 = lstrcmpiA((LPCSTR)(pbVar6 + 7),param_1), iVar3 == 0)) {
              lstrcpyA(local_528,(LPCSTR)local_21c);
              local_21c[0] = 0x3b;
              lstrcpyA((LPSTR)(local_21c + 1),local_528);
              local_14 = 1;
            }
          }
        }
        lstrcatA((LPSTR)local_21c,&DAT_0041279c);
        uBytes = lstrlenA((LPCSTR)local_21c);
        UVar5 = _lwrite(local_10,(LPCCH)local_21c,uBytes);
      } while (UVar5 == uBytes);
      _lclose(local_8);
      _lclose(local_10);
LAB_0040af21:
      FUN_0040a440(local_320);
    }
  }
  return;
}


/*
 * FUN_0040af6d at 0040af6d
 * undefined __stdcall FUN_0040af6d(void)
 * Address ranges: 0040af6d-0040b02b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040af6d(void)

{
  HDC hdc;
  UINT UVar1;
  char local_104 [256];
  
  hdc = GetDC(DAT_00413698);
  GetPrivateProfileStringA
            (s_Settings_00412138,s_Text_Font_00412810,&DAT_004134d0,local_104,0x100,DAT_00413abc);
  if (local_104[0] != '\0') {
    DAT_0041369c = (LPSTR)FUN_0040b671(0x100);
    lstrcpyA(DAT_0041369c,local_104);
  }
  UVar1 = GetPrivateProfileIntA(s_Settings_00412138,s_Font_Character_Set_004127fc,0,DAT_00413abc);
  DAT_004136e4 = (char)UVar1;
  UVar1 = GetPrivateProfileIntA(s_Settings_00412138,s_Font_Character_Size_004127e8,8,DAT_00413abc);
  DAT_00413740 = (char)UVar1;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  DAT_004137a0 = GetDeviceCaps(hdc,8);
  DAT_004137a4 = GetDeviceCaps(hdc,10);
  return;
}


/*
 * FUN_0040b02c at 0040b02c
 * undefined __stdcall FUN_0040b02c(void)
 * Address ranges: 0040b02c-0040b2c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040b02c(void)

{
  char cVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  DWORD DVar4;
  LPCSTR pCVar5;
  UINT uBytes;
  LPCSTR pCVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  CHAR local_148 [256];
  CHAR local_48 [64];
  char *local_8;
  
  if (DAT_004137e0 != '\0') {
    hModule = LoadLibraryA(s_ismif32_dll_00412e94);
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,s_InstallStatusMIF_00412e80);
      if (pFVar2 != (FARPROC)0x0) {
        pcVar8 = s_Uninstall_canceled_by_user_00412e64;
        if (DAT_00413724 == 0) {
          pcVar8 = s_Uninstall_successful_00412e4c;
        }
        iVar3 = (*pFVar2)(&DAT_004137e0,&DAT_00413860,&DAT_004138e0,&DAT_00413960,&DAT_00412e48,
                          &DAT_004139e0,pcVar8,(uint)(DAT_00413724 == 0));
        if (iVar3 != 0) {
          FreeLibrary(hModule);
          return;
        }
      }
      FreeLibrary(hModule);
    }
    GetWindowsDirectoryA(local_148,0x100);
    iVar3 = lstrlenA(local_148);
    if (local_148[iVar3 + -1] != '\\') {
      lstrcatA(local_148,&DAT_004120e0);
    }
    lstrcatA(local_148,&DAT_004137e0);
    local_8 = (char *)_lcreat(local_148,0);
    if (local_8 != (char *)0xffffffff) {
      DVar4 = GetPrivateProfileStringA
                        (s_Language_004127a0,s_Msg1000_00412e40,&DAT_004127ac,DAT_00413b10,0x4000,
                         DAT_00413abc);
      if ((*DAT_00413b10 == '\x7f') && (DVar4 == 1)) {
        lstrcpyA(DAT_00413b10,s_START_COMPONENT_NAME____WORKSTAT_00412858);
      }
      else {
        while (pCVar5 = FUN_0040be4c(DAT_00413b10,0x5e), pCVar5 != (LPCSTR)0x0) {
          pCVar6 = pCVar5;
          if (*pCVar5 == '\0') goto LAB_0040b1db;
          do {
            pCVar6 = pCVar6 + 1;
          } while (*pCVar6 != '\0');
          for (; pCVar5 <= pCVar6; pCVar6 = pCVar6 + -1) {
LAB_0040b1db:
            pCVar6[1] = *pCVar6;
          }
          *pCVar5 = '\r';
          pCVar5[1] = '\n';
        }
      }
      FUN_0040b2ca(local_48);
      cVar1 = *DAT_00413b10;
      pcVar9 = DAT_00413b10;
      pcVar8 = local_8;
      while (cVar1 != '\0') {
        if ((((cVar1 == '%') && (cVar1 = pcVar9[1], '0' < cVar1)) && (cVar1 < '9')) &&
           (pcVar9[2] == '%')) {
          if (cVar1 < '5') {
            pcVar8 = &DAT_004137e0 + (cVar1 + -0x30) * 0x80;
          }
          else if (cVar1 == '5') {
            if (DAT_00413770 == 0) {
              pcVar8 = s_Uninstall_00412840;
            }
            else {
              pcVar8 = s_Rollback_0041284c;
            }
          }
          else if (cVar1 == '6') {
            pcVar8 = local_48;
          }
          else if (cVar1 == '7') {
            if (DAT_00413724 == 0) {
              pcVar8 = s_Success_00412830;
            }
            else {
              pcVar8 = s_Failed_00412838;
            }
          }
          else if ((cVar1 == '8') && (pcVar8 = s_Canceled_by_user_0041281c, DAT_00413724 == 0)) {
            pcVar8 = &DAT_004134d0;
          }
          iVar3 = lstrlenA(pcVar8);
          iVar3 = iVar3 + -3;
          if (iVar3 < 1) {
            if (iVar3 < 0) {
              for (pcVar7 = pcVar9 + 3; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
                pcVar7[iVar3] = *pcVar7;
              }
              pcVar7[iVar3] = '\0';
            }
          }
          else {
            for (pcVar7 = pcVar9 + 3; *pcVar7 != '\0'; pcVar7 = pcVar7 + 1) {
            }
            for (; pcVar9 + 3 <= pcVar7; pcVar7 = pcVar7 + -1) {
              pcVar7[iVar3] = *pcVar7;
            }
          }
          for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + 1) {
            *pcVar9 = *pcVar8;
            pcVar9 = pcVar9 + 1;
          }
          pcVar9 = pcVar9 + -1;
        }
        pcVar7 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar1 = *pcVar7;
      }
      uBytes = lstrlenA(DAT_00413b10);
      _lwrite((HFILE)local_8,DAT_00413b10,uBytes);
      _lclose((HFILE)local_8);
    }
  }
  return;
}


/*
 * FUN_0040b2ca at 0040b2ca
 * undefined __cdecl FUN_0040b2ca(LPSTR param_1)
 * Address ranges: 0040b2ca-0040b30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040b2ca(LPSTR param_1)

{
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  wsprintfA(param_1,s__02d__02d__02d__d__02d_00412ea0,(uint)local_14.wMonth,(uint)local_14.wDay,
            (uint)local_14.wYear % 100,(uint)local_14.wHour,(uint)local_14.wMinute);
  return;
}


/*
 * FUN_0040b30c at 0040b30c
 * CHAR __stdcall FUN_0040b30c(void)
 * Address ranges: 0040b30c-0040b32e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


CHAR FUN_0040b30c(void)

{
  CHAR local_104 [256];
  
  GetTempPathA(0x100,local_104);
  return local_104[0];
}


/*
 * FUN_0040b32f at 0040b32f
 * undefined __cdecl FUN_0040b32f(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 0040b32f-0040b4f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040b32f(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  char *pcVar2;
  int iVar3;
  HFILE hFile;
  UINT uBytes;
  LPCSTR pCVar4;
  CHAR local_504 [512];
  CHAR local_304 [256];
  uint local_204 [63];
  char acStack_105 [257];
  
  BVar1 = CopyFileA(param_1,param_2,0);
  pCVar4 = param_1;
  if (BVar1 == 0) {
    FUN_0040b4fa(local_304,param_2);
    BVar1 = CopyFileA(param_1,local_304,0);
    pCVar4 = param_2;
    if (BVar1 != 0) {
      DAT_004136f4 = 1;
      FUN_00409e3a(param_1);
      lstrcpyA((LPSTR)local_204,local_304);
      lstrcpyA(acStack_105 + 1,param_2);
      FUN_0040a794(local_204,0);
      FUN_0040a794((uint *)(acStack_105 + 1),0);
      if (DAT_004136b0 == 2) {
        WritePrivateProfileStringA
                  (s_rename_00412ed0,acStack_105 + 1,(LPCSTR)local_204,s_WININIT_INI_00412790);
        return;
      }
      if (DAT_004136b0 == 1) {
        MoveFileExA(param_2,(LPCSTR)0x0,4);
        MoveFileExA((LPCSTR)local_204,param_2,4);
        return;
      }
      pcVar2 = FUN_0040b53f(acStack_105 + 1);
      wsprintfA(local_504,s_del__s_rename__s__s_00412eb8,acStack_105 + 1,local_204,pcVar2);
      GetWindowsDirectoryA(acStack_105 + 1,0x100);
      iVar3 = lstrlenA(acStack_105 + 1);
      if (acStack_105[iVar3] != '\\') {
        lstrcatA(acStack_105 + 1,&DAT_004120e0);
      }
      lstrcatA(acStack_105 + 1,s__MSSETUP_BAT_0041275c);
      hFile = _lopen(acStack_105 + 1,1);
      if (hFile == -1) {
        hFile = _lcreat(acStack_105 + 1,0);
      }
      else {
        _llseek(hFile,0,2);
      }
      if (hFile == -1) {
        return;
      }
      uBytes = lstrlenA(local_504);
      _lwrite(hFile,local_504,uBytes);
      _lclose(hFile);
      return;
    }
  }
  FUN_00409e3a(pCVar4);
  return;
}


/*
 * FUN_0040b4fa at 0040b4fa
 * undefined __cdecl FUN_0040b4fa(LPSTR param_1, LPCSTR param_2)
 * Address ranges: 0040b4fa-0040b53e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040b4fa(LPSTR param_1,LPCSTR param_2)

{
  char *pcVar1;
  int iVar2;
  
  do {
    lstrcpyA(param_1,param_2);
    pcVar1 = FUN_0040b53f(param_1);
    wsprintfA(pcVar1,s__GLU_04x_TMP_00412ed8,(uint)(ushort)DAT_00413704);
    DAT_00413704 = DAT_00413704 + 1;
    iVar2 = FUN_0040a933(param_1);
  } while (iVar2 == 0);
  return;
}


/*
 * FUN_0040b53f at 0040b53f
 * char * __cdecl FUN_0040b53f(LPCSTR param_1)
 * Address ranges: 0040b53f-0040b560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


char * __cdecl FUN_0040b53f(LPCSTR param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = lstrlenA(param_1);
  for (pcVar2 = param_1 + iVar1; (param_1 < pcVar2 && (*pcVar2 != '\\')); pcVar2 = pcVar2 + -1) {
  }
  if (*pcVar2 == '\\') {
    pcVar2 = pcVar2 + 1;
  }
  return pcVar2;
}


/*
 * FUN_0040b561 at 0040b561
 * undefined __cdecl FUN_0040b561(LPCSTR param_1)
 * Address ranges: 0040b561-0040b670
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0040b561(LPCSTR param_1)

{
  int iVar1;
  HFILE hFile;
  UINT uBytes;
  CHAR local_304 [511];
  char acStack_105 [257];
  
  if (DAT_004136b0 == 2) {
    GetWindowsDirectoryA(acStack_105 + 1,0x100);
    iVar1 = lstrlenA(acStack_105 + 1);
    if (acStack_105[iVar1] != '\\') {
      lstrcatA(acStack_105 + 1,&DAT_004120e0);
    }
    lstrcatA(acStack_105 + 1,s_WININIT_INI_00412790);
    hFile = _lopen(acStack_105 + 1,1);
    if (hFile == -1) {
      hFile = _lcreat(acStack_105 + 1,0);
      if (hFile == -1) {
        return;
      }
      wsprintfA(local_304,s__rename__NUL__s_00412ee8,param_1);
      uBytes = lstrlenA(local_304);
    }
    else {
      wsprintfA(local_304,s_NUL__s_00412778,param_1);
      _llseek(hFile,0,2);
      uBytes = lstrlenA(local_304);
    }
    _lwrite(hFile,local_304,uBytes);
    _lclose(hFile);
  }
  else {
    MoveFileExA(param_1,(LPCSTR)0x0,4);
  }
  return;
}


/*
 * FUN_0040b671 at 0040b671
 * undefined4 * __cdecl FUN_0040b671(uint param_1)
 * Address ranges: 0040b671-0040b6f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_0040b671(uint param_1)

{
  size_t _Size;
  undefined4 *puVar1;
  
  if (DAT_0041377c == (undefined4 *)0x0) {
    DAT_0041377c = _malloc(0xfc00);
    DAT_00413ac8 = DAT_0041377c;
    *DAT_0041377c = 0;
  }
  else {
    _Size = 0xfc00;
    if ((int)param_1 <= 0xfc00 - DAT_00413708) {
      puVar1 = (undefined4 *)((int)DAT_00413ac8 + DAT_00413708);
      DAT_00413708 = DAT_00413708 + param_1;
      return puVar1;
    }
    if (0xfc00 < param_1) {
      _Size = param_1 + 4;
    }
    puVar1 = _malloc(_Size);
    *DAT_00413ac8 = puVar1;
    DAT_00413ac8 = puVar1;
    *puVar1 = 0;
  }
  DAT_00413708 = param_1 + 4;
  return DAT_00413ac8 + 1;
}


/*
 * FUN_0040b6fa at 0040b6fa
 * undefined __stdcall FUN_0040b6fa(void)
 * Address ranges: 0040b6fa-0040b714
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040b6fa(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0041377c;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_0040c92a(puVar2);
    puVar2 = puVar1;
  }
  return;
}


/*
 * FUN_0040b715 at 0040b715
 * uint __cdecl FUN_0040b715(char * param_1, char * param_2)
 * Address ranges: 0040b715-0040b792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_0040b715(char *param_1,char *param_2)

{
  char cVar1;
  void *this;
  uint uVar2;
  uint uVar3;
  void *this_00;
  void *this_01;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (pcVar4 = param_2, cVar1 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  for (; *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
  }
  pcVar5 = pcVar5 + -1;
  pcVar4 = pcVar4 + -1;
  if (param_1 <= pcVar5) {
    do {
      if (pcVar4 < param_2) break;
      this = (void *)(int)*pcVar5;
      uVar2 = FUN_0040c0a8(param_1,(uint)this);
      uVar3 = FUN_0040c0a8(this_00,(int)*pcVar4);
      if (uVar2 != uVar3) {
        uVar2 = FUN_0040c0a8(this,(int)*pcVar5);
        uVar3 = FUN_0040c0a8(this_01,(int)*pcVar4);
        return uVar2 - uVar3;
      }
      pcVar5 = pcVar5 + -1;
      pcVar4 = pcVar4 + -1;
    } while (param_1 <= pcVar5);
    if (param_1 <= pcVar5) {
      return 0xffffffff;
    }
  }
  return (uint)(param_2 <= pcVar4);
}


/*
 * FUN_0040b793 at 0040b793
 * int * __cdecl FUN_0040b793(int * param_1, int * param_2, uint param_3, int param_4, char * param_5, LPCSTR param_6, LPCSTR param_7)
 * Address ranges: 0040b793-0040b863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl
FUN_0040b793(int *param_1,int *param_2,uint param_3,int param_4,char *param_5,LPCSTR param_6,
            LPCSTR param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  if (param_4 == 0) {
    if (param_1 != (int *)0x0) {
      puVar1 = FUN_0040b671(param_3);
      *param_1 = (int)puVar1;
      puVar1[1] = 0;
      *(undefined4 *)*param_1 = 0;
    }
    return (int *)0x0;
  }
  do {
    piVar4 = param_2;
    uVar2 = FUN_0040b715((char *)(piVar4 + 2),param_5);
    bVar5 = (int)uVar2 < 0;
    if (uVar2 == 0) {
      if (param_6 != (LPCSTR)0x0) {
        iVar3 = lstrcmpiA((LPCSTR)(piVar4 + 0x43),param_6);
        bVar5 = iVar3 < 0;
        if (iVar3 != 0) goto LAB_0040b807;
      }
      if (param_7 == (LPCSTR)0x0) {
        return piVar4;
      }
      iVar3 = lstrcmpiA((LPCSTR)(piVar4 + 0x83),param_7);
      bVar5 = iVar3 < 0;
      if (iVar3 == 0) {
        return piVar4;
      }
    }
LAB_0040b807:
    if (bVar5) {
      param_2 = (int *)*piVar4;
      if ((int *)*piVar4 == (int *)0x0) {
        if (param_1 == (int *)0x0) {
          return (int *)0x0;
        }
        puVar1 = FUN_0040b671(param_3);
        *param_1 = (int)puVar1;
        puVar1[1] = 0;
        *(undefined4 *)*param_1 = 0;
        *piVar4 = *param_1;
        return (int *)0x0;
      }
    }
    else {
      param_2 = (int *)piVar4[1];
      if ((int *)piVar4[1] == (int *)0x0) {
        if (param_1 != (int *)0x0) {
          puVar1 = FUN_0040b671(param_3);
          *param_1 = (int)puVar1;
          puVar1[1] = 0;
          *(undefined4 *)*param_1 = 0;
          piVar4[1] = *param_1;
          return (int *)0x0;
        }
        return (int *)0x0;
      }
    }
  } while( true );
}


/*
 * FUN_0040b864 at 0040b864
 * undefined __cdecl FUN_0040b864(HDC param_1, HWND param_2)
 * Address ranges: 0040b864-0040bbab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040b864(HDC param_1,HWND param_2)

{
  int hDest;
  HWND hWnd;
  DWORD color;
  HDC hdc;
  uint uVar1;
  int wDest;
  int local_104 [48];
  RECT local_44;
  tagRECT local_34;
  HGDIOBJ local_24;
  tagPOINT local_20;
  tagPOINT local_18;
  HBRUSH local_10;
  uint local_c;
  HBITMAP local_8;
  
  local_104[0] = 99;
  local_104[1] = 99;
  local_104[2] = 0;
  local_104[3] = 10;
  local_104[4] = 5;
  local_104[7] = 6;
  local_104[5] = 8;
  local_104[6] = 8;
  local_104[0xb] = 2;
  local_104[0xd] = 2;
  local_104[0xf] = 2;
  local_104[0x11] = 2;
  local_104[0x13] = 2;
  local_104[0x1d] = 2;
  local_104[8] = 0xe;
  local_104[9] = 5;
  local_104[10] = 0x13;
  local_104[0xc] = 0x1a;
  local_104[0xe] = 0x1e;
  local_104[0x10] = 0x26;
  local_104[0x12] = 0x2a;
  local_104[0x14] = 0x32;
  local_104[0x15] = 0;
  local_104[0x16] = 0x39;
  local_104[0x17] = 0;
  local_104[0x18] = 0x3e;
  local_104[0x19] = 0;
  local_104[0x1a] = 0x48;
  local_104[0x1b] = 0;
  local_104[0x1c] = 0x4e;
  local_104[0x1e] = 0x57;
  local_104[0x1f] = 3;
  local_104[0x20] = 0x5e;
  local_104[0x21] = 4;
  local_104[0x22] = 0x66;
  local_104[0x23] = 8;
  local_104[0x24] = 0x6e;
  local_104[0x25] = 10;
  local_104[0x26] = 0x72;
  local_104[0x27] = 0xb;
  local_104[0x28] = 0x76;
  local_104[0x29] = 0xd;
  local_104[0x2a] = 0x79;
  local_104[0x2b] = 5;
  local_104[0x2c] = 0x7e;
  local_104[0x2d] = 0x10;
  local_104[0x2e] = 0x7e;
  local_104[0x2f] = 0x11;
  hWnd = GetDlgItem(param_2,0x3ee);
  if (hWnd != (HWND)0x0) {
    GetWindowRect(hWnd,&local_34);
    local_18.x = local_34.left;
    local_18.y = local_34.top;
    local_20.x = local_34.right;
    local_20.y = local_34.bottom;
    ScreenToClient(param_2,&local_18);
    ScreenToClient(param_2,&local_20);
    DAT_00413a70 = local_18.x;
    DAT_00413a74 = local_18.y;
    DAT_00413a78 = local_20.x;
    DAT_00413a7c = local_20.y;
    color = GetSysColor(0xf);
    local_10 = CreateSolidBrush(color);
    local_c = GetDialogBaseUnits();
    local_8 = CreateCompatibleBitmap
                        (param_1,(DAT_00413a78 - DAT_00413a70) + 1,(DAT_00413a7c - DAT_00413a74) + 1
                        );
    if (local_8 != (HBITMAP)0x0) {
      hdc = CreateCompatibleDC(param_1);
      if (hdc != (HDC)0x0) {
        local_24 = SelectObject(hdc,local_8);
        local_44.left = 0;
        local_44.top = 0;
        local_44.right = (DAT_00413a78 - DAT_00413a70) + 1;
        local_44.bottom = (DAT_00413a7c - DAT_00413a74) + 1;
        FillRect(hdc,&local_44,local_10);
        uVar1 = local_c >> 0x10;
        DrawIcon(hdc,0,(uVar1 * 10) / 8,DAT_00413b20);
        if (DAT_00412060 < 0x18) {
          DrawIcon(hdc,(int)(local_104[DAT_00412060 * 2] * (local_c & 0xffff)) / 4,
                   (int)(local_104[DAT_00412060 * 2 + 1] * uVar1) / 8,(&DAT_00413b20)[DAT_00412060])
          ;
        }
        hDest = (DAT_00413a7c - DAT_00413a74) + 1;
        wDest = (DAT_00413a78 - DAT_00413a70) + 1;
        StretchBlt(param_1,DAT_00413a70,DAT_00413a74,wDest,hDest,hdc,0,0,wDest,hDest,0xcc0020);
        SelectObject(hdc,local_24);
        DeleteObject(local_8);
        DeleteObject(local_10);
        DeleteDC(hdc);
      }
    }
  }
  return;
}


/*
 * FUN_0040bbac at 0040bbac
 * HBITMAP __cdecl FUN_0040bbac(uint param_1, undefined4 * param_2)
 * Address ranges: 0040bbac-0040bc45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


HBITMAP __cdecl FUN_0040bbac(uint param_1,undefined4 *param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HPALETTE hPal;
  HBITMAP pHVar1;
  
  pHVar1 = (HBITMAP)0x0;
  hResInfo = FindResourceA(DAT_00413a90,(LPCSTR)(param_1 & 0xffff),(LPCSTR)0x2);
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(DAT_00413a90,hResInfo);
    pbmi = LockResource(hResData);
    hdc = GetDC((HWND)0x0);
    hPal = FUN_0040bc46((int)pbmi,(WORD *)&param_1);
    *param_2 = hPal;
    if (hPal != (HPALETTE)0x0) {
      SelectPalette(hdc,hPal,0);
      RealizePalette(hdc);
    }
    pHVar1 = CreateDIBitmap(hdc,pbmi,4,(void *)((int)&pbmi->biSize + pbmi->biSize + param_1 * 4),
                            (BITMAPINFO *)pbmi,0);
    ReleaseDC((HWND)0x0,hdc);
    FreeResource(hResData);
  }
  return pHVar1;
}


/*
 * FUN_0040bc46 at 0040bc46
 * HPALETTE __cdecl FUN_0040bc46(int param_1, WORD * param_2)
 * Address ranges: 0040bc46-0040bcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


HPALETTE __cdecl FUN_0040bc46(int param_1,WORD *param_2)

{
  HGLOBAL hMem;
  LOGPALETTE *plpal;
  int iVar1;
  BYTE *pBVar2;
  BYTE *pBVar3;
  HPALETTE pHVar4;
  
  pHVar4 = (HPALETTE)0x0;
  if (*(ushort *)(param_1 + 0xe) < 9) {
    *(int *)param_2 = 1 << ((byte)*(ushort *)(param_1 + 0xe) & 0x1f);
  }
  else {
    param_2[0] = 0;
    param_2[1] = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *(int *)param_2 = *(int *)(param_1 + 0x20);
  }
  if (*(int *)param_2 != 0) {
    hMem = GlobalAlloc(0x42,*(int *)param_2 * 4 + 8);
    plpal = GlobalLock(hMem);
    plpal->palVersion = 0x300;
    plpal->palNumEntries = *param_2;
    iVar1 = 0;
    if (0 < *(int *)param_2) {
      pBVar2 = &plpal->palPalEntry[0].peGreen;
      pBVar3 = (BYTE *)(param_1 + 0x29);
      do {
        ((PALETTEENTRY *)(pBVar2 + -1))->peRed = pBVar3[1];
        *pBVar2 = *pBVar3;
        pBVar2[1] = pBVar3[-1];
        pBVar2[2] = '\0';
        iVar1 = iVar1 + 1;
        pBVar3 = pBVar3 + 4;
        pBVar2 = pBVar2 + 4;
      } while (iVar1 < *(int *)param_2);
    }
    pHVar4 = CreatePalette(plpal);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  return pHVar4;
}


/*
 * FUN_0040bcf0 at 0040bcf0
 * undefined __stdcall FUN_0040bcf0(void)
 * Address ranges: 0040bcf0-0040bd4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040bcf0(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while (DAT_00413694 != (HWND)0x0) {
    if (DAT_00413718 != 0) {
      DestroyWindow(DAT_00413694);
    }
    while (BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,1), BVar1 != 0) {
      TranslateMessage(&local_20);
      DispatchMessageA(&local_20);
    }
  }
  return;
}


/*
 * FUN_0040bd4d at 0040bd4d
 * uint __cdecl FUN_0040bd4d(byte * param_1, int param_2)
 * Address ranges: 0040bd4d-0040bd9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_0040bd4d(byte *param_1,int param_2)

{
  if (param_1 == (byte *)0x0) {
    DAT_004136d8 = 0xffffffff;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      DAT_004136d8 = DAT_004136d8 >> 8 ^
                     *(uint *)(DAT_004136e0 + (DAT_004136d8 & 0xff ^ (uint)*param_1) * 4);
      param_1 = param_1 + 1;
    }
  }
  return ~DAT_004136d8;
}


/*
 * FUN_0040bd9b at 0040bd9b
 * undefined __cdecl FUN_0040bd9b(undefined4 param_1, undefined4 param_2)
 * Address ranges: 0040bd9b-0040be02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040bd9b(undefined4 param_1,undefined4 param_2)

{
  BOOL BVar1;
  CHAR local_258 [512];
  _STARTUPINFOA local_58;
  _PROCESS_INFORMATION local_14;
  
  _memset(&local_58,0,0x44);
  local_58.cb = 0x44;
  wsprintfA(local_258,s___s___s_00412efc,param_1,param_2);
  BVar1 = CreateProcessA((LPCSTR)0x0,local_258,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0
                         ,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_58,&local_14);
  if (BVar1 != 0) {
    WaitForSingleObject(local_14.hProcess,0xffffffff);
  }
  return;
}


/*
 * FUN_0040be03 at 0040be03
 * undefined __cdecl FUN_0040be03(LPCSTR param_1)
 * Address ranges: 0040be03-0040be4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040be03(LPCSTR param_1)

{
  char cVar1;
  LPCSTR lpsz;
  
  lpsz = FUN_0040be4c(param_1,0x5c);
  if (lpsz != (LPCSTR)0x0) {
    while (cVar1 = *lpsz, cVar1 != '\0') {
      do {
        if (cVar1 == '\\') break;
        lpsz = CharNextA(lpsz);
        cVar1 = *lpsz;
      } while (cVar1 != '\0');
      if (*lpsz == '\\') {
        *lpsz = '\0';
        CreateDirectoryA(param_1,(LPSECURITY_ATTRIBUTES)0x0);
        *lpsz = '\\';
        lpsz = lpsz + 1;
      }
    }
  }
  return;
}


/*
 * FUN_0040be4c at 0040be4c
 * LPCSTR __cdecl FUN_0040be4c(LPCSTR param_1, int param_2)
 * Address ranges: 0040be4c-0040be6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPCSTR __cdecl FUN_0040be4c(LPCSTR param_1,int param_2)

{
  while( true ) {
    if (*param_1 == '\0') {
      return (LPCSTR)0x0;
    }
    if (*param_1 == param_2) break;
    param_1 = CharNextA(param_1);
  }
  return param_1;
}


/*
 * USER32.DLL::DdeUninitialize at 0040be6c
 * BOOL __stdcall DdeUninitialize(DWORD idInst)
 * Address ranges: 0040be6c-0040be71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeUninitialize
 */


BOOL DdeUninitialize(DWORD idInst)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeUninitialize(idInst);
  return BVar1;
}


/*
 * USER32.DLL::DdeDisconnect at 0040be72
 * BOOL __stdcall DdeDisconnect(HCONV hConv)
 * Address ranges: 0040be72-0040be77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeDisconnect
 */


BOOL DdeDisconnect(HCONV hConv)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeDisconnect(hConv);
  return BVar1;
}


/*
 * USER32.DLL::DdeFreeDataHandle at 0040be78
 * BOOL __stdcall DdeFreeDataHandle(HDDEDATA hData)
 * Address ranges: 0040be78-0040be7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeFreeDataHandle
 */


BOOL DdeFreeDataHandle(HDDEDATA hData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DdeFreeDataHandle(hData);
  return BVar1;
}


/*
 * USER32.DLL::DdeGetData at 0040be7e
 * DWORD __stdcall DdeGetData(HDDEDATA hData, LPBYTE pDst, DWORD cbMax, DWORD cbOff)
 * Address ranges: 0040be7e-0040be83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeGetData
 */


DWORD DdeGetData(HDDEDATA hData,LPBYTE pDst,DWORD cbMax,DWORD cbOff)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = DdeGetData(hData,pDst,cbMax,cbOff);
  return DVar1;
}


/*
 * USER32.DLL::DdeClientTransaction at 0040be84
 * HDDEDATA __stdcall DdeClientTransaction(LPBYTE pData, DWORD cbData, HCONV hConv, HSZ hszItem, UINT wFmt, UINT wType, DWORD dwTimeout, LPDWORD pdwResult)
 * Address ranges: 0040be84-0040be89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeClientTransaction
 */


HDDEDATA DdeClientTransaction
                   (LPBYTE pData,DWORD cbData,HCONV hConv,HSZ hszItem,UINT wFmt,UINT wType,
                   DWORD dwTimeout,LPDWORD pdwResult)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeClientTransaction(pData,cbData,hConv,hszItem,wFmt,wType,dwTimeout,pdwResult);
  return pHVar1;
}


/*
 * USER32.DLL::DdeConnect at 0040be8a
 * HCONV __stdcall DdeConnect(DWORD idInst, HSZ hszService, HSZ hszTopic, PCONVCONTEXT pCC)
 * Address ranges: 0040be8a-0040be8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeConnect
 */


HCONV DdeConnect(DWORD idInst,HSZ hszService,HSZ hszTopic,PCONVCONTEXT pCC)

{
  HCONV pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeConnect(idInst,hszService,hszTopic,pCC);
  return pHVar1;
}


/*
 * USER32.DLL::DdeCreateStringHandleA at 0040be90
 * HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
 * Address ranges: 0040be90-0040be95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeCreateStringHandleA
 */


HSZ DdeCreateStringHandleA(DWORD idInst,LPCSTR psz,int iCodePage)

{
  HSZ pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateStringHandleA(idInst,psz,iCodePage);
  return pHVar1;
}


/*
 * USER32.DLL::DdeInitializeA at 0040be96
 * UINT __stdcall DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)
 * Address ranges: 0040be96-0040be9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeInitializeA
 */


UINT DdeInitializeA(LPDWORD pidInst,PFNCALLBACK pfnCallback,DWORD afCmd,DWORD ulRes)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = DdeInitializeA(pidInst,pfnCallback,afCmd,ulRes);
  return UVar1;
}


/*
 * USER32.DLL::DdeCreateDataHandle at 0040be9c
 * HDDEDATA __stdcall DdeCreateDataHandle(DWORD idInst, LPBYTE pSrc, DWORD cb, DWORD cbOff, HSZ hszItem, UINT wFmt, UINT afCmd)
 * Address ranges: 0040be9c-0040bea1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DdeCreateDataHandle
 */


HDDEDATA DdeCreateDataHandle(DWORD idInst,LPBYTE pSrc,DWORD cb,DWORD cbOff,HSZ hszItem,UINT wFmt,
                            UINT afCmd)

{
  HDDEDATA pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040be9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = DdeCreateDataHandle(idInst,pSrc,cb,cbOff,hszItem,wFmt,afCmd);
  return pHVar1;
}


/*
 * COMDLG32.DLL::GetOpenFileNameA at 0040bea2
 * BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * Address ranges: 0040bea2-0040bea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMDLG32.DLL::GetOpenFileNameA
 */


BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}


/*
 * FUN_0040bea8 at 0040bea8
 * undefined4 __cdecl FUN_0040bea8(LPCSTR param_1)
 * Address ranges: 0040bea8-0040bf2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040bea8(LPCSTR param_1)

{
  undefined1 uVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  byte local_10c;
  byte local_10b;
  
  BVar2 = SetCurrentDirectoryA(param_1);
  if (BVar2 != 0) {
    DVar3 = GetCurrentDirectoryA(0x105,(LPSTR)&local_10c);
    if (DVar3 != 0) {
      if (((local_10c != 0x5c) && (local_10c != 0x2f)) || (local_10c != local_10b)) {
        param_1 = (LPCSTR)CONCAT31(param_1._1_3_,0x3d);
        uVar4 = FUN_0040caff((uint)local_10c);
        uVar1 = SUB41(param_1,0);
        param_1 = (LPCSTR)(uint)CONCAT12(0x3a,CONCAT11((char)uVar4,uVar1));
        BVar2 = SetEnvironmentVariableA((LPCSTR)&param_1,(LPCSTR)&local_10c);
        if (BVar2 == 0) goto LAB_0040bf1c;
      }
      return 0;
    }
  }
LAB_0040bf1c:
  DVar3 = GetLastError();
  FUN_0040ca98(DVar3);
  return 0xffffffff;
}


/*
 * FUN_0040bf2e at 0040bf2e
 * undefined __cdecl FUN_0040bf2e(uint * param_1, size_t param_2)
 * Address ranges: 0040bf2e-0040bf40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040bf2e(uint *param_1,size_t param_2)

{
  FUN_0040bf41(0,param_1,param_2);
  return;
}


/*
 * FUN_0040bf41 at 0040bf41
 * uint * __cdecl FUN_0040bf41(uint param_1, uint * param_2, size_t param_3)
 * Address ranges: 0040bf41-0040c011
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_0040bf41(uint param_1,uint *param_2,size_t param_3)

{
  int iVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  uint local_10c [65];
  LPSTR local_8;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    DVar2 = GetCurrentDirectoryA(0x104,(LPSTR)local_10c);
  }
  else {
    iVar1 = FUN_0040c012(param_1);
    if (iVar1 == 0) {
      _DAT_004134e4 = 0xd;
      DAT_004134e8 = 0xf;
      return (uint *)0x0;
    }
    param_1 = (uint)CONCAT12(0x2e,CONCAT11(0x3a,(char)uVar3 + '@'));
    DVar2 = GetFullPathNameA((LPCSTR)&param_1,0x104,(LPSTR)local_10c,&local_8);
  }
  if ((DVar2 != 0) && (uVar3 = DVar2 + 1, uVar3 < 0x105)) {
    if (param_2 == (uint *)0x0) {
      if ((int)uVar3 <= (int)param_3) {
        uVar3 = param_3;
      }
      puVar4 = _malloc(uVar3);
      if (puVar4 != (uint *)0x0) {
LAB_0040bffe:
        puVar4 = FUN_0040cb80(puVar4,local_10c);
        return puVar4;
      }
      _DAT_004134e4 = 0xc;
    }
    else {
      puVar4 = param_2;
      if ((int)uVar3 <= (int)param_3) goto LAB_0040bffe;
      _DAT_004134e4 = 0x22;
    }
  }
  return (uint *)0x0;
}


/*
 * FUN_0040c012 at 0040c012
 * undefined4 __cdecl FUN_0040c012(uint param_1)
 * Address ranges: 0040c012-0040c048
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040c012(uint param_1)

{
  char cVar1;
  UINT UVar2;
  
  if (param_1 != 0) {
    cVar1 = (char)param_1;
    param_1 = (uint)CONCAT12(0x5c,CONCAT11(0x3a,cVar1 + '@'));
    UVar2 = GetDriveTypeA((LPCSTR)&param_1);
    if ((UVar2 == 0) || (UVar2 == 1)) {
      return 0;
    }
  }
  return 1;
}


/*
 * _memset at 0040c050
 * void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
 * Address ranges: 0040c050-0040c0a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _memset  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}


/*
 * FUN_0040c0a8 at 0040c0a8
 * uint __thiscall FUN_0040c0a8(void * this, uint param_1)
 * Address ranges: 0040c0a8-0040c173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_0040c0a8(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_0041353c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_0041311c < 2) {
        uVar2 = (byte)PTR_DAT_00412f10[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_0040c27e(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_00412f10[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_0040cd72(DAT_0041353c,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


/*
 * _strncpy at 0040c180
 * char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
 * Address ranges: 0040c180-0040c27d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strncpy  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x0040c1be;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_0040c1fb;
        goto LAB_0040c269;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x0040c265:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_0040c269:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_0040c1fb;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x0040c265;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x0040c265;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x0040c265;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x0040c1be:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_0040c1fb:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}


/*
 * FUN_0040c27e at 0040c27e
 * uint __thiscall FUN_0040c27e(void * this, int param_1, uint param_2)
 * Address ranges: 0040c27e-0040c2f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_0040c27e(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_00412f10 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_00412f10[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_0040cfc1(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}


/*
 * FUN_0040c2f3 at 0040c2f3
 * int __thiscall FUN_0040c2f3(void * this, byte * param_1)
 * Address ranges: 0040c2f3-0040c37d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __thiscall FUN_0040c2f3(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_0041311c < 2) {
      uVar1 = (byte)PTR_DAT_00412f10[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_00412f10;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_0040c27e(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_0041311c < 2) {
      uVar2 = (byte)PTR_DAT_00412f10[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_0040c27e(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}


/*
 * FUN_0040c37e at 0040c37e
 * undefined __thiscall FUN_0040c37e(void * this, byte * param_1)
 * Address ranges: 0040c37e-0040c388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __thiscall FUN_0040c37e(void *this,byte *param_1)

{
  FUN_0040c2f3(this,param_1);
  return;
}


/*
 * FUN_0040c390 at 0040c390
 * undefined __stdcall FUN_0040c390(void)
 * Address ranges: 0040c390-0040c3be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Unable to track spacebase fully for stack */

void FUN_0040c390(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}


/*
 * FUN_0040c3bf at 0040c3bf
 * undefined4 __cdecl FUN_0040c3bf(uint param_1)
 * Address ranges: 0040c3bf-0040c471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040c3bf(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_00413f00 <= param_1) {
    DAT_004134e8 = 0;
    _DAT_004134e4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_004134e4 = 9;
    DAT_004134e8 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_0040d2ca(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_0040d2ca(2);
      iVar2 = FUN_0040d2ca(1);
      if (iVar2 == iVar1) goto LAB_0040c438;
    }
    hObject = (HANDLE)FUN_0040d2ca(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_0040c43a;
    }
  }
LAB_0040c438:
  DVar4 = 0;
LAB_0040c43a:
  FUN_0040d250(param_1);
  *(undefined1 *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_0040ca98(DVar4);
  return 0xffffffff;
}


/*
 * FUN_0040c472 at 0040c472
 * int __cdecl FUN_0040c472(uint param_1, int param_2)
 * Address ranges: 0040c472-0040c5b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040c472(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HANDLE hFile;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  char local_1004 [4060];
  undefined4 uStackY_28;
  
  FUN_0040c390();
  iVar7 = 0;
  if ((param_1 < DAT_00413f00) &&
     ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    DVar1 = FUN_0040d6d5(param_1,0,1);
    if ((DVar1 != 0xffffffff) && (DVar2 = FUN_0040d6d5(param_1,0,2), DVar2 != 0xffffffff)) {
      uVar8 = param_2 - DVar2;
      if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
          FUN_0040d6d5(param_1,param_2,0);
          hFile = (HANDLE)FUN_0040d2ca(param_1);
          BVar6 = SetEndOfFile(hFile);
          iVar7 = (BVar6 != 0) - 1;
          if (iVar7 == -1) {
            _DAT_004134e4 = 0xd;
            DAT_004134e8 = GetLastError();
          }
        }
      }
      else {
        _memset(local_1004,0,0x1000);
        uStackY_28 = 0x40c502;
        iVar3 = FUN_0040d65f(param_1,0x8000);
        do {
          uVar4 = 0x1000;
          if ((int)uVar8 < 0x1000) {
            uVar4 = uVar8;
          }
          iVar5 = FUN_0040d4b2(param_1,local_1004,uVar4);
          if (iVar5 == -1) {
            if (DAT_004134e8 == 5) {
              _DAT_004134e4 = 0xd;
            }
            iVar7 = -1;
            break;
          }
          uVar8 = uVar8 - iVar5;
        } while (0 < (int)uVar8);
        FUN_0040d65f(param_1,iVar3);
      }
      FUN_0040d6d5(param_1,DVar1,0);
      return iVar7;
    }
  }
  else {
    _DAT_004134e4 = 9;
  }
  return -1;
}


/*
 * FUN_0040c5b8 at 0040c5b8
 * undefined __cdecl FUN_0040c5b8(LPCSTR param_1, uint param_2, uint param_3)
 * Address ranges: 0040c5b8-0040c5ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040c5b8(LPCSTR param_1,uint param_2,uint param_3)

{
  FUN_0040c5cf(param_1,param_2,0x40,param_3);
  return;
}


/*
 * FUN_0040c5cf at 0040c5cf
 * uint __cdecl FUN_0040c5cf(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 0040c5cf-0040c887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0040c5cf(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar7 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar7;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_00413558 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      _DAT_004134e4 = 0x16;
      DAT_004134e8 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) {
      _DAT_004134e4 = 0x16;
      DAT_004134e8 = 0;
      return 0xffffffff;
    }
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_0040c6ed;
      if (uVar2 != 0x300) {
        _DAT_004134e4 = 0x16;
        DAT_004134e8 = 0;
        return 0xffffffff;
      }
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_0040c6ed:
        local_c = 5;
        goto LAB_0040c6fd;
      }
      if (uVar2 != 0x700) {
        _DAT_004134e4 = 0x16;
        DAT_004134e8 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_0040c6fd:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_004134ec & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_0040d144();
  if (uVar3 == 0xffffffff) {
    DAT_004134e8 = 0;
    _DAT_004134e4 = 0x18;
  }
  else {
    hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar4 = GetFileType(hFile);
      if (DVar4 != 0) {
        if (DVar4 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar4 == 3) {
          local_5 = local_5 | 8;
        }
        FUN_0040d1d9(uVar3,hFile);
        iVar6 = (uVar3 & 0x1f) * 8;
        param_1._3_1_ = local_5 & 0x48;
        *(byte *)((&DAT_00413e00)[(int)uVar3 >> 5] + 4 + iVar6) = local_5 | 1;
        if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
          local_14 = FUN_0040d6d5(uVar3,-1,2);
          if (local_14 == 0xffffffff) {
            if (DAT_004134e8 != 0x83) {
LAB_0040c85e:
              FUN_0040c3bf(uVar3);
              return 0xffffffff;
            }
          }
          else {
            param_3 = param_3 & 0xffffff;
            iVar5 = FUN_0040d76f(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
            if ((((iVar5 == 0) && (param_3._3_1_ == '\x1a')) &&
                (iVar5 = FUN_0040c472(uVar3,local_14), iVar5 == -1)) ||
               (DVar4 = FUN_0040d6d5(uVar3,0,0), DVar4 == 0xffffffff)) goto LAB_0040c85e;
          }
        }
        if (param_1._3_1_ != 0) {
          return uVar3;
        }
        if ((param_2 & 8) != 0) {
          pbVar1 = (byte *)((&DAT_00413e00)[(int)uVar3 >> 5] + 4 + iVar6);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar3;
        }
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar4 = GetLastError();
    FUN_0040ca98(DVar4);
  }
  return 0xffffffff;
}


/*
 * FUN_0040c888 at 0040c888
 * undefined4 __cdecl FUN_0040c888(LPCSTR param_1, LPCSTR param_2)
 * Address ranges: 0040c888-0040c8b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040c888(LPCSTR param_1,LPCSTR param_2)

{
  BOOL BVar1;
  uint uVar2;
  
  BVar1 = MoveFileA(param_1,param_2);
  if (BVar1 == 0) {
    uVar2 = GetLastError();
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    FUN_0040ca98(uVar2);
    return 0xffffffff;
  }
  return 0;
}


/*
 * _malloc at 0040c8b6
 * void * __cdecl _malloc(size_t _Size)
 * Address ranges: 0040c8b6-0040c8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_0041355c);
  return pvVar1;
}


/*
 * __nh_malloc at 0040c8c8
 * void * __cdecl __nh_malloc(size_t _Size, int _NhFlag)
 * Address ranges: 0040c8c8-0040c8f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __nh_malloc  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_0040c8f4((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_0040d965(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}


/*
 * FUN_0040c8f4 at 0040c8f4
 * undefined __cdecl FUN_0040c8f4(uint * param_1)
 * Address ranges: 0040c8f4-0040c929
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040c8f4(uint *param_1)

{
  int *piVar1;
  
  if ((param_1 <= DAT_004132ac) && (piVar1 = FUN_0040dd50(param_1), piVar1 != (int *)0x0)) {
    return;
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  HeapAlloc(DAT_00413de0,0,(int)param_1 + 0xfU & 0xfffffff0);
  return;
}


/*
 * FUN_0040c92a at 0040c92a
 * undefined __cdecl FUN_0040c92a(LPVOID param_1)
 * Address ranges: 0040c92a-0040c958
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040c92a(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_0040d9fa((int)param_1);
    if (puVar1 != (uint *)0x0) {
      FUN_0040da25(puVar1,(uint)param_1);
      return;
    }
    HeapFree(DAT_00413de0,0,param_1);
  }
  return;
}


/*
 * entry at 0040c959
 * undefined __stdcall entry(void)
 * Address ranges: 0040c959-0040ca43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  HRSRC pHVar3;
  uint uVar4;
  HMODULE pHVar5;
  UINT UVar6;
  HGLOBAL pvVar7;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  _EXCEPTION_POINTERS *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004107e8;
  puStack_10 = &LAB_0040e914;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_004134fc = DVar1 >> 8 & 0xff;
  _DAT_004134f8 = DVar1 & 0xff;
  _DAT_004134f4 = _DAT_004134f8 * 0x100 + _DAT_004134fc;
  _DAT_004134f0 = DVar1 >> 0x10;
  iVar2 = FUN_0040d980(0);
  if (iVar2 == 0) {
    FUN_0040ca74(0x1c);
  }
  local_8 = 0;
  FUN_0040d307();
  DAT_00413f18 = GetCommandLineA();
  DAT_004134d8 = FUN_0040e6e7();
  FUN_0040e49a();
  FUN_0040e3e1();
  FUN_0040cc70();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  pHVar3 = (HRSRC)FUN_0040e389();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  pvVar7 = (HGLOBAL)0x0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = FUN_00401000(pHVar5,pvVar7,pHVar3,uVar4);
  FUN_0040cc9d(UVar6);
  FUN_0040e205(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


/*
 * FUN_0040ca4f at 0040ca4f
 * undefined __cdecl FUN_0040ca4f(DWORD param_1)
 * Address ranges: 0040ca4f-0040ca70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040ca4f(DWORD param_1)

{
  if (DAT_004134e0 == 1) {
    FUN_0040e9ec();
  }
  FUN_0040ea25(param_1);
  (*(code *)PTR___exit_00413130)(0xff);
  return;
}


/*
 * FUN_0040ca74 at 0040ca74
 * undefined __cdecl FUN_0040ca74(DWORD param_1)
 * Address ranges: 0040ca74-0040ca96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040ca74(DWORD param_1)

{
  if (DAT_004134e0 == 1) {
    FUN_0040e9ec();
  }
  FUN_0040ea25(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xff);
}


/*
 * FUN_0040ca98 at 0040ca98
 * undefined __cdecl FUN_0040ca98(uint param_1)
 * Address ranges: 0040ca98-0040cafe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040ca98(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_004134e8 = param_1;
  puVar1 = &DAT_00413138;
  do {
    if (param_1 == *puVar1) {
      _DAT_004134e4 = *(undefined4 *)(iVar2 * 8 + 0x41313c);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x4132a0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_004134e4 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_004134e4 = 8, 0xca < param_1)) {
    _DAT_004134e4 = 0x16;
  }
  return;
}


/*
 * FUN_0040caff at 0040caff
 * uint __cdecl FUN_0040caff(uint param_1)
 * Address ranges: 0040caff-0040cb79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_0040caff(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 local_8;
  
  uVar4 = param_1;
  if (param_1 < 0x100) {
    if ((*(byte *)((int)&DAT_00413cc0 + param_1 + 1) & 0x20) == 0x20) {
      uVar4 = (uint)(byte)(&DAT_00413bc0)[param_1];
    }
  }
  else {
    uVar5 = (undefined1)param_1;
    uVar2 = param_1 >> 8;
    uVar1 = param_1 >> 8;
    param_1 = CONCAT13(uVar5,CONCAT12((char)uVar1,(undefined2)param_1));
    if (((*(byte *)((int)&DAT_00413cc0 + (uVar2 & 0xff) + 1) & 4) != 0) &&
       (iVar3 = FUN_0040cd72(DAT_00413dc4,0x200,(char *)((int)&param_1 + 2),2,&local_8,2,
                             DAT_00413ba0,1), iVar3 != 0)) {
      uVar4 = (uint)CONCAT11((undefined1)local_8,local_8._1_1_);
    }
  }
  return uVar4;
}


/*
 * FUN_0040cb80 at 0040cb80
 * uint * __cdecl FUN_0040cb80(uint * param_1, uint * param_2)
 * Address ranges: 0040cb80-0040cb86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_0040cb80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar4 = param_1;
  while (((uint)param_2 & 3) != 0) {
    bVar1 = (byte)*param_2;
    uVar3 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0040cc68;
    *(byte *)puVar4 = bVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  do {
    uVar2 = *param_2;
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar3 == '\0') {
LAB_0040cc68:
        *(byte *)puVar4 = (byte)uVar3;
        return param_1;
      }
      if ((char)(uVar3 >> 8) == '\0') {
        *(short *)puVar4 = (short)uVar3;
        return param_1;
      }
      if ((uVar3 & 0xff0000) == 0) {
        *(short *)puVar4 = (short)uVar3;
        *(byte *)((int)puVar4 + 2) = 0;
        return param_1;
      }
      if ((uVar3 & 0xff000000) == 0) {
        *puVar4 = uVar3;
        return param_1;
      }
    }
    *puVar4 = uVar3;
    puVar4 = puVar4 + 1;
  } while( true );
}


/*
 * FUN_0040cb90 at 0040cb90
 * uint * __cdecl FUN_0040cb90(uint * param_1, uint * param_2)
 * Address ranges: 0040cb90-0040cc6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint * __cdecl FUN_0040cb90(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_0040cbac;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_0040cbdf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x0040cbfb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_0040cbac:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x0040cbfb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x0040cbfb;
    }
  }
LAB_0040cbdf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x0040cbfb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_0040cc68:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_0040cc68;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}


/*
 * FUN_0040cc70 at 0040cc70
 * undefined __stdcall FUN_0040cc70(void)
 * Address ranges: 0040cc70-0040cc9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040cc70(void)

{
  if (DAT_00413f14 != (code *)0x0) {
    (*DAT_00413f14)();
  }
  FUN_0040cd58((undefined4 *)&DAT_00412008,(undefined4 *)&DAT_00412010);
  FUN_0040cd58((undefined4 *)&DAT_00412000,(undefined4 *)&DAT_00412004);
  return;
}


/*
 * FUN_0040cc9d at 0040cc9d
 * undefined __cdecl FUN_0040cc9d(UINT param_1)
 * Address ranges: 0040cc9d-0040ccad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040cc9d(UINT param_1)

{
  FUN_0040ccbf(param_1,0,0);
  return;
}


/*
 * __exit at 0040ccae
 * noreturn void __cdecl __exit(int _Code)
 * Address ranges: 0040ccae-0040ccbe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __exit  Library: Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __exit(int _Code)

{
  FUN_0040ccbf(_Code,1,0);
  return;
}


/*
 * FUN_0040ccbf at 0040ccbf
 * undefined __cdecl FUN_0040ccbf(UINT param_1, int param_2, int param_3)
 * Address ranges: 0040ccbf-0040cd57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040ccbf(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_0041352c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00413528 = 1;
  DAT_00413524 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00413f10 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_00413f0c - 4), DAT_00413f10 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00413f10 <= puVar1);
    }
    FUN_0040cd58((undefined4 *)&DAT_00412014,(undefined4 *)&DAT_00412018);
  }
  FUN_0040cd58((undefined4 *)&DAT_0041201c,(undefined4 *)&DAT_00412020);
  if (param_3 != 0) {
    return;
  }
  DAT_0041352c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}


/*
 * FUN_0040cd58 at 0040cd58
 * undefined __cdecl FUN_0040cd58(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 0040cd58-0040cd71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040cd58(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


/*
 * FUN_0040cd72 at 0040cd72
 * int __cdecl FUN_0040cd72(LCID param_1, uint param_2, char * param_3, int param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
 * Address ranges: 0040cd72-0040ce81;0040ce95-0040cf35;0040cf48-0040cf95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl
FUN_0040cd72(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00410800;
  puStack_10 = &LAB_0040e914;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_00413530 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_00413530 = 2;
    }
    else {
      DAT_00413530 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_0040cf96(param_3,param_4);
  }
  if (DAT_00413530 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_00413530 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_0041354c;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_0040c390();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_0040c390();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}


/*
 * FUN_0040cf96 at 0040cf96
 * int __cdecl FUN_0040cf96(char * param_1, int param_2)
 * Address ranges: 0040cf96-0040cfc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040cf96(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}


/*
 * FUN_0040cfc1 at 0040cfc1
 * BOOL __cdecl FUN_0040cfc1(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
 * Address ranges: 0040cfc1-0040d0b9;0040d0c5-0040d109
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


BOOL __cdecl
FUN_0040cfc1(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00410818;
  puStack_10 = &LAB_0040e914;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_00413554;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_00413554 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_00413554 = iVar3;
  if (DAT_00413554 != 2) {
    if (DAT_00413554 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_0041354c;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_0040c390();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_0041353c;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}


/*
 * FUN_0040d144 at 0040d144
 * int __stdcall FUN_0040d144(void)
 * Address ranges: 0040d144-0040d1d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int FUN_0040d144(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar6 = 0;
  iVar5 = 0;
  piVar3 = &DAT_00413e00;
  do {
    puVar2 = (undefined4 *)*piVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = _malloc(0x100);
      if (puVar2 != (undefined4 *)0x0) {
        DAT_00413f00 = DAT_00413f00 + 0x20;
        (&DAT_00413e00)[iVar6] = puVar2;
        puVar1 = puVar2;
        for (; puVar2 < puVar1 + 0x40; puVar2 = puVar2 + 2) {
          *(undefined1 *)(puVar2 + 1) = 0;
          *puVar2 = 0xffffffff;
          *(undefined1 *)((int)puVar2 + 5) = 10;
          puVar1 = (undefined4 *)(&DAT_00413e00)[iVar6];
        }
        iVar4 = iVar6 << 5;
      }
      return iVar4;
    }
    puVar1 = puVar2 + 0x40;
    for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
      if ((*(byte *)(puVar2 + 1) & 1) == 0) {
        *puVar2 = 0xffffffff;
        iVar4 = ((int)puVar2 - *piVar3 >> 3) + iVar5;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
    }
    piVar3 = piVar3 + 1;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 0x20;
    if (0x413eff < (int)piVar3) {
      return iVar4;
    }
  } while( true );
}


/*
 * FUN_0040d1d9 at 0040d1d9
 * undefined4 __cdecl FUN_0040d1d9(uint param_1, HANDLE param_2)
 * Address ranges: 0040d1d9-0040d24f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d1d9(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00413f00) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_00413134 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040d22f;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_0040d22f:
      *(HANDLE *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}


/*
 * FUN_0040d250 at 0040d250
 * undefined4 __cdecl FUN_0040d250(uint param_1)
 * Address ranges: 0040d250-0040d2c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d250(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00413f00) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00413134 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0040d2a9;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0040d2a9:
      *(undefined4 *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}


/*
 * FUN_0040d2ca at 0040d2ca
 * undefined4 __cdecl FUN_0040d2ca(uint param_1)
 * Address ranges: 0040d2ca-0040d306
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040d2ca(uint param_1)

{
  if ((param_1 < DAT_00413f00) &&
     ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_00413e00)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}


/*
 * FUN_0040d307 at 0040d307
 * undefined __stdcall FUN_0040d307(void)
 * Address ranges: 0040d307-0040d4b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040d307(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  byte *pbVar5;
  int iVar6;
  UINT *pUVar7;
  UINT UVar8;
  UINT UVar9;
  uint uVar10;
  _STARTUPINFOA local_44;
  
  puVar2 = _malloc(0x100);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0040ca4f(0x1b);
  }
  DAT_00413f00 = 0x20;
  DAT_00413e00 = puVar2;
  for (; puVar2 < DAT_00413e00 + 0x40; puVar2 = puVar2 + 2) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_44.lpReserved2;
    pUVar7 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar5 = (byte *)(UVar8 + (int)pUVar7);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_00413f00 < (int)UVar8) {
      puVar2 = &DAT_00413e04;
      do {
        puVar3 = _malloc(0x100);
        UVar9 = DAT_00413f00;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_00413f00 = DAT_00413f00 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x40; puVar3 = puVar3 + 2) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_00413f00 < (int)UVar8);
    }
    uVar10 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)pbVar5 != (HANDLE)0xffffffff) && ((*pUVar7 & 1) != 0)) &&
           (((*pUVar7 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)pbVar5), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_00413e00)[(int)uVar10 >> 5] + (uVar10 & 0x1f) * 8);
          *puVar2 = *(undefined4 *)pbVar5;
          *(byte *)(puVar2 + 1) = (byte)*pUVar7;
        }
        uVar10 = uVar10 + 1;
        pUVar7 = (UINT *)((int)pUVar7 + 1);
        pbVar5 = pbVar5 + 4;
      } while ((int)uVar10 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_00413e00 + iVar6 * 2;
    if (DAT_00413e00[iVar6 * 2] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_0040d498;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_0040d498:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_00413f00);
      return;
    }
  } while( true );
}


/*
 * FUN_0040d4b2 at 0040d4b2
 * int __cdecl FUN_0040d4b2(DWORD param_1, char * param_2, uint param_3)
 * Address ranges: 0040d4b2-0040d65e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040d4b2(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  BOOL BVar6;
  int iVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  if (param_1 < DAT_00413f00) {
    piVar1 = &DAT_00413e00 + ((int)param_1 >> 5);
    iVar7 = (param_1 & 0x1f) * 8;
    bVar3 = *(byte *)(*piVar1 + 4 + iVar7);
    if ((bVar3 & 1) != 0) {
      local_c = 0;
      local_14 = 0;
      if (param_3 == 0) {
        return 0;
      }
      if ((bVar3 & 0x20) != 0) {
        FUN_0040d6d5(param_1,0,2);
      }
      if ((*(byte *)((undefined4 *)(*piVar1 + iVar7) + 1) & 0x80) == 0) {
        BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
        if (BVar6 == 0) {
          param_1 = GetLastError();
        }
        else {
          local_c = local_10;
          param_1 = 0;
        }
LAB_0040d5ab:
        if (local_c != 0) {
          return local_c - local_14;
        }
        if (param_1 != 0) {
          if (param_1 == 5) {
            _DAT_004134e4 = 9;
            DAT_004134e8 = 5;
            return -1;
          }
          FUN_0040ca98(param_1);
          return -1;
        }
      }
      else {
        local_8 = param_2;
        param_1 = 0;
        if (param_3 != 0) {
          do {
            pcVar5 = local_418;
            do {
              if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
              pcVar2 = local_8 + 1;
              cVar4 = *local_8;
              local_8 = pcVar2;
              if (cVar4 == '\n') {
                local_14 = local_14 + 1;
                *pcVar5 = '\r';
                pcVar5 = pcVar5 + 1;
              }
              *pcVar5 = cVar4;
              pcVar5 = pcVar5 + 1;
            } while ((int)pcVar5 - (int)local_418 < 0x400);
            BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar7),local_418,(int)pcVar5 - (int)local_418,
                              &local_10,(LPOVERLAPPED)0x0);
            if (BVar6 == 0) {
              param_1 = GetLastError();
              goto LAB_0040d5ab;
            }
            local_c = local_c + local_10;
            if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
               (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_0040d5ab;
          } while( true );
        }
      }
      if (((*(byte *)(*piVar1 + 4 + iVar7) & 0x40) != 0) && (*param_2 == '\x1a')) {
        return 0;
      }
      _DAT_004134e4 = 0x1c;
      DAT_004134e8 = 0;
      return -1;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return -1;
}


/*
 * FUN_0040d65f at 0040d65f
 * int __cdecl FUN_0040d65f(uint param_1, int param_2)
 * Address ranges: 0040d65f-0040d6d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040d65f(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1 < DAT_00413f00) {
    bVar1 = *(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8);
    if ((bVar1 & 1) != 0) {
      if (param_2 == 0x8000) {
        bVar2 = bVar1 & 0x7f;
      }
      else {
        if (param_2 != 0x4000) {
          _DAT_004134e4 = 0x16;
          return -1;
        }
        bVar2 = bVar1 | 0x80;
      }
      *(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) = bVar2;
      return (-(uint)((bVar1 & 0x80) != 0) & 0xffffc000) + 0x8000;
    }
  }
  _DAT_004134e4 = 9;
  return -1;
}


/*
 * FUN_0040d6d5 at 0040d6d5
 * DWORD __cdecl FUN_0040d6d5(uint param_1, LONG param_2, DWORD param_3)
 * Address ranges: 0040d6d5-0040d76e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_0040d6d5(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_00413f00) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_0040d2ca(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_004134e4 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        FUN_0040ca98(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_00413e00)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return 0xffffffff;
}


/*
 * FUN_0040d76f at 0040d76f
 * int __cdecl FUN_0040d76f(uint param_1, char * param_2, char * param_3)
 * Address ranges: 0040d76f-0040d964
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0040d76f(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  int iVar7;
  char *pcVar8;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  if (param_1 < DAT_00413f00) {
    iVar7 = (param_1 & 0x1f) * 8;
    piVar1 = &DAT_00413e00 + ((int)param_1 >> 5);
    bVar4 = *(byte *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar7 + 4);
    if ((bVar4 & 1) != 0) {
      local_c = (char *)0x0;
      if ((param_3 == (char *)0x0) || ((bVar4 & 2) != 0)) {
        return 0;
      }
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_00413e00)[(int)param_1 >> 5] + iVar7 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar7) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar7),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          _DAT_004134e4 = 9;
          DAT_004134e8 = 5;
          return -1;
        }
        if (DVar6 != 0x6d) {
          FUN_0040ca98(DVar6);
          return -1;
        }
        return 0;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar7);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar7) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar7);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_0040d905;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar7),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_0040d91f:
                *pcVar8 = '\r';
LAB_0040d922:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar7) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_0040d905:
                  *pcVar8 = '\n';
                  goto LAB_0040d922;
                }
                FUN_0040d6d5(param_1,-1,1);
                if (local_5 != '\n') goto LAB_0040d91f;
              }
              else {
                if (local_5 == '\n') goto LAB_0040d905;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar7) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  DAT_004134e8 = 0;
  _DAT_004134e4 = 9;
  return -1;
}


/*
 * FUN_0040d965 at 0040d965
 * undefined4 __cdecl FUN_0040d965(undefined4 param_1)
 * Address ranges: 0040d965-0040d97f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040d965(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_00413560 != (code *)0x0) {
    iVar1 = (*DAT_00413560)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


/*
 * FUN_0040d980 at 0040d980
 * undefined4 __cdecl FUN_0040d980(int param_1)
 * Address ranges: 0040d980-0040d9bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040d980(int param_1)

{
  int iVar1;
  
  DAT_00413de0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_00413de0 != (HANDLE)0x0) {
    iVar1 = FUN_0040d9bc();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_00413de0);
  }
  return 0;
}


/*
 * FUN_0040d9bc at 0040d9bc
 * undefined4 __stdcall FUN_0040d9bc(void)
 * Address ranges: 0040d9bc-0040d9f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_0040d9bc(void)

{
  DAT_00413ddc = HeapAlloc(DAT_00413de0,0,0x140);
  if (DAT_00413ddc == (LPVOID)0x0) {
    return 0;
  }
  DAT_00413dd4 = 0;
  DAT_00413dd8 = 0;
  DAT_00413dd0 = DAT_00413ddc;
  DAT_00413dc8 = 0x10;
  return 1;
}


/*
 * FUN_0040d9fa at 0040d9fa
 * uint __cdecl FUN_0040d9fa(int param_1)
 * Address ranges: 0040d9fa-0040da24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_0040d9fa(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_00413ddc;
  while( true ) {
    if (DAT_00413ddc + DAT_00413dd8 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}


/*
 * FUN_0040da25 at 0040da25
 * undefined __cdecl FUN_0040da25(uint * param_1, uint param_2)
 * Address ranges: 0040da25-0040dd4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040da25(uint *param_1,uint param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_10;
  
  uVar5 = param_1[4];
  iVar6 = *(int *)(param_2 - 4);
  piVar9 = (int *)(param_2 - 4);
  uVar10 = param_2 - param_1[3] >> 0xf;
  uVar7 = *(uint *)(param_2 - 8);
  local_10 = iVar6 + -1;
  piVar3 = (int *)(uVar10 * 0x204 + 0x144 + uVar5);
  uVar12 = *(uint *)(local_10 + (int)piVar9);
  if ((uVar12 & 1) == 0) {
    param_2 = ((int)uVar12 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    if (*(int *)(iVar6 + 3 + (int)piVar9) == *(int *)(iVar6 + 7 + (int)piVar9)) {
      if (param_2 < 0x20) {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(param_2 + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 7 + (int)piVar9) + 4) =
         *(undefined4 *)(iVar6 + 3 + (int)piVar9);
    local_10 = local_10 + uVar12;
    *(undefined4 *)(*(int *)(iVar6 + 3 + (int)piVar9) + 8) =
         *(undefined4 *)(iVar6 + 7 + (int)piVar9);
  }
  uVar12 = (local_10 >> 4) - 1;
  if (0x3f < uVar12) {
    uVar12 = 0x3f;
  }
  if ((uVar7 & 1) == 0) {
    piVar9 = (int *)((int)piVar9 - uVar7);
    param_2 = ((int)uVar7 >> 4) - 1;
    if (0x3f < param_2) {
      param_2 = 0x3f;
    }
    local_10 = local_10 + uVar7;
    uVar12 = (local_10 >> 4) - 1;
    if (0x3f < uVar12) {
      uVar12 = 0x3f;
    }
    if (param_2 != uVar12) {
      if (piVar9[1] == piVar9[2]) {
        if (param_2 < 0x20) {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar11;
          }
        }
        else {
          pcVar1 = (char *)(param_2 + 4 + uVar5);
          uVar11 = ~(0x80000000U >> ((byte)param_2 - 0x20 & 0x1f));
          puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar2 = *puVar2 & uVar11;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar11;
          }
        }
      }
      *(int *)(piVar9[2] + 4) = piVar9[1];
      *(int *)(piVar9[1] + 8) = piVar9[2];
    }
  }
  if (((uVar7 & 1) != 0) || (param_2 != uVar12)) {
    piVar9[1] = piVar3[uVar12 * 2 + 1];
    piVar9[2] = (int)(piVar3 + uVar12 * 2);
    (piVar3 + uVar12 * 2)[1] = (int)piVar9;
    *(int **)(piVar9[1] + 8) = piVar9;
    if (piVar9[1] == piVar9[2]) {
      cVar4 = *(char *)(uVar12 + 4 + uVar5);
      *(char *)(uVar12 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar12;
      if (uVar12 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 & 0x1f);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar2 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar2 = *puVar2 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
      }
    }
  }
  *piVar9 = local_10;
  *(int *)(local_10 + -4 + (int)piVar9) = local_10;
  *piVar3 = *piVar3 + -1;
  uVar5 = DAT_00413dcc;
  puVar2 = DAT_00413dd4;
  if ((*piVar3 == 0) && (uVar5 = uVar10, puVar2 = param_1, DAT_00413dd4 != (uint *)0x0)) {
    VirtualFree((LPVOID)(DAT_00413dcc * 0x8000 + DAT_00413dd4[3]),0x8000,0x4000);
    DAT_00413dd4[2] = DAT_00413dd4[2] | 0x80000000U >> ((byte)DAT_00413dcc & 0x1f);
    *(undefined4 *)(DAT_00413dd4[4] + 0xc4 + DAT_00413dcc * 4) = 0;
    *(char *)(DAT_00413dd4[4] + 0x43) = *(char *)(DAT_00413dd4[4] + 0x43) + -1;
    if (*(char *)(DAT_00413dd4[4] + 0x43) == '\0') {
      DAT_00413dd4[1] = DAT_00413dd4[1] & 0xfffffffe;
    }
    puVar2 = param_1;
    if (DAT_00413dd4[2] == 0xffffffff) {
      VirtualFree((LPVOID)DAT_00413dd4[3],0,0x8000);
      HeapFree(DAT_00413de0,0,(LPVOID)DAT_00413dd4[4]);
      FUN_0040ef60(DAT_00413dd4,DAT_00413dd4 + 5,
                   (DAT_00413dd8 * 0x14 - (int)DAT_00413dd4) + -0x14 + DAT_00413ddc);
      DAT_00413dd8 = DAT_00413dd8 + -1;
      if (DAT_00413dd4 < param_1) {
        param_1 = param_1 + -5;
      }
      DAT_00413dd0 = DAT_00413ddc;
      puVar2 = param_1;
    }
  }
  DAT_00413dd4 = puVar2;
  DAT_00413dcc = uVar5;
  return;
}


/*
 * FUN_0040dd50 at 0040dd50
 * int * __cdecl FUN_0040dd50(uint * param_1)
 * Address ranges: 0040dd50-0040e058
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_0040dd50(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_00413ddc + DAT_00413dd8 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_00413dd0;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_00413ddc;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_00413dd0 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_00413dd0) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_00413ddc;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_00413dd0 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_00413dd0) && (param_1 = FUN_0040e059(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_0040e10a((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_00413dd0 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_0040e016;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_0040e016:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_00413dd4)) && (local_8 == DAT_00413dcc)) {
    DAT_00413dd4 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}


/*
 * FUN_0040e059 at 0040e059
 * undefined4 * __stdcall FUN_0040e059(void)
 * Address ranges: 0040e059-0040e109
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * FUN_0040e059(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_00413dd8 == DAT_00413dc8) {
    pvVar2 = HeapReAlloc(DAT_00413de0,0,DAT_00413ddc,(DAT_00413dc8 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_00413dc8 = DAT_00413dc8 + 0x10;
    DAT_00413ddc = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_00413ddc + DAT_00413dd8 * 0x14);
  pvVar2 = HeapAlloc(DAT_00413de0,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_00413dd8 = DAT_00413dd8 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_00413de0,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}


/*
 * FUN_0040e10a at 0040e10a
 * int __cdecl FUN_0040e10a(int param_1)
 * Address ranges: 0040e10a-0040e204
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040e10a(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}


/*
 * FUN_0040e205 at 0040e205
 * LONG __cdecl FUN_0040e205(int param_1, _EXCEPTION_POINTERS * param_2)
 * Address ranges: 0040e205-0040e345
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LONG __cdecl FUN_0040e205(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar4 = FUN_0040e346(param_1);
  uVar3 = DAT_00413564;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
  }
  else if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    LVar5 = 1;
  }
  else {
    if (pcVar1 != (code *)0x1) {
      DAT_00413564 = param_2;
      if (piVar4[1] == 8) {
        if (DAT_00413328 < DAT_0041332c + DAT_00413328) {
          iVar6 = (DAT_0041332c + DAT_00413328) - DAT_00413328;
          puVar7 = (undefined4 *)(DAT_00413328 * 0xc + 0x4132b8);
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar2 = DAT_00413334;
        iVar6 = *piVar4;
        if (iVar6 == -0x3fffff72) {
          DAT_00413334 = 0x83;
        }
        else if (iVar6 == -0x3fffff70) {
          DAT_00413334 = 0x81;
        }
        else if (iVar6 == -0x3fffff6f) {
          DAT_00413334 = 0x84;
        }
        else if (iVar6 == -0x3fffff6d) {
          DAT_00413334 = 0x85;
        }
        else if (iVar6 == -0x3fffff73) {
          DAT_00413334 = 0x82;
        }
        else if (iVar6 == -0x3fffff71) {
          DAT_00413334 = 0x86;
        }
        else if (iVar6 == -0x3fffff6e) {
          DAT_00413334 = 0x8a;
        }
        (*pcVar1)(8,DAT_00413334);
        DAT_00413334 = uVar2;
      }
      else {
        piVar4[2] = 0;
        (*pcVar1)(piVar4[1]);
      }
    }
    LVar5 = -1;
    DAT_00413564 = (_EXCEPTION_POINTERS *)uVar3;
  }
  return LVar5;
}


/*
 * FUN_0040e346 at 0040e346
 * int * __cdecl FUN_0040e346(int param_1)
 * Address ranges: 0040e346-0040e388
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int * __cdecl FUN_0040e346(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_004132b0;
  if (DAT_004132b0 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_004132b0 + DAT_00413330 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_004132b0 + DAT_00413330 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


/*
 * FUN_0040e389 at 0040e389
 * byte * __stdcall FUN_0040e389(void)
 * Address ranges: 0040e389-0040e3e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


byte * FUN_0040e389(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (DAT_00413f08 == 0) {
    FUN_0040ef3c();
  }
  bVar1 = *DAT_00413f18;
  pbVar4 = DAT_00413f18;
  if (bVar1 == 0x22) {
    while( true ) {
      pbVar3 = pbVar4;
      bVar1 = pbVar3[1];
      pbVar4 = pbVar3 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar2 = FUN_0040f295(bVar1);
      if (iVar2 != 0) {
        pbVar4 = pbVar3 + 2;
      }
    }
    if (*pbVar4 == 0x22) goto LAB_0040e3c6;
  }
  else {
    while (0x20 < bVar1) {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    }
  }
  for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
LAB_0040e3c6:
  }
  return pbVar4;
}


/*
 * FUN_0040e3e1 at 0040e3e1
 * undefined __stdcall FUN_0040e3e1(void)
 * Address ranges: 0040e3e1-0040e499
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e3e1(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_00413f08 == 0) {
    FUN_0040ef3c();
  }
  iVar5 = 0;
  for (puVar6 = DAT_004134d8; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_0041350c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0040ca4f(9);
  }
  cVar1 = (char)*DAT_004134d8;
  puVar6 = DAT_004134d8;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_0040ca4f(9);
      }
      FUN_0040cb80((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_0040c92a(DAT_004134d8);
  DAT_004134d8 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_00413f04 = 1;
  return;
}


/*
 * FUN_0040e49a at 0040e49a
 * undefined __stdcall FUN_0040e49a(void)
 * Address ranges: 0040e49a-0040e532
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e49a(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_00413f08 == 0) {
    FUN_0040ef3c();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00413568,0x104);
  _DAT_0041351c = &DAT_00413568;
  pbVar2 = &DAT_00413568;
  if (*DAT_00413f18 != 0) {
    pbVar2 = DAT_00413f18;
  }
  FUN_0040e533(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0040ca4f(8);
  }
  FUN_0040e533(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_00413504 = puVar1;
  _DAT_00413500 = local_8 + -1;
  return;
}


/*
 * FUN_0040e533 at 0040e533
 * undefined __cdecl FUN_0040e533(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
 * Address ranges: 0040e533-0040e6e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040e533(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_00413cc0 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_00413cc0 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_0040e5de;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_0040e5de:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_00413cc0 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_00413cc0 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}


/*
 * FUN_0040e6e7 at 0040e6e7
 * LPSTR __stdcall FUN_0040e6e7(void)
 * Address ranges: 0040e6e7-0040e818
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LPSTR FUN_0040e6e7(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_0041366c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_0041366c = 1;
LAB_0040e73e:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_0040c92a(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_0041366c = 2;
  }
  else {
    if (DAT_0041366c == 1) goto LAB_0040e73e;
    if (DAT_0041366c != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_0040f360((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}


/*
 * __global_unwind2 at 0040e81c
 * undefined __cdecl __global_unwind2(PVOID param_1)
 * Address ranges: 0040e81c-0040e83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __global_unwind2  Library: Visual Studio
 */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x40e834,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


/*
 * __local_unwind2 at 0040e85e
 * undefined __cdecl __local_unwind2(int param_1, int param_2)
 * Address ranges: 0040e85e-0040e8c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __local_unwind2  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual Studio 2003 Release
 */


/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_0040e83c;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_0040e8f2();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}


/*
 * FUN_0040e8f2 at 0040e8f2
 * undefined __stdcall FUN_0040e8f2(void)
 * Address ranges: 0040e8f2-0040e909
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040e8f2(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_00413340 = *(undefined4 *)(unaff_EBP + 8);
  DAT_0041333c = in_EAX;
  DAT_00413344 = unaff_EBP;
  return;
}


/*
 * FUN_0040e9d1 at 0040e9d1
 * undefined __stdcall FUN_0040e9d1(int param_1)
 * Address ranges: 0040e9d1-0040e9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040e9d1(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}


/*
 * FUN_0040e9ec at 0040e9ec
 * undefined __stdcall FUN_0040e9ec(void)
 * Address ranges: 0040e9ec-0040ea24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040e9ec(void)

{
  if ((DAT_004134e0 == 1) || ((DAT_004134e0 == 0 && (DAT_00413134 == 1)))) {
    FUN_0040ea25(0xfc);
    if (DAT_00413670 != (code *)0x0) {
      (*DAT_00413670)();
    }
    FUN_0040ea25(0xff);
  }
  return;
}


/*
 * FUN_0040ea25 at 0040ea25
 * undefined __cdecl FUN_0040ea25(DWORD param_1)
 * Address ranges: 0040ea25-0040eb77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040ea25(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_00413348;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x4133d8);
  if (param_1 == (&DAT_00413348)[iVar5 * 2]) {
    if ((DAT_004134e0 == 1) || ((DAT_004134e0 == 0 && (DAT_00413134 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x41334c);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_0040cb80(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,&DAT_004125cc,3);
      }
      FUN_0040cb80(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_0040cb90(local_a4,_Dest);
      FUN_0040cb90(local_a4,(uint *)&DAT_00410ad4);
      FUN_0040cb90(local_a4,*(uint **)(iVar5 * 8 + 0x41334c));
      auStackY_1e3._3_4_ = 0x40eb49;
      FUN_0040f695(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}


/*
 * FUN_0040eb78 at 0040eb78
 * undefined4 __cdecl FUN_0040eb78(int param_1)
 * Address ranges: 0040eb78-0040ed10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0040eb78(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  _cpinfo local_1c;
  uint local_8;
  
  CodePage = FUN_0040ed11(param_1);
  if (CodePage == DAT_00413ba0) {
    return 0;
  }
  if (CodePage != 0) {
    iVar11 = 0;
    pUVar5 = &DAT_004133e0;
    do {
      if (*pUVar5 == CodePage) {
        puVar13 = &DAT_00413cc0;
        for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_8 = 0;
        iVar11 = iVar11 * 0x30;
        *(undefined1 *)puVar13 = 0;
        pbVar12 = (byte *)(iVar11 + 0x4133f0);
        do {
          bVar3 = *pbVar12;
          pbVar10 = pbVar12;
          while ((bVar3 != 0 && (bVar3 = pbVar10[1], bVar3 != 0))) {
            uVar7 = (uint)*pbVar10;
            if (uVar7 <= bVar3) {
              bVar4 = (&DAT_004133d8)[local_8];
              do {
                pbVar2 = (byte *)((int)&DAT_00413cc0 + uVar7 + 1);
                *pbVar2 = *pbVar2 | bVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 <= bVar3);
            }
            pbVar10 = pbVar10 + 2;
            bVar3 = *pbVar10;
          }
          local_8 = local_8 + 1;
          pbVar12 = pbVar12 + 8;
        } while (local_8 < 4);
        _DAT_00413bbc = 1;
        DAT_00413ba0 = CodePage;
        DAT_00413dc4 = FUN_0040ed5b(CodePage);
        DAT_00413bb0 = *(undefined4 *)(iVar11 + 0x4133e4);
        DAT_00413bb4 = *(undefined4 *)(iVar11 + 0x4133e8);
        DAT_00413bb8 = *(undefined4 *)(iVar11 + 0x4133ec);
        goto LAB_0040ed00;
      }
      pUVar5 = pUVar5 + 0xc;
      iVar11 = iVar11 + 1;
    } while ((int)pUVar5 < 0x4134d0);
    BVar6 = GetCPInfo(CodePage,&local_1c);
    if (BVar6 == 1) {
      puVar13 = &DAT_00413cc0;
      DAT_00413ba0 = CodePage;
      for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      *(undefined1 *)puVar13 = 0;
      DAT_00413dc4 = 0;
      if (local_1c.MaxCharSize < 2) {
        _DAT_00413bbc = 0;
      }
      else {
        if (local_1c.LeadByte[0] != '\0') {
          pBVar8 = local_1c.LeadByte + 1;
          do {
            bVar3 = *pBVar8;
            if (bVar3 == 0) break;
            for (uVar7 = (uint)pBVar8[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
              pbVar12 = (byte *)((int)&DAT_00413cc0 + uVar7 + 1);
              *pbVar12 = *pbVar12 | 4;
            }
            pBVar1 = pBVar8 + 1;
            pBVar8 = pBVar8 + 2;
          } while (*pBVar1 != 0);
        }
        uVar7 = 1;
        do {
          pbVar12 = (byte *)((int)&DAT_00413cc0 + uVar7 + 1);
          *pbVar12 = *pbVar12 | 8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xff);
        DAT_00413dc4 = FUN_0040ed5b(CodePage);
        _DAT_00413bbc = 1;
      }
      DAT_00413bb0 = 0;
      DAT_00413bb4 = 0;
      DAT_00413bb8 = 0;
      goto LAB_0040ed00;
    }
    if (DAT_00413674 == 0) {
      return 0xffffffff;
    }
  }
  FUN_0040ed8e();
LAB_0040ed00:
  FUN_0040edb7();
  return 0;
}


/*
 * FUN_0040ed11 at 0040ed11
 * int __cdecl FUN_0040ed11(int param_1)
 * Address ranges: 0040ed11-0040ed5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040ed11(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_00413674 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040ed2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_00413674 = 1;
                    /* WARNING: Could not recover jumptable at 0x0040ed40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0041354c;
  }
  DAT_00413674 = (uint)bVar2;
  return param_1;
}


/*
 * FUN_0040ed5b at 0040ed5b
 * undefined4 __cdecl FUN_0040ed5b(int param_1)
 * Address ranges: 0040ed5b-0040ed8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040ed5b(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}


/*
 * FUN_0040ed8e at 0040ed8e
 * undefined __stdcall FUN_0040ed8e(void)
 * Address ranges: 0040ed8e-0040edb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040ed8e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00413cc0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00413ba0 = 0;
  _DAT_00413bbc = 0;
  DAT_00413dc4 = 0;
  DAT_00413bb0 = 0;
  DAT_00413bb4 = 0;
  DAT_00413bb8 = 0;
  return;
}


/*
 * FUN_0040edb7 at 0040edb7
 * undefined __stdcall FUN_0040edb7(void)
 * Address ranges: 0040edb7-0040ef3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040edb7(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_00413ba0,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0040cfc1(1,local_118,0x100,local_518,DAT_00413ba0,DAT_00413dc4,0);
    FUN_0040cd72(DAT_00413dc4,0x100,local_118,0x100,local_218,0x100,DAT_00413ba0,0);
    FUN_0040cd72(DAT_00413dc4,0x200,local_118,0x100,local_318,0x100,DAT_00413ba0,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_00413cc0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_0040eec3;
        }
        (&DAT_00413bc0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00413cc0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_0040eec3:
        (&DAT_00413bc0)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_00413cc0 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_0040ef0d;
        }
        (&DAT_00413bc0)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_00413cc0 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_0040ef0d:
        (&DAT_00413bc0)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}


/*
 * FUN_0040ef3c at 0040ef3c
 * undefined __stdcall FUN_0040ef3c(void)
 * Address ranges: 0040ef3c-0040ef57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_0040ef3c(void)

{
  if (DAT_00413f08 == 0) {
    FUN_0040eb78(-3);
    DAT_00413f08 = 1;
  }
  return;
}


/*
 * FUN_0040ef60 at 0040ef60
 * undefined4 * __cdecl FUN_0040ef60(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 0040ef60-0040efba;0040efbc-0040efc2;0040efd0-0040eff8;0040effc-0040f01e;0040f020-0040f038;0040f05c-0040f0a5;0040f0b8-0040f0be;0040f0c0-0040f0ca;0040f0cc-0040f0dc;0040f0e0-0040f0f6;0040f0f8-0040f11d;0040f120-0040f128;0040f12c-0040f14a;0040f158-0040f174;0040f178-0040f19e;0040f1a0-0040f1d0;0040f1f4-0040f23d;0040f250-0040f256;0040f258-0040f264;0040f268-0040f27a;0040f27c-0040f294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_0040ef60(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0040f117_caseD_2;
        case 3:
          goto switchD_0040f117_caseD_3;
        }
        goto switchD_0040f117_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0040f117_caseD_0;
      case 1:
        goto switchD_0040f117_caseD_1;
      case 2:
        goto switchD_0040f117_caseD_2;
      case 3:
        goto switchD_0040f117_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040f117_caseD_2;
            case 3:
              goto switchD_0040f117_caseD_3;
            }
            goto switchD_0040f117_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040f117_caseD_2;
            case 3:
              goto switchD_0040f117_caseD_3;
            }
            goto switchD_0040f117_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040f117_caseD_2;
            case 3:
              goto switchD_0040f117_caseD_3;
            }
            goto switchD_0040f117_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0040f117_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_0040f117_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_0040f117_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_0040f117_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0040ef95_caseD_2;
      case 3:
        goto switchD_0040ef95_caseD_3;
      }
      goto switchD_0040ef95_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0040ef95_caseD_0;
    case 1:
      goto switchD_0040ef95_caseD_1;
    case 2:
      goto switchD_0040ef95_caseD_2;
    case 3:
      goto switchD_0040ef95_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040ef95_caseD_2;
          case 3:
            goto switchD_0040ef95_caseD_3;
          }
          goto switchD_0040ef95_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040ef95_caseD_2;
          case 3:
            goto switchD_0040ef95_caseD_3;
          }
          goto switchD_0040ef95_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040ef95_caseD_2;
          case 3:
            goto switchD_0040ef95_caseD_3;
          }
          goto switchD_0040ef95_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0040ef95_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_0040ef95_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0040ef95_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_0040ef95_caseD_0:
  return param_1;
}


/*
 * FUN_0040f295 at 0040f295
 * undefined __cdecl FUN_0040f295(byte param_1)
 * Address ranges: 0040f295-0040f2a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_0040f295(byte param_1)

{
  FUN_0040f2a6(param_1,0,4);
  return;
}


/*
 * FUN_0040f2a6 at 0040f2a6
 * undefined4 __cdecl FUN_0040f2a6(byte param_1, uint param_2, byte param_3)
 * Address ranges: 0040f2a6-0040f2d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040f2a6(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_00413cc0 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00412f1a + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/*
 * _strlen at 0040f2e0
 * size_t __cdecl _strlen(char * _Str)
 * Address ranges: 0040f2e0-0040f35a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  _strlen  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_0040f300;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_0040f333:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_0040f300:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_0040f333;
}


/*
 * FUN_0040f360 at 0040f360
 * undefined4 * __cdecl FUN_0040f360(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 0040f360-0040f3ba;0040f3bc-0040f3c2;0040f3d0-0040f3f8;0040f3fc-0040f41e;0040f420-0040f438;0040f45c-0040f4a5;0040f4b8-0040f4be;0040f4c0-0040f4ca;0040f4cc-0040f4dc;0040f4e0-0040f4f6;0040f4f8-0040f51d;0040f520-0040f528;0040f52c-0040f54a;0040f558-0040f574;0040f578-0040f59e;0040f5a0-0040f5d0;0040f5f4-0040f63d;0040f650-0040f656;0040f658-0040f664;0040f668-0040f67a;0040f67c-0040f694
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 * __cdecl FUN_0040f360(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_0040f517_caseD_2;
        case 3:
          goto switchD_0040f517_caseD_3;
        }
        goto switchD_0040f517_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_0040f517_caseD_0;
      case 1:
        goto switchD_0040f517_caseD_1;
      case 2:
        goto switchD_0040f517_caseD_2;
      case 3:
        goto switchD_0040f517_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040f517_caseD_2;
            case 3:
              goto switchD_0040f517_caseD_3;
            }
            goto switchD_0040f517_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040f517_caseD_2;
            case 3:
              goto switchD_0040f517_caseD_3;
            }
            goto switchD_0040f517_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_0040f517_caseD_2;
            case 3:
              goto switchD_0040f517_caseD_3;
            }
            goto switchD_0040f517_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_0040f517_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_0040f517_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_0040f517_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_0040f517_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_0040f395_caseD_2;
      case 3:
        goto switchD_0040f395_caseD_3;
      }
      goto switchD_0040f395_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_0040f395_caseD_0;
    case 1:
      goto switchD_0040f395_caseD_1;
    case 2:
      goto switchD_0040f395_caseD_2;
    case 3:
      goto switchD_0040f395_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040f395_caseD_2;
          case 3:
            goto switchD_0040f395_caseD_3;
          }
          goto switchD_0040f395_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040f395_caseD_2;
          case 3:
            goto switchD_0040f395_caseD_3;
          }
          goto switchD_0040f395_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_0040f395_caseD_2;
          case 3:
            goto switchD_0040f395_caseD_3;
          }
          goto switchD_0040f395_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_0040f395_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_0040f395_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_0040f395_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_0040f395_caseD_0:
  return param_1;
}


/*
 * FUN_0040f695 at 0040f695
 * int __cdecl FUN_0040f695(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0040f695-0040f71d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


int __cdecl FUN_0040f695(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00413678 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_00413678 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_00413678 != (FARPROC)0x0) {
        DAT_0041367c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_00413680 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0040f6e4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0040f6e4:
    if (DAT_0041367c != (FARPROC)0x0) {
      iVar1 = (*DAT_0041367c)();
      if ((iVar1 != 0) && (DAT_00413680 != (FARPROC)0x0)) {
        iVar1 = (*DAT_00413680)(iVar1);
      }
    }
    iVar1 = (*DAT_00413678)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}


/*
 * KERNEL32.DLL::RtlUnwind at 0040f720
 * void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
 * Address ranges: 0040f720-0040f725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::RtlUnwind
 */


void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    /* WARNING: Could not recover jumptable at 0x0040f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}


/*
 * FUN_0040f730 at 0040f730
 * undefined4 __cdecl FUN_0040f730(byte * param_1, char * param_2, void * param_3)
 * Address ranges: 0040f730-0040f7dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_0040f730(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  void *this;
  uint uVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_0041353c == 0) {
      do {
        bVar2 = *param_1;
        cVar1 = *param_2;
        uVar3 = CONCAT11(bVar2,cVar1);
        if (bVar2 == 0) break;
        uVar3 = CONCAT11(bVar2,cVar1);
        uVar6 = (uint)uVar3;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar6 = (uint)CONCAT11(bVar2 + 0x20,cVar1);
        }
        uVar3 = (ushort)uVar6;
        bVar2 = (byte)uVar6;
        if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
          uVar3 = (ushort)CONCAT31((int3)(uVar6 >> 8),bVar2 + 0x20);
        }
        bVar2 = (byte)(uVar3 >> 8);
        bVar7 = bVar2 < (byte)uVar3;
        if (bVar2 != (byte)uVar3) goto LAB_0040f78b;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar5 = 0;
      bVar2 = (byte)(uVar3 >> 8);
      bVar7 = bVar2 < (byte)uVar3;
      if (bVar2 != (byte)uVar3) {
LAB_0040f78b:
        uVar5 = 0xffffffff;
        if (!bVar7) {
          uVar5 = 1;
        }
      }
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      do {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),*param_1);
        uVar6 = CONCAT31((int3)(uVar6 >> 8),*param_2);
        if ((uVar4 == 0) || (uVar6 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar6 = FUN_0040f86c(param_3,uVar6);
        uVar4 = FUN_0040f86c(this,uVar4);
        bVar7 = uVar4 < uVar6;
        if (uVar4 != uVar6) goto LAB_0040f7cd;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar5 = 0;
      bVar7 = uVar4 < uVar6;
      if (uVar4 != uVar6) {
LAB_0040f7cd:
        uVar5 = 0xffffffff;
        if (!bVar7) {
          uVar5 = 1;
        }
      }
    }
  }
  return uVar5;
}


/*
 * __strcmpi at 0040f7e0
 * int __cdecl __strcmpi(char * _Str1, char * _Str2)
 * Address ranges: 0040f7e0-0040f86b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __strcmpi  Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release
 */


/* Library Function - Single Match
    __strcmpi
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl __strcmpi(char *_Str1,char *_Str2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar7;
  void *in_ECX;
  void *this;
  void *extraout_ECX;
  uint uVar8;
  int iVar6;
  
  if (DAT_0041353c == 0) {
    bVar4 = 0xff;
    do {
      do {
        cVar5 = '\0';
        if (bVar4 == 0) goto LAB_0040f82e;
        bVar4 = *_Str2;
        _Str2 = _Str2 + 1;
        bVar3 = *_Str1;
        _Str1 = _Str1 + 1;
      } while (bVar3 == bVar4);
      bVar2 = bVar4 + 0xbf + (-((byte)(bVar4 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar3 = bVar3 + 0xbf;
      bVar4 = bVar3 + (-(bVar3 < 0x1a) & 0x20U) + 0x41;
    } while (bVar4 == bVar2);
    cVar5 = (bVar4 < bVar2) * -2 + '\x01';
LAB_0040f82e:
    iVar6 = (int)cVar5;
  }
  else {
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') {
          return uVar7;
        }
        cVar5 = *_Str2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar5);
        _Str2 = _Str2 + 1;
        cVar1 = *_Str1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),cVar1);
        _Str1 = _Str1 + 1;
      } while (cVar5 == cVar1);
      uVar8 = FUN_0040f86c(in_ECX,uVar8);
      uVar7 = FUN_0040f86c(this,uVar7);
      in_ECX = extraout_ECX;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar7 = (uint)((byte)uVar8 < (byte)uVar7);
    iVar6 = (1 - uVar7) - (uint)(uVar7 != 0);
  }
  return iVar6;
}


/*
 * FUN_0040f86c at 0040f86c
 * uint __thiscall FUN_0040f86c(void * this, uint param_1)
 * Address ranges: 0040f86c-0040f936
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __thiscall FUN_0040f86c(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_0041353c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_0041311c < 2) {
        uVar2 = (byte)PTR_DAT_00412f10[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_0040c27e(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_00412f10[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_0040cd72(DAT_0041353c,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}


