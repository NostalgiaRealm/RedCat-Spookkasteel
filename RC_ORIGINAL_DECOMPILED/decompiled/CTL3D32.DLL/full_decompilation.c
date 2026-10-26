/* Ghidra-generated C-like pseudocode for inspection. Not original source and not a buildable reconstruction. */
/*
 * FUN_5f001000 at 5f001000
 * HANDLE __cdecl FUN_5f001000(HWND param_1)
 * Address ranges: 5f001000-5f00101c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


HANDLE __cdecl FUN_5f001000(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 == (HWND)0x0) {
    return (HANDLE)0x0;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
  return pvVar1;
}


/*
 * FUN_5f001020 at 5f001020
 * HANDLE __cdecl FUN_5f001020(HWND param_1, int param_2)
 * Address ranges: 5f001020-5f001065
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


HANDLE __cdecl FUN_5f001020(HWND param_1,int param_2)

{
  HANDLE hData;
  
  hData = FUN_5f001000(param_1);
  if (hData == (HANDLE)0x0) {
    hData = DAT_5f00a390;
    if (param_2 != 6) {
      hData = (HANDLE)(&DAT_5f00a2a4)[param_2 * 10];
    }
    SetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e,hData);
  }
  return hData;
}


/*
 * FUN_5f001070 at 5f001070
 * undefined __cdecl FUN_5f001070(HWND param_1, LONG param_2)
 * Address ranges: 5f001070-5f00116a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001070(HWND param_1,LONG param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  int iVar3;
  WCHAR local_20 [16];
  
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005248);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005252);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524c);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005250);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524a);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return;
  }
  if ((DAT_5f00a3a5 != '\0') && (BVar2 = IsWindowUnicode(param_1), BVar2 == 0)) {
    GetClassNameW(param_1,local_20,0x10);
    iVar3 = lstrcmpiW(local_20,u_edit_5f00c000);
    if (iVar3 == 0) {
      pvVar1 = (HANDLE)SetWindowLongA(param_1,-4,param_2);
      goto LAB_5f001154;
    }
  }
  pvVar1 = (HANDLE)SetWindowLongW(param_1,-4,param_2);
LAB_5f001154:
  SetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e,pvVar1);
  return;
}


/*
 * FUN_5f001220 at 5f001220
 * undefined __cdecl FUN_5f001220(undefined4 param_1, undefined4 param_2)
 * Address ranges: 5f001220-5f001253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001220(undefined4 param_1,undefined4 param_2)

{
  DWORD dwThreadId;
  
  DAT_5f005210 = param_2;
  DAT_5f005208 = param_1;
  dwThreadId = GetCurrentThreadId();
  DAT_5f00520c = SetWindowsHookExW(4,(HOOKPROC)&LAB_5f001170,DAT_5f00525c,dwThreadId);
  return;
}


/*
 * FUN_5f001260 at 5f001260
 * LRESULT __cdecl FUN_5f001260(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * Address ranges: 5f001260-5f0012b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LRESULT __cdecl FUN_5f001260(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  lpPrevWndFunc = FUN_5f001020(param_1,param_5);
  LVar1 = CallWindowProcW(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
  RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  return LVar1;
}


/*
 * FUN_5f0012c0 at 5f0012c0
 * undefined __cdecl FUN_5f0012c0(undefined4 * param_1)
 * Address ranges: 5f0012c0-5f0012d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f0012c0(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}


/*
 * FUN_5f0012e0 at 5f0012e0
 * undefined __stdcall FUN_5f0012e0(void)
 * Address ranges: 5f0012e0-5f001308
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_5f0012e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_5f005284;
  do {
    FUN_5f0012c0(puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f005290);
  FUN_5f0012c0(&DAT_5f005290);
  return;
}


/*
 * FUN_5f001310 at 5f001310
 * undefined __cdecl FUN_5f001310(HDC param_1, int * param_2)
 * Address ranges: 5f001310-5f001339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001310(HDC param_1,int *param_2)

{
  PatBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0xf00021);
  return;
}


/*
 * FUN_5f001340 at 5f001340
 * undefined __cdecl FUN_5f001340(HDC param_1, int * param_2, ushort param_3, ushort param_4, ushort param_5)
 * Address ranges: 5f001340-5f001471
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001340(HDC param_1,int *param_2,ushort param_3,ushort param_4,ushort param_5)

{
  COLORREF color;
  RECT local_10;
  
  color = SetBkColor(param_1,*(COLORREF *)(&DAT_5f005264 + (uint)param_3 * 4));
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = param_2[2];
  local_10.bottom = local_10.top + 1;
  if ((param_5 & 2) != 0) {
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  local_10.bottom = param_2[3];
  local_10.right = local_10.left + 1;
  if ((param_5 & 1) != 0) {
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  if (param_4 != param_3) {
    SetBkColor(param_1,*(COLORREF *)(&DAT_5f005264 + (uint)param_4 * 4));
  }
  local_10.right = param_2[2];
  local_10.left = local_10.right + -1;
  if ((param_5 & 4) != 0) {
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  if ((param_5 & 8) != 0) {
    local_10.left = *param_2;
    local_10.top = local_10.bottom + -1;
    if ((param_5 & 0x1000) != 0) {
      local_10.right = local_10.right + -2;
    }
    ExtTextOutW(param_1,0,0,2,&local_10,(LPCWSTR)0x0,0,(INT *)0x0);
  }
  SetBkColor(param_1,color);
  return;
}


/*
 * FUN_5f001480 at 5f001480
 * undefined __cdecl FUN_5f001480(HDC param_1, int * param_2, ushort param_3)
 * Address ranges: 5f001480-5f0014ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001480(HDC param_1,int *param_2,ushort param_3)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_2[3];
  FUN_5f001340(param_1,&local_10,7,1,param_3 & 0xf);
  local_10 = local_10 + -1;
  local_c = local_c + -1;
  local_8 = local_8 + 1;
  local_4 = local_4 + 1;
  FUN_5f001340(param_1,&local_10,2,0,param_3);
  return;
}


/*
 * FUN_5f0014f0 at 5f0014f0
 * undefined __cdecl FUN_5f0014f0(HWND param_1, HDC param_2)
 * Address ranges: 5f0014f0-5f001525
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f0014f0(HWND param_1,HDC param_2)

{
  tagRECT local_10;
  
  GetClientRect(param_1,&local_10);
  IntersectClipRect(param_2,local_10.left,local_10.top,local_10.right,local_10.bottom);
  return;
}


/*
 * FUN_5f001530 at 5f001530
 * undefined __cdecl FUN_5f001530(HDC param_1, WCHAR * param_2, LONG * param_3, LONG * param_4)
 * Address ranges: 5f001530-5f0015fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001530(HDC param_1,WCHAR *param_2,LONG *param_3,LONG *param_4)

{
  WCHAR WVar1;
  int c;
  WCHAR *pWVar2;
  tagSIZE *lpsz;
  tagSIZE local_208;
  WCHAR local_200 [256];
  
  pWVar2 = local_200;
  WVar1 = *param_2;
  while (WVar1 != L'\0') {
    WVar1 = *param_2;
    if (WVar1 == L'&') {
      param_2 = param_2 + 1;
      if (*param_2 == L'\0') break;
LAB_5f00159c:
      WVar1 = *param_2;
      param_2 = param_2 + 1;
      *pWVar2 = WVar1;
      pWVar2 = pWVar2 + 1;
    }
    else {
      if (DAT_5f00a3a5 == '\0') goto LAB_5f00159c;
      if ((int)DAT_5f00a3a4 == (uint)(ushort)WVar1) {
        param_2 = param_2 + 1;
        if (*param_2 != L'\0') goto LAB_5f00159c;
        break;
      }
      if ((WVar1 != L'\x1e') && (WVar1 != L'\x1f')) goto LAB_5f00159c;
      if (param_2[1] == L'\0') break;
      param_2 = CharNextW(param_2 + 1);
    }
    WVar1 = *param_2;
  }
  *pWVar2 = L'\0';
  lpsz = &local_208;
  c = lstrlenW(local_200);
  GetTextExtentPointW(param_1,local_200,c,lpsz);
  *param_3 = local_208.cx;
  *param_4 = local_208.cy;
  return;
}


/*
 * Ctl3dRegister at 5f001600
 * undefined4 __stdcall Ctl3dRegister(undefined4 param_1)
 * Address ranges: 5f001600-5f001644
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dRegister(undefined4 param_1)

{
  int iVar1;
  
                    /* 0x1600  12  Ctl3dRegister */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  DAT_5f005244 = DAT_5f005244 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DAT_5f005244 == 1) {
    FUN_5f002180();
  }
  iVar1 = Ctl3dIsAutoSubclass();
  if (iVar1 != 0) {
    Ctl3dAutoSubclass(param_1);
  }
  return DAT_5f005240;
}


/*
 * Ctl3dUnregister at 5f001650
 * undefined4 __stdcall Ctl3dUnregister(int param_1)
 * Address ranges: 5f001650-5f00170a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dUnregister(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* 0x1650  13  Ctl3dUnregister */
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (0 < DAT_5f00529c) {
    do {
      if (((&DAT_5f0052a4)[iVar3 * 5] == DVar1) &&
         ((iVar2 = (&DAT_5f0052ac)[iVar3 * 5], (&DAT_5f0052ac)[iVar3 * 5] = iVar2 + -1,
          iVar2 + -1 == 0 || ((&DAT_5f0052a0)[iVar3 * 5] == param_1)))) {
        UnhookWindowsHookEx((HHOOK)(&DAT_5f0052a8)[iVar3 * 5]);
        DAT_5f00529c = DAT_5f00529c + -1;
        if (iVar3 < DAT_5f00529c) {
          puVar5 = &DAT_5f0052a0 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_5f00529c);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00529c);
  }
  DAT_5f005244 = DAT_5f005244 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DAT_5f005244 == 0) {
    FUN_5f002480();
  }
  return 1;
}


/*
 * Ctl3dAutoSubclass at 5f001710
 * undefined __stdcall Ctl3dAutoSubclass(undefined4 param_1)
 * Address ranges: 5f001710-5f00171e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void Ctl3dAutoSubclass(undefined4 param_1)

{
                    /* 0x1710  16  Ctl3dAutoSubclass */
  Ctl3dAutoSubclassEx(param_1,0);
  return;
}


/*
 * Ctl3dAutoSubclassEx at 5f001720
 * undefined4 __stdcall Ctl3dAutoSubclassEx(undefined4 param_1, uint param_2)
 * Address ranges: 5f001720-5f001858
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dAutoSubclassEx(undefined4 param_1,uint param_2)

{
  DWORD dwThreadId;
  int iVar1;
  HHOOK pHVar2;
  DWORD *pDVar3;
  uint uVar4;
  
                    /* 0x1720  27  Ctl3dAutoSubclassEx */
  if (DAT_5f005260 < 0x30a) {
    return 0;
  }
  if (DAT_5f005240 == 0) {
    return 0;
  }
  uVar4 = param_2 | 1;
  if ((param_2 & 2) != 0) {
    uVar4 = param_2 & 0xfffffffc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DAT_5f00529c != 0x400) {
    dwThreadId = GetCurrentThreadId();
    iVar1 = 0;
    if (0 < DAT_5f00529c) {
      pDVar3 = &DAT_5f0052a4;
      do {
        if (*pDVar3 == dwThreadId) {
          (&DAT_5f0052ac)[iVar1 * 5] = (&DAT_5f0052ac)[iVar1 * 5] + 1;
          goto LAB_5f001826;
        }
        pDVar3 = pDVar3 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_5f00529c);
    }
    pHVar2 = SetWindowsHookExW(5,FUN_5f002a60,DAT_5f00525c,dwThreadId);
    if (pHVar2 != (HHOOK)0x0) {
      (&DAT_5f0052a0)[DAT_5f00529c * 5] = param_1;
      (&DAT_5f0052a4)[DAT_5f00529c * 5] = dwThreadId;
      (&DAT_5f0052a8)[DAT_5f00529c * 5] = pHVar2;
      (&DAT_5f0052ac)[DAT_5f00529c * 5] = 1;
      *(uint *)(&DAT_5f0052b0 + DAT_5f00529c * 0x14) = uVar4;
      DAT_5f005298 = DAT_5f00529c;
      DAT_5f00529c = DAT_5f00529c + 1;
      DAT_5f005294 = dwThreadId;
LAB_5f001826:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
      return 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return 0;
}


/*
 * Ctl3dIsAutoSubclass at 5f001860
 * undefined4 __stdcall Ctl3dIsAutoSubclass(void)
 * Address ranges: 5f001860-5f00188d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dIsAutoSubclass(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
                    /* 0x1860  23  Ctl3dIsAutoSubclass */
  DVar1 = GetCurrentThreadId();
  iVar3 = 0;
  if (0 < DAT_5f00529c) {
    pDVar2 = &DAT_5f0052a4;
    do {
      if (*pDVar2 == DVar1) {
        return 1;
      }
      pDVar2 = pDVar2 + 5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00529c);
  }
  return 0;
}


/*
 * Ctl3dUnAutoSubclass at 5f001890
 * undefined4 __stdcall Ctl3dUnAutoSubclass(void)
 * Address ranges: 5f001890-5f001928
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dUnAutoSubclass(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
                    /* 0x1890  24  Ctl3dUnAutoSubclass */
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (0 < DAT_5f00529c) {
    do {
      if (((&DAT_5f0052a4)[iVar3 * 5] == DVar1) &&
         (iVar2 = (&DAT_5f0052ac)[iVar3 * 5], (&DAT_5f0052ac)[iVar3 * 5] = iVar2 + -1,
         iVar2 + -1 == 0)) {
        UnhookWindowsHookEx((HHOOK)(&DAT_5f0052a8)[iVar3 * 5]);
        DAT_5f00529c = DAT_5f00529c + -1;
        if (iVar3 < DAT_5f00529c) {
          puVar5 = &DAT_5f0052a0 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_5f00529c);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_5f00529c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return 1;
}


/*
 * Ctl3dSetStyle at 5f001930
 * undefined2 __stdcall Ctl3dSetStyle(void)
 * Address ranges: 5f001930-5f001935
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined2 Ctl3dSetStyle(void)

{
                    /* 0x1930  19  Ctl3dSetStyle */
  return 0;
}


/*
 * Ctl3dGetVer at 5f001940
 * undefined2 __stdcall Ctl3dGetVer(void)
 * Address ranges: 5f001940-5f001944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined2 Ctl3dGetVer(void)

{
                    /* 0x1940  1  Ctl3dGetVer */
  return 0x231;
}


/*
 * Ctl3dEnabled at 5f001950
 * undefined4 __stdcall Ctl3dEnabled(void)
 * Address ranges: 5f001950-5f001955
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dEnabled(void)

{
                    /* 0x1950  5  Ctl3dEnabled */
  return DAT_5f005240;
}


/*
 * Ctl3dSubclassCtl at 5f001960
 * bool __stdcall Ctl3dSubclassCtl(HWND param_1)
 * Address ranges: 5f001960-5f001986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool Ctl3dSubclassCtl(HWND param_1)

{
  bool bVar1;
  
                    /* 0x1960  3  Ctl3dSubclassCtl */
  if (DAT_5f005240 == 0) {
    return false;
  }
  bVar1 = FUN_5f002e40(param_1,0xffff,0,0);
  return bVar1;
}


/*
 * Ctl3dUnsubclassCtl at 5f001990
 * undefined4 __stdcall Ctl3dUnsubclassCtl(HWND param_1)
 * Address ranges: 5f001990-5f001a96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dUnsubclassCtl(HWND param_1)

{
  code *pcVar1;
  HANDLE pvVar2;
  HWND hWnd;
  int iVar3;
  
                    /* 0x1990  26  Ctl3dUnsubclassCtl */
  if (DAT_5f005240 != 0) {
    pcVar1 = (code *)GetWindowLongW(param_1,-4);
    iVar3 = 0;
    do {
      if ((code *)(&DAT_5f00a2a0)[iVar3 * 10] == pcVar1) {
        pvVar2 = FUN_5f001020(param_1,iVar3);
        RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
        SetWindowLongW(param_1,-4,(LONG)pvVar2);
        pcVar1 = (code *)0x0;
        iVar3 = 0x10;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (iVar3 == 6) {
      if (pcVar1 == Ctl3dDlgProc) {
        pvVar2 = FUN_5f001020(param_1,6);
        RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
        SetWindowLongW(param_1,-4,(LONG)pvVar2);
      }
      else {
        pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
        if (((pvVar2 != (HANDLE)0x0) ||
            (pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005252), pvVar2 != (HANDLE)0x0)) ||
           (pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005250), pvVar2 != (HANDLE)0x0)) {
          SetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254,(HANDLE)0x1);
        }
      }
    }
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      Ctl3dUnsubclassCtl(hWnd);
    }
    return 1;
  }
  return 0;
}


/*
 * Ctl3dSubclassCtlEx at 5f001aa0
 * undefined4 __stdcall Ctl3dSubclassCtlEx(HWND param_1, int param_2)
 * Address ranges: 5f001aa0-5f001b31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dSubclassCtlEx(HWND param_1,int param_2)

{
  HANDLE pvVar1;
  LONG LVar2;
  HWND pHVar3;
  int iVar4;
  
                    /* 0x1aa0  25  Ctl3dSubclassCtlEx */
  if (DAT_5f005240 == 0) {
    return 0;
  }
  if ((-1 < param_2) && (param_2 < 7)) {
    pvVar1 = FUN_5f001000(param_1);
    if (pvVar1 != (HANDLE)0x0) {
      return 0;
    }
    LVar2 = GetWindowLongW(param_1,-0x10);
    pHVar3 = GetParent(param_1);
    iVar4 = (*(code *)(&PTR_FUN_5f00b064)[param_2 * 0xd])(param_1,LVar2,0xffff,0,pHVar3);
    if (iVar4 == 1) {
      FUN_5f001070(param_1,(&DAT_5f00a2a0)[param_2 * 10]);
    }
    return 1;
  }
  return 0;
}


/*
 * Ctl3dSubclassDlg at 5f001b40
 * undefined4 __stdcall Ctl3dSubclassDlg(HWND param_1, ushort param_2)
 * Address ranges: 5f001b40-5f001b91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dSubclassDlg(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1b40  2  Ctl3dSubclassDlg */
  if (DAT_5f005240 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002e40(hWnd,param_2,0,0);
  }
  return 1;
}


/*
 * FUN_5f001ba0 at 5f001ba0
 * undefined __cdecl FUN_5f001ba0(HWND param_1, ushort param_2, undefined4 param_3)
 * Address ranges: 5f001ba0-5f001c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f001ba0(HWND param_1,ushort param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  int local_4;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_5f002e40(param_1,param_2,0,param_3);
    return;
  }
  pvVar1 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar1 == (HANDLE)0x0) {
    local_4 = 0x29a;
    SendMessageW(param_1,0x1944,0,(LPARAM)&local_4);
    if (local_4 == 0x29a) {
      SendMessageW(param_1,0x1943,0,(LPARAM)&local_4);
      if (local_4 == 0x29a) {
        RemovePropW(param_1,(LPCWSTR)(uint)DAT_5f00524e);
        FUN_5f002e40(param_1,param_2,0,param_3);
      }
    }
  }
  return;
}


/*
 * FUN_5f001c50 at 5f001c50
 * undefined4 __stdcall FUN_5f001c50(HWND param_1, ushort param_2)
 * Address ranges: 5f001c50-5f001cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 FUN_5f001c50(HWND param_1,ushort param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  if (DAT_5f005240 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_5f001ba0(hWnd,param_2,0);
      for (hWnd_00 = GetWindow(hWnd,5); hWnd_00 != (HWND)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
        FUN_5f001ba0(hWnd_00,param_2,hWnd);
      }
    }
    return 1;
  }
  return 0;
}


/*
 * Ctl3dSubclassDlgEx at 5f001cd0
 * undefined4 __stdcall Ctl3dSubclassDlgEx(HWND param_1, ushort param_2)
 * Address ranges: 5f001cd0-5f001d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dSubclassDlgEx(HWND param_1,ushort param_2)

{
  HWND hWnd;
  
                    /* 0x1cd0  21  Ctl3dSubclassDlgEx */
  if (DAT_5f005240 == 0) {
    return 0;
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    FUN_5f002e40(hWnd,param_2,0,0);
  }
  FUN_5f001070(param_1,0x5f0026f0);
  return 1;
}


/*
 * Ctl3dCtlColor at 5f001d40
 * undefined4 __stdcall Ctl3dCtlColor(void)
 * Address ranges: 5f001d40-5f001d44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dCtlColor(void)

{
                    /* 0x1d40  4  Ctl3dCtlColor */
  return 0;
}


/*
 * Ctl3dCtlColorEx at 5f001d50
 * undefined4 __stdcall Ctl3dCtlColorEx(uint param_1, HDC param_2, HWND param_3)
 * Address ranges: 5f001d50-5f001dd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dCtlColorEx(uint param_1,HDC param_2,HWND param_3)

{
  HWND pHVar1;
  LONG LVar2;
  
                    /* 0x1d50  18  Ctl3dCtlColorEx */
  if (((DAT_5f005240 == 0) || (param_1 < 0x134)) || (param_1 == 0x137)) {
    return 0;
  }
  if (param_1 == 0x134) {
    if (DAT_5f005260 < 0x35f) {
      pHVar1 = GetWindow(param_3,5);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = GetWindowLongW(param_3,-0x10);
        if (((byte)LVar2 & 3) != 3) goto LAB_5f001da4;
      }
    }
    return 0;
  }
LAB_5f001da4:
  SetTextColor(param_2,DAT_5f005270);
  SetBkColor(param_2,DAT_5f005268);
  return DAT_5f005288;
}


/*
 * Ctl3dColorChange at 5f001de0
 * undefined4 __stdcall Ctl3dColorChange(void)
 * Address ranges: 5f001de0-5f001e06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 Ctl3dColorChange(void)

{
  undefined4 uVar1;
  
                    /* 0x1de0  6  Ctl3dColorChange */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  uVar1 = FUN_5f002560(0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return uVar1;
}


/*
 * Ctl3dDlgFramePaint at 5f001e10
 * undefined __stdcall Ctl3dDlgFramePaint(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
 * Address ranges: 5f001e10-5f001e2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void Ctl3dDlgFramePaint(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
                    /* 0x1e10  20  Ctl3dDlgFramePaint */
  FUN_5f001e30(param_1,param_2,param_3,param_4,1);
  return;
}


/*
 * FUN_5f001e30 at 5f001e30
 * LRESULT __stdcall FUN_5f001e30(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
 * Address ranges: 5f001e30-5f0020d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_5f001e30(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  BOOL BVar2;
  uint uVar3;
  HDC hdc;
  int iVar4;
  bool bVar5;
  int local_38;
  HGDIOBJ local_34;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_5 == 0) {
    lpPrevWndFunc = FUN_5f001020(param_1,6);
  }
  else {
    lpPrevWndFunc = (WNDPROC)0x0;
  }
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    LVar1 = DefWindowProcW(param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = CallWindowProcW(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  }
  if (DAT_5f005240 == 0) {
    return LVar1;
  }
  BVar2 = IsIconic(param_1);
  if (BVar2 != 0) {
    return LVar1;
  }
  local_38 = 1;
  SendMessageW(param_1,0x11ef,0,(LPARAM)&local_38);
  uVar3 = GetWindowLongW(param_1,-0x10);
  if ((local_38 != 0) && ((uVar3 & 0x10400080) == 0x10400080)) {
    bVar5 = (uVar3 & 0xc00000) == 0xc00000;
    iVar4 = DAT_5f00a398 - (uint)bVar5;
    hdc = GetWindowDC(param_1);
    GetWindowRect(param_1,&local_30);
    local_30.right = local_30.right - local_30.left;
    local_30.bottom = local_30.bottom - local_30.top;
    local_30.top = 0;
    local_30.left = 0;
    FUN_5f001340(hdc,&local_30.left,2,7,0xf);
    InflateRect(&local_30,-1,-1);
    FUN_5f001340(hdc,&local_30.left,0,2,0xf);
    InflateRect(&local_30,-1,-1);
    local_34 = SelectObject(hdc,DAT_5f005288);
    local_20.left = local_30.left;
    local_20.top = local_30.top;
    local_20.bottom = local_30.bottom;
    local_20.right = local_30.left + _DAT_5f00a394;
    FUN_5f001310(hdc,&local_20.left);
    OffsetRect(&local_20,(local_30.right - local_30.left) - _DAT_5f00a394,0);
    FUN_5f001310(hdc,&local_20.left);
    local_20.left = local_30.left + _DAT_5f00a394;
    local_20.right = local_30.right - _DAT_5f00a394;
    local_20.bottom = local_20.top + iVar4;
    FUN_5f001310(hdc,&local_20.left);
    if (bVar5) {
      local_c = iVar4 + local_20.top;
      local_10 = local_20.left;
      local_8 = local_20.right;
      local_4 = DAT_5f00a39c + local_c;
      FUN_5f001340(hdc,&local_10,2,0,0xf);
    }
    local_20.top = local_20.top + ((local_30.bottom - local_30.top) - _DAT_5f00a394);
    local_20.bottom = local_20.top + DAT_5f00a398;
    FUN_5f001310(hdc,&local_20.left);
    SelectObject(hdc,local_34);
    ReleaseDC(param_1,hdc);
  }
  return LVar1;
}


/*
 * Ctl3dWinIniChange at 5f0020e0
 * undefined __stdcall Ctl3dWinIniChange(void)
 * Address ranges: 5f0020e0-5f00217e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void Ctl3dWinIniChange(void)

{
  int iVar1;
  WCHAR local_14 [10];
  
                    /* 0x20e0  22  Ctl3dWinIniChange */
  if (DAT_5f00a3a5 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
    DAT_5f00a3a4 = 0x1e;
    GetProfileStringW(u_windows_5f00c070,u_kanjimenu_5f00c05c,u_roman_5f00c038,local_14,9);
    iVar1 = lstrcmpiW(local_14,u_kanji_5f00c01c);
    if (iVar1 == 0) {
      DAT_5f00a3a4 = 0x1f;
    }
    GetProfileStringW(u_windows_5f00c070,u_hangeulmenu_5f00c044,u_english_5f00c028,local_14,9);
    iVar1 = lstrcmpiW(local_14,u_hangeul_5f00c00c);
    if (iVar1 == 0) {
      DAT_5f00a3a4 = 0x1f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  }
  return;
}


/*
 * FUN_5f002180 at 5f002180
 * uint __stdcall FUN_5f002180(void)
 * Address ranges: 5f002180-5f002478
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint FUN_5f002180(void)

{
  undefined **lpClassName;
  DWORD DVar1;
  LPCWSTR lpszCurrent;
  int iVar2;
  HDC hdc;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  char *lpText;
  WCHAR local_234 [2];
  tagWNDCLASSW local_230;
  WCHAR local_208 [260];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  DVar1 = GetEnvironmentVariableW(u_Ctl3d_RunAlways_5f00c200,local_234,2);
  if ((DVar1 == 0) || (local_234[0] != L'1')) {
    DVar1 = GetVersion();
    if ((DVar1 & 0x80000000) == 0) {
      DVar1 = GetModuleFileNameW(DAT_5f005258,(LPWSTR)&DAT_5f005000,0x104);
      for (lpszCurrent = (LPCWSTR)(DVar1 * 2 + 0x5f004ffe); (LPCWSTR)0x5f004fff < lpszCurrent;
          lpszCurrent = CharPrevW((LPCWSTR)&DAT_5f005000,lpszCurrent)) {
        if (*lpszCurrent == L'\\') {
          if (lpszCurrent[-1] == L':') {
            lpszCurrent[1] = L'\0';
          }
          else {
            *lpszCurrent = L'\0';
          }
          break;
        }
      }
      GetSystemDirectoryW(local_208,0x104);
      iVar2 = lstrcmpiW((LPCWSTR)&DAT_5f005000,local_208);
      if (iVar2 != 0) {
        GetWindowsDirectoryW(local_208,0x104);
        iVar2 = lstrcmpiW((LPCWSTR)&DAT_5f005000,local_208);
        if (iVar2 != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
          lpText = s_This_application_uses_CTL3D32_DL_5f00c0dc;
          goto LAB_5f0021cf;
        }
      }
      goto LAB_5f0022b2;
    }
    lpText = s_This_application_uses_CTL3D32_DL_5f00c168;
LAB_5f0021cf:
    MessageBoxA((HWND)0x0,lpText,s_CTL3D32_DLL_5f00c1f4,0x10);
  }
  else {
LAB_5f0022b2:
    hdc = GetDC((HWND)0x0);
    iVar2 = GetDeviceCaps(hdc,0xc);
    iVar3 = GetDeviceCaps(hdc,0xe);
    DAT_5f005240 = (uint)(3 < iVar2 * iVar3);
    iVar2 = GetSystemMetrics(1);
    if ((iVar2 == 0x15e) && (iVar2 = GetSystemMetrics(0), iVar2 == 0x280)) {
      DAT_5f005240 = 0;
    }
    ReleaseDC((HWND)0x0,hdc);
    if (DAT_5f005240 == 0) goto LAB_5f0021e1;
    DAT_5f005248 = GlobalAddAtomW((LPCWSTR)&DAT_5f00c0c8);
    if ((DAT_5f005248 != 0) && (DAT_5f00524e = GlobalAddAtomW(u_C3dNew_5f00c0a0), DAT_5f00524e != 0)
       ) {
      DAT_5f00524c = GlobalAddAtomW(u_C3dL_5f00c0bc);
      DAT_5f00524a = GlobalAddAtomW(u_C3dH_5f00c0b0);
      if ((DAT_5f00524c == 0) || (DAT_5f00524a == 0)) {
        DAT_5f005240 = 0;
        return 0;
      }
      DAT_5f005252 = GlobalAddAtomW(u_C3dLNew_5f00c090);
      DAT_5f005250 = GlobalAddAtomW(u_C3dHNew_5f00c080);
      if ((DAT_5f005252 == 0) || (DAT_5f005250 == 0)) {
        DAT_5f005240 = 0;
        return 0;
      }
      DAT_5f005254 = GlobalAddAtomW(u_C3dD_5f00c0d0);
      if (DAT_5f005254 != 0) {
        iVar2 = GetSystemMetrics(0x2a);
        DAT_5f00a3a5 = (char)iVar2;
        Ctl3dWinIniChange();
        iVar2 = FUN_5f002560(1);
        if (iVar2 != 0) {
          ppuVar6 = &PTR_BtnWndProc3d_5f00b060;
          puVar5 = &DAT_5f00a2a0;
          do {
            lpClassName = ppuVar6 + -10;
            *puVar5 = *ppuVar6;
            ppuVar6 = ppuVar6 + 0xd;
            GetClassInfoW((HINSTANCE)0x0,(LPCWSTR)lpClassName,&local_230);
            puVar5[1] = local_230.lpfnWndProc;
            puVar5 = puVar5 + 10;
          } while (ppuVar6 < &DAT_5f00b198);
          BVar4 = GetClassInfoW((HINSTANCE)0x0,(LPCWSTR)0x8002,&local_230);
          if (BVar4 == 0) {
            DAT_5f00a390 = DefDlgProcW_exref;
          }
          else {
            DAT_5f00a390 = local_230.lpfnWndProc;
          }
          goto LAB_5f0021e1;
        }
      }
    }
  }
  DAT_5f005240 = 0;
LAB_5f0021e1:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return DAT_5f005240;
}


/*
 * FUN_5f002480 at 5f002480
 * undefined __stdcall FUN_5f002480(void)
 * Address ranges: 5f002480-5f002554
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_5f002480(void)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  piVar1 = &DAT_5f00a2a0;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 10;
  } while (piVar1 < &DAT_5f00a390);
  FUN_5f0012e0();
  if (DAT_5f005248 != 0) {
    GlobalDeleteAtom(DAT_5f005248);
  }
  if (DAT_5f00524e != 0) {
    GlobalDeleteAtom(DAT_5f00524e);
  }
  if (DAT_5f00524c != 0) {
    GlobalDeleteAtom(DAT_5f00524c);
  }
  if (DAT_5f00524a != 0) {
    GlobalDeleteAtom(DAT_5f00524a);
  }
  if (DAT_5f005252 != 0) {
    GlobalDeleteAtom(DAT_5f005252);
  }
  if (DAT_5f005250 != 0) {
    GlobalDeleteAtom(DAT_5f005250);
  }
  if (DAT_5f005254 != 0) {
    GlobalDeleteAtom(DAT_5f005254);
  }
  DAT_5f005240 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  return;
}


/*
 * FUN_5f002560 at 5f002560
 * undefined4 __cdecl FUN_5f002560(int param_1)
 * Address ranges: 5f002560-5f0026e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_5f002560(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  DWORD *pDVar7;
  DWORD *pDVar8;
  bool bVar9;
  HBITMAP local_30;
  int local_2c [3];
  DWORD local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (DAT_5f005240 == 0) {
    return 0;
  }
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    DVar1 = GetSysColor((uint)(ushort)(&DAT_5f00b170)[uVar5]);
    (&local_20)[uVar5] = DVar1;
    uVar5 = (uint)uVar4;
  } while (uVar4 < 8);
  if (DAT_5f005260 == 0x300) {
    local_20 = 0xffffff;
  }
  if (((local_8 == 0) || (local_1c == local_8)) && (local_8 = 0xc0c0c0, local_1c != 0x808080)) {
    local_8 = 0x808080;
  }
  if (param_1 == 0) {
    iVar3 = 0x20;
    bVar9 = true;
    pcVar6 = &DAT_5f005264;
    pDVar7 = &local_20;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pcVar6 == (char)*pDVar7;
      pcVar6 = pcVar6 + 1;
      pDVar7 = (DWORD *)((int)pDVar7 + 1);
    } while (bVar9);
    if (bVar9) {
      return 1;
    }
  }
  local_30 = FUN_5f0047f0(DAT_5f005258,(LPCWSTR)0x67c7,local_c,local_1c,local_18,local_20,local_10,
                          local_4);
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    pHVar2 = CreateSolidBrush((&local_20)[uVar5]);
    local_2c[uVar5] = (int)pHVar2;
    uVar5 = (uint)uVar4;
  } while (uVar4 < 3);
  uVar4 = 0;
  do {
    if (local_2c[uVar4] == 0) goto LAB_5f0026b8;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  if (local_30 != (HBITMAP)0x0) {
    FUN_5f0012e0();
    DAT_5f005284 = local_2c[0];
    DAT_5f005288 = local_2c[1];
    DAT_5f00528c = local_2c[2];
    pDVar7 = &local_20;
    pDVar8 = (DWORD *)&DAT_5f005264;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pDVar8 = *pDVar7;
      pDVar7 = pDVar7 + 1;
      pDVar8 = pDVar8 + 1;
    }
    DAT_5f005290 = local_30;
    return 1;
  }
LAB_5f0026b8:
  uVar5 = 0;
  do {
    uVar4 = (short)uVar5 + 1;
    FUN_5f0012c0(local_2c + uVar5);
    uVar5 = (uint)uVar4;
  } while (uVar4 < 3);
  FUN_5f0012c0(&local_30);
  return 0;
}


/*
 * Ctl3dDlgProc at 5f0026f0
 * LRESULT __stdcall Ctl3dDlgProc(HWND param_1, uint param_2, HDC param_3, HWND param_4)
 * Address ranges: 5f0026f0-5f002a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LRESULT Ctl3dDlgProc(HWND param_1,uint param_2,HDC param_3,HWND param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  UINT UVar8;
  HDC pHVar9;
  HWND pHVar10;
  int local_28;
  WNDPROC local_24;
  WCHAR local_20 [16];
  
                    /* 0x26f0  17  Ctl3dDlgProc */
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001260(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,6);
    return LVar1;
  }
  pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_5f001020(param_1,6);
    LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0x87) {
    if ((0x84 < param_2) || (param_2 == 0xc)) {
      if ((DAT_5f005260 < 0x35f) && (BVar4 = IsIconic(param_1), BVar4 == 0)) {
        LVar1 = FUN_5f001e30(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4,0);
        return LVar1;
      }
      pWVar3 = FUN_5f001020(param_1,6);
      LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return LVar1;
    }
    goto LAB_5f002784;
  }
  if (0x138 < param_2) {
    if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      param_4->unused = 1;
      return 0x3ee;
    }
    goto LAB_5f002784;
  }
  if (param_2 < 0x132) {
    if (param_2 != 0x110) goto LAB_5f002784;
    local_24 = FUN_5f001020(param_1,6);
    if (0x35e < DAT_5f005260) {
      uVar5 = GetWindowLongW(param_1,-0x10);
      local_28 = 0;
      if ((uVar5 & 4) != 0) goto LAB_5f00286a;
    }
    local_28 = 1;
LAB_5f00286a:
    SendMessageW(param_1,0x11f0,0,(LPARAM)&local_28);
    if (local_28 == 0) {
      Ctl3dUnsubclassCtl(param_1);
      LVar1 = CallWindowProcW(local_24,param_1,0x110,(WPARAM)param_3,(LPARAM)param_4);
      return LVar1;
    }
    LVar1 = CallWindowProcW(local_24,param_1,0x110,(WPARAM)param_3,(LPARAM)param_4);
    if ((DAT_5f005260 < 0x35f) || (uVar5 = GetWindowLongW(param_1,-0x10), (uVar5 & 4) == 0)) {
      FUN_5f001c50(param_1,0xffff);
    }
    return LVar1;
  }
  GetClassNameW(param_1,local_20,0x10);
  iVar6 = lstrcmpW(u__32770_5f00c220,local_20);
  if (iVar6 == 0) {
    pWVar3 = (WNDPROC)GetWindowLongW(param_1,4);
    if (pWVar3 != (WNDPROC)0x0) {
      if ((pWVar3 < (WNDPROC)0xffff0001) || (0x30a < DAT_5f005260)) {
        iVar6 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
        if ((iVar6 != 0) && (iVar6 != 1)) goto LAB_5f0029f4;
        UVar8 = param_2 + 0xcbf;
        pHVar7 = param_1;
        pHVar9 = param_3;
        pHVar10 = param_4;
        pWVar3 = FUN_5f001020(param_1,6);
        iVar6 = CallWindowProcW(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
      }
      else {
        UVar8 = param_2 + 0xcbf;
        pHVar7 = param_1;
        pHVar9 = param_3;
        pHVar10 = param_4;
        pWVar3 = FUN_5f001020(param_1,6);
        iVar6 = CallWindowProcW(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
      }
      if ((iVar6 != 0) && (iVar6 != 1)) goto LAB_5f0029f4;
    }
LAB_5f0029ed:
    iVar6 = Ctl3dCtlColorEx(param_2,param_3,param_4);
  }
  else {
    UVar8 = param_2 + 0xcbf;
    pHVar7 = param_1;
    pHVar9 = param_3;
    pHVar10 = param_4;
    pWVar3 = FUN_5f001020(param_1,6);
    iVar6 = CallWindowProcW(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
    if ((iVar6 == 0) || (iVar6 == 1)) goto LAB_5f0029ed;
  }
LAB_5f0029f4:
  if (iVar6 != 0) {
    return iVar6;
  }
LAB_5f002784:
  pWVar3 = FUN_5f001020(param_1,6);
  LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}


/*
 * FUN_5f002a20 at 5f002a20
 * undefined4 __cdecl FUN_5f002a20(HWND param_1)
 * Address ranges: 5f002a20-5f002a58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_5f002a20(HWND param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  if (0x35e < DAT_5f005260) {
    uVar2 = GetWindowLongW(param_1,-0x10);
    if ((uVar2 & 4) != 0) {
      return 0;
    }
  }
  return 1;
}


/*
 * FUN_5f002a60 at 5f002a60
 * undefined __stdcall FUN_5f002a60(int param_1, HWND param_2, int * param_3)
 * Address ranges: 5f002a60-5f002c0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_5f002a60(int param_1,HWND param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  int iVar8;
  bool bVar9;
  int local_4;
  
  DVar3 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (DVar3 != DAT_5f005294) {
    iVar8 = 0;
    bVar9 = DAT_5f00529c == 0;
    if (0 < DAT_5f00529c) {
      pDVar4 = &DAT_5f0052a4;
      do {
        DVar2 = DVar3;
        iVar1 = iVar8;
        if (*pDVar4 == DVar3) break;
        pDVar4 = pDVar4 + 5;
        iVar8 = iVar8 + 1;
        DVar2 = DAT_5f005294;
        iVar1 = DAT_5f005298;
      } while (iVar8 < DAT_5f00529c);
      DAT_5f005298 = iVar1;
      DAT_5f005294 = DVar2;
      bVar9 = iVar8 == DAT_5f00529c;
    }
    if (bVar9) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
      CallNextHookEx((HHOOK)0x0,param_1,(WPARAM)param_2,(LPARAM)param_3);
      return;
    }
  }
  iVar8 = DAT_5f005298;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  if (param_1 != 3) goto LAB_5f002bec;
  iVar1 = *param_3;
  if (*(int *)(iVar1 + 0x28) != 0x8002) {
    if (((&DAT_5f0052b0)[iVar8 * 0x14] & 1) == 0) goto LAB_5f002bec;
    iVar6 = FUN_5f002a20(*(HWND *)(iVar1 + 0xc));
    if (iVar6 == 0) {
      if ((*(HWND *)(iVar1 + 0xc) == (HWND)0x0) || (DAT_5f005262 == 0x18)) goto LAB_5f002bec;
      pHVar7 = GetParent(*(HWND *)(iVar1 + 0xc));
      iVar6 = FUN_5f002a20(pHVar7);
      if (iVar6 == 0) goto LAB_5f002bec;
    }
    FUN_5f002e40(param_2,0xffff,1,*(undefined4 *)(iVar1 + 0xc));
    goto LAB_5f002bec;
  }
  if (DAT_5f005262 != 0x20) {
    FUN_5f001220(param_2,Ctl3dDlgProc);
    goto LAB_5f002bec;
  }
  if (DAT_5f005260 < 0x35f) {
LAB_5f002b40:
    local_4 = 1;
  }
  else {
    uVar5 = GetWindowLongW(param_2,-0x10);
    local_4 = 0;
    if ((uVar5 & 4) == 0) goto LAB_5f002b40;
  }
  SendMessageW(param_2,0x11f0,0,(LPARAM)&local_4);
  if (local_4 != 0) {
    FUN_5f001070(param_2,0x5f0026f0);
  }
LAB_5f002bec:
  CallNextHookEx((HHOOK)(&DAT_5f0052a8)[iVar8 * 5],param_1,(WPARAM)param_2,(LPARAM)param_3);
  return;
}


/*
 * FUN_5f002c10 at 5f002c10
 * undefined4 __cdecl FUN_5f002c10(undefined4 param_1, ushort param_2)
 * Address ranges: 5f002c10-5f002c33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


undefined4 __cdecl FUN_5f002c10(undefined4 param_1,ushort param_2)

{
  if (0x35e < DAT_5f005260) {
    return 0;
  }
  if ((param_2 & 0xffdf) < 10) {
    return 1;
  }
  return 0;
}


/*
 * FUN_5f002c40 at 5f002c40
 * bool __stdcall FUN_5f002c40(void)
 * Address ranges: 5f002c40-5f002c86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_5f002c40(void)

{
  int iVar1;
  HWND in_stack_00000014;
  WCHAR local_20 [16];
  
  if ((0x35e < DAT_5f005260) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameW(in_stack_00000014,local_20,0x10);
    iVar1 = lstrcmpW(local_20,L"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}


/*
 * FUN_5f002c90 at 5f002c90
 * bool __stdcall FUN_5f002c90(void)
 * Address ranges: 5f002c90-5f002cd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool FUN_5f002c90(void)

{
  int iVar1;
  HWND in_stack_00000014;
  WCHAR local_20 [16];
  
  if ((0x35e < DAT_5f005260) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameW(in_stack_00000014,local_20,0x10);
    iVar1 = lstrcmpW(local_20,L"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}


/*
 * FUN_5f002e40 at 5f002e40
 * bool __cdecl FUN_5f002e40(HWND param_1, ushort param_2, short param_3, undefined4 param_4)
 * Address ranges: 5f002e40-5f002f2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


bool __cdecl FUN_5f002e40(HWND param_1,ushort param_2,short param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  int iVar2;
  LONG LVar3;
  ushort *puVar4;
  int iVar5;
  WCHAR local_20 [16];
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return false;
  }
  iVar5 = 0;
  puVar4 = &DAT_5f00b068;
  GetClassNameW(param_1,local_20,0x10);
  do {
    if ((*puVar4 & param_2) != 0) {
      iVar2 = lstrcmpW((LPCWSTR)(puVar4 + -0x18),local_20);
      if (iVar2 == 0) {
        LVar3 = GetWindowLongW(param_1,-0x10);
        iVar2 = (*(code *)(&PTR_FUN_5f00b064)[iVar5 * 0xd])
                          (param_1,LVar3,param_2,CONCAT22((short)((uint)puVar4 >> 0x10),param_3),
                           param_4);
        if (iVar2 == 1) {
          if ((param_3 == 1) && (DAT_5f005262 == 0x10)) {
            FUN_5f001220(param_1,(&DAT_5f00a2a0)[iVar5 * 10]);
            return true;
          }
          FUN_5f001070(param_1,(&DAT_5f00a2a0)[iVar5 * 10]);
        }
        return (bool)('\x01' - (iVar2 == 0));
      }
    }
    puVar4 = puVar4 + 0x1a;
    iVar5 = iVar5 + 1;
    if (&UNK_5f00b19f < puVar4) {
      return false;
    }
  } while( true );
}


/*
 * FUN_5f002f30 at 5f002f30
 * undefined __cdecl FUN_5f002f30(HWND param_1, int param_2)
 * Address ranges: 5f002f30-5f002fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f002f30(HWND param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  HWND hWnd;
  undefined1 local_10 [12];
  int local_4;
  
  GetWindowRect(param_1,(LPRECT)local_10);
  uVar2 = GetWindowLongW(param_1,-0x10);
  if ((uVar2 & 0x10000000) != 0) {
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if ((((uVar1 & 0xc0) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 1) != 0)) {
        return;
      }
      if (((((byte)uVar1 & 3) == 2) && (local_10._8_4_ - *(int *)(param_2 + 0x10) == local_10._0_4_)
          ) && (*(int *)(param_2 + 0x14) <= local_4 - local_10._4_4_)) {
        local_10._4_4_ = local_10._4_4_ + *(int *)(param_2 + 0x14) + 1;
      }
    }
    InflateRect((LPRECT)local_10,1,1);
    hWnd = GetParent(param_1);
    ScreenToClient(hWnd,(LPPOINT)local_10);
    ScreenToClient(hWnd,(LPPOINT)(local_10 + 8));
    if ((uVar2 & 0x200000) != 0) {
      local_10._8_4_ = local_10._8_4_ + 1;
    }
    InvalidateRect(hWnd,(RECT *)local_10,0);
  }
  return;
}


/*
 * FUN_5f002ff0 at 5f002ff0
 * undefined __cdecl FUN_5f002ff0(HWND param_1)
 * Address ranges: 5f002ff0-5f00305d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f002ff0(HWND param_1)

{
  uint uVar1;
  HWND hWnd;
  undefined1 local_10 [16];
  
  uVar1 = GetWindowLongW(param_1,-0x10);
  GetWindowRect(param_1,(LPRECT)local_10);
  InflateRect((LPRECT)local_10,1,1);
  hWnd = GetParent(param_1);
  ScreenToClient(hWnd,(LPPOINT)local_10);
  ScreenToClient(hWnd,(LPPOINT)(local_10 + 8));
  if ((uVar1 & 0x200000) != 0) {
    local_10._8_4_ = local_10._8_4_ + 1;
  }
  ValidateRect(hWnd,(RECT *)local_10);
  return;
}


/*
 * FUN_5f003060 at 5f003060
 * undefined __cdecl FUN_5f003060(HWND param_1, HDC param_2, RECT * param_3, WCHAR * param_4, int param_5, short param_6, int param_7)
 * Address ranges: 5f003060-5f00339e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl
FUN_5f003060(HWND param_1,HDC param_2,RECT *param_3,WCHAR *param_4,int param_5,short param_6,
            int param_7)

{
  BOOL BVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  HWND pHVar4;
  int iVar5;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  local_10.left = param_3->left;
  local_10.top = param_3->top;
  local_10.right = param_3->right;
  local_10.bottom = param_3->bottom;
  FUN_5f001340(param_2,&param_3->left,7,7,0xf);
  InflateRect(&local_10,-1,-1);
  if ((param_6 == 1) && (BVar1 = IsWindowEnabled(param_1), BVar1 != 0)) {
    FUN_5f001340(param_2,&local_10.left,7,7,0xf);
    InflateRect(&local_10,-1,-1);
  }
  PatBlt(param_2,param_3->left,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->left,param_3->bottom + -1,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->bottom + -1,1,1,0xf00021);
  iVar5 = (param_7 == 0) + 1;
  pvVar2 = DAT_5f005284;
  if (param_7 != 0) {
    pvVar2 = DAT_5f00528c;
  }
  pvVar2 = SelectObject(param_2,pvVar2);
  PatBlt(param_2,local_10.left,local_10.top,iVar5,local_10.bottom - local_10.top,0xf00021);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,iVar5,0xf00021);
  if (param_7 == 0) {
    iVar5 = 0;
    SelectObject(param_2,DAT_5f00528c);
    local_10.bottom = local_10.bottom + -1;
    local_10.right = local_10.right + -1;
    do {
      PatBlt(param_2,local_10.left,local_10.bottom,(local_10.right - local_10.left) + 1,1,0xf00021);
      PatBlt(param_2,local_10.right,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
      if (iVar5 < 1) {
        InflateRect(&local_10,-1,-1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  local_10.left = local_10.left + 1;
  local_10.top = local_10.top + 1;
  SelectObject(param_2,DAT_5f005288);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,
         local_10.bottom - local_10.top,0xf00021);
  BVar1 = IsWindowEnabled(param_1);
  if (BVar1 == 0) {
    SetTextColor(param_2,DAT_5f00527c);
  }
  FUN_5f001530(param_2,param_4,&local_18,&local_14);
  local_10.top = local_10.top + ((local_10.bottom - local_10.top) - local_14) / 2;
  local_10.left = local_10.left + ((local_10.right - local_10.left) - local_18) / 2;
  iVar5 = local_10.top + local_14;
  if (local_10.bottom <= local_10.top + local_14) {
    iVar5 = local_10.bottom;
  }
  iVar3 = local_10.left + local_18;
  if (local_10.right <= local_10.left + local_18) {
    iVar3 = local_10.right;
  }
  local_10.right = iVar3;
  if (param_7 != 0) {
    local_10.bottom = iVar5;
    OffsetRect(&local_10,1,1);
    iVar3 = param_3->right + -3;
    if (local_10.right <= iVar3) {
      iVar3 = local_10.right;
    }
    iVar5 = param_3->bottom + -3;
    local_10.right = iVar3;
    if (local_10.bottom <= iVar5) {
      iVar5 = local_10.bottom;
    }
  }
  local_10.bottom = iVar5;
  DrawTextW(param_2,param_4,param_5,&local_10,0x20);
  pHVar4 = GetFocus();
  if (pHVar4 == param_1) {
    InflateRect(&local_10,1,1);
    IntersectRect(&local_10,&local_10,param_3);
    DrawFocusRect(param_2,&local_10);
  }
  if (pvVar2 != (HGDIOBJ)0x0) {
    SelectObject(param_2,pvVar2);
  }
  return;
}


/*
 * FUN_5f0033a0 at 5f0033a0
 * undefined __cdecl FUN_5f0033a0(HWND param_1, HDC param_2, uint param_3)
 * Address ranges: 5f0033a0-5f0038be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f0033a0(HWND param_1,HDC param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  DWORD DVar2;
  HGDIOBJ pvVar3;
  HDC hdc;
  int x;
  HGDIOBJ local_254;
  int local_250;
  int local_24c;
  uint local_244;
  int local_240;
  int local_23c;
  HGDIOBJ local_238;
  uint local_234;
  tagRECT local_230;
  tagRECT local_220;
  undefined1 local_210 [12];
  int local_204;
  WCHAR local_200 [256];
  
  uVar1 = GetWindowLongW(param_1,-0x10);
  local_244 = uVar1 & 0x20;
  uVar1 = uVar1 & 0x1f;
  hWnd = GetParent(param_1);
  SetBkMode(param_2,2);
  GetClientRect(param_1,&local_220);
  local_230.left = local_220.left;
  local_230.top = local_220.top;
  local_230.right = local_220.right;
  local_230.bottom = local_220.bottom;
  local_254 = (HGDIOBJ)SendMessageW(param_1,0x31,0,0);
  if (local_254 != (HGDIOBJ)0x0) {
    local_254 = SelectObject(param_2,local_254);
  }
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  pvVar3 = (HGDIOBJ)SendMessageW(hWnd,0x135,(WPARAM)param_2,(LPARAM)param_1);
  local_238 = SelectObject(param_2,pvVar3);
  IntersectClipRect(param_2,local_230.left,local_230.top,local_230.right,local_230.bottom);
  if (((param_3 & 0x10) != 0) && (uVar1 != 7)) {
    PatBlt(param_2,local_230.left,local_230.top,local_230.right - local_230.left,
           local_230.bottom - local_230.top,0xf00021);
  }
  local_23c = IsWindowEnabled(param_1);
  local_210._0_4_ = SendMessageW(param_1,0xf2,0,0);
  local_24c = 0;
  local_234 = local_210._0_4_ & 3;
  local_210._0_4_ = local_210._0_4_ & 4;
  local_250 = ((int)local_210._0_4_ >> 1 | -(uint)(local_234 == 0) + 1) * 0xe;
  if (local_23c == 0) {
    local_250 = local_250 + (-(uint)(local_234 == 0) + 3) * 0xe;
  }
  if ((((param_3 & 10) != 0) || (uVar1 == 0)) || (uVar1 == 1)) {
    local_240 = GetWindowTextW(param_1,local_200,0x100);
  }
  switch(uVar1) {
  case 0:
  case 1:
    FUN_5f003060(param_1,param_2,&local_220,local_200,local_240,(short)uVar1,local_210._0_4_);
    goto switchD_5f00355c_caseD_8;
  case 2:
  case 3:
    break;
  case 4:
  case 9:
    local_24c = 0xd;
    break;
  case 5:
  case 6:
    if (local_234 == 2) {
      local_24c = 0x1a;
    }
    break;
  case 7:
    if ((param_3 & 6) != 0) {
      FUN_5f001530(param_2,local_200,(LONG *)&local_234,(LONG *)&local_244);
      if (local_244 == 0) {
        FUN_5f001530(param_2,(WCHAR *)&DAT_5f00c230,(LONG *)local_210,(LONG *)&local_244);
      }
      local_230.left = local_230.left + 4;
      local_230.right = local_230.left + local_234 + 4;
      local_230.bottom = local_230.top + local_244;
      if ((param_3 & 0x20) != 0) {
        local_210._4_4_ = local_230.top;
        local_210._8_4_ = local_220.right;
        local_210._0_4_ = local_230.left;
        local_204 = local_230.bottom;
        ClientToScreen(param_1,(LPPOINT)local_210);
        ClientToScreen(param_1,(LPPOINT)(local_210 + 8));
        ScreenToClient(hWnd,(LPPOINT)local_210);
        ScreenToClient(hWnd,(LPPOINT)(local_210 + 8));
        InvalidateRect(hWnd,(RECT *)local_210,1);
        return;
      }
      local_220.right = local_220.right + -1;
      local_220.bottom = local_220.bottom + -1;
      local_220.top = local_220.top + (int)local_244 / 2;
      FUN_5f001340(param_2,&local_220.left,2,2,0xf);
      OffsetRect(&local_220,1,1);
      FUN_5f001340(param_2,&local_220.left,0,0,0xf);
      if (local_23c == 0) {
        SetTextColor(param_2,DAT_5f00527c);
      }
      DrawTextW(param_2,local_200,local_240,&local_230,0x20);
    }
  default:
    goto switchD_5f00355c_caseD_8;
  }
  if (((param_3 & 4) != 0) && (hdc = CreateCompatibleDC(param_2), hdc != (HDC)0x0)) {
    pvVar3 = SelectObject(hdc,DAT_5f005290);
    if (pvVar3 != (HGDIOBJ)0x0) {
      x = local_230.left;
      if (local_244 != 0) {
        x = local_230.right + -0xe;
      }
      BitBlt(param_2,x,local_230.top + ((local_230.bottom - local_230.top) + -0xd) / 2,0xe,0xd,hdc,
             local_250,local_24c,0xcc0020);
      SelectObject(hdc,pvVar3);
    }
    DeleteDC(hdc);
  }
  if ((param_3 & 2) != 0) {
    if (local_244 == 0) {
      local_230.left = local_220.left + 0x12;
    }
    else {
      local_230.right = local_220.right + -0x12;
    }
    if (local_23c == 0) {
      SetTextColor(param_2,DAT_5f00527c);
    }
    DrawTextW(param_2,local_200,local_240,&local_230,0x24);
  }
  if ((param_3 & 8) != 0) {
    FUN_5f001530(param_2,local_200,(LONG *)local_210,(LONG *)&local_234);
    local_230.top = (int)((local_230.bottom - local_234) - local_230.top) / 2;
    local_230.bottom = local_230.top + local_234;
    if (local_244 == 0) {
      local_230.left = local_220.left + 0x12;
    }
    else {
      local_220.right = local_220.right + -0x12;
      local_230.left = local_220.left;
    }
    local_230.right = local_230.left + local_210._0_4_;
    InflateRect(&local_230,1,1);
    IntersectRect(&local_230,&local_230,&local_220);
    DrawFocusRect(param_2,&local_230);
  }
switchD_5f00355c_caseD_8:
  SelectObject(param_2,local_238);
  if (local_254 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_254);
  }
  return;
}


/*
 * BtnWndProc3d at 5f0038f0
 * LRESULT __stdcall BtnWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
 * Address ranges: 5f0038f0-5f003b9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LRESULT BtnWndProc3d(HWND param_1,uint param_2,HDC param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  HDC pHVar7;
  uint uVar8;
  HWND hWnd;
  tagPAINTSTRUCT local_40;
  
                    /* 0x38f0  7  BtnWndProc3d */
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001260(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,0);
    return LVar1;
  }
  pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_5f001020(param_1,0);
    LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0xf2) {
    if (param_2 == 0xf1) goto LAB_5f003a96;
    switch(param_2) {
    case 7:
      uVar8 = 0x16;
      break;
    case 8:
      LVar4 = GetWindowLongW(param_1,-0x10);
      if (((byte)LVar4 & 0x1f) == 9) {
        SendMessageW(param_1,0xf3,0,0);
      }
      uVar8 = 0;
      break;
    default:
      goto switchD_5f003981_caseD_9;
    case 10:
      uVar8 = 6;
      break;
    case 0xc:
      uVar8 = GetWindowLongW(param_1,-0x10);
      if (((uVar8 & 0x10000000) == 0) || (((byte)uVar8 & 0x1f) != 7)) {
        uVar8 = 0x16;
      }
      else {
        uVar8 = 0x22;
      }
      break;
    case 0xf:
      uVar8 = SendMessageW(param_1,0xf2,0,0);
      pHVar7 = param_3;
      if (param_3 == (HDC)0x0) {
        pHVar7 = BeginPaint(param_1,&local_40);
      }
      uVar5 = GetWindowLongW(param_1,-0x10);
      if ((uVar5 & 0x10000000) != 0) {
        FUN_5f0033a0(param_1,pHVar7,uVar8 & 8 | 6);
      }
      if (param_3 == (HDC)0x0) {
        EndPaint(param_1,&local_40);
      }
      return 0;
    }
  }
  else {
    if (param_2 != 0xf3) {
      if ((0x1942 < param_2) && (param_2 < 0x1945)) {
        *param_4 = 1;
        return 1000;
      }
      goto switchD_5f003981_caseD_9;
    }
LAB_5f003a96:
    uVar8 = 4;
  }
  uVar5 = SendMessageW(param_1,0xf2,0,0);
  uVar6 = GetWindowLongW(param_1,-0x10);
  if ((uVar6 & 0x10000000) != 0) {
    if (param_2 != 7) {
      SetWindowLongW(param_1,-0x10,uVar6 & 0xefffffff);
    }
    hWnd = param_1;
    uVar6 = param_2;
    pWVar3 = FUN_5f001020(param_1,0);
    LVar1 = CallWindowProcW(pWVar3,hWnd,uVar6,(WPARAM)param_3,(LPARAM)param_4);
    if (param_2 != 7) {
      uVar6 = GetWindowLongW(param_1,-0x10);
      SetWindowLongW(param_1,-0x10,uVar6 | 0x10000000);
    }
    uVar6 = SendMessageW(param_1,0xf2,0,0);
    if ((((param_2 != 0xf3) && (param_2 != 0xf1)) || (uVar5 != uVar6)) &&
       (pHVar7 = GetDC(param_1), pHVar7 != (HDC)0x0)) {
      if (((uVar6 ^ uVar5) & 3) != 0) {
        uVar8 = uVar8 | 4;
      }
      ExcludeUpdateRgn(pHVar7,param_1);
      FUN_5f0033a0(param_1,pHVar7,(uVar6 ^ uVar5) & 8 | uVar8);
      ReleaseDC(param_1,pHVar7);
    }
    return LVar1;
  }
switchD_5f003981_caseD_9:
  pWVar3 = FUN_5f001020(param_1,0);
  LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}


/*
 * FUN_5f003bd0 at 5f003bd0
 * undefined __cdecl FUN_5f003bd0(HWND param_1, int param_2, int param_3)
 * Address ranges: 5f003bd0-5f003f05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f003bd0(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  LRESULT LVar3;
  HWND pHVar4;
  HDC hDC;
  LONG LVar5;
  int iVar6;
  HWND hWndTo;
  uint uVar7;
  ushort uVar8;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_40 [12];
  int local_34;
  tagRECT local_30;
  int local_20 [8];
  
  uVar2 = GetWindowLongW(param_1,-0x10);
  if (((uVar2 & 0x10000000) != 0) &&
     (((param_3 != 3 || (((byte)uVar2 & 3) != 3)) ||
      (LVar3 = SendMessageW(param_1,0x157,0,0), LVar3 == 0)))) {
    if (param_2 != 0) {
      HideCaret(param_1);
    }
    GetWindowRect(param_1,(LPRECT)local_40);
    pHVar4 = GetParent(param_1);
    ScreenToClient(pHVar4,(LPPOINT)local_40);
    uVar8 = 0xf;
    ScreenToClient(pHVar4,(LPPOINT)(local_40 + 8));
    hDC = GetDC(pHVar4);
    local_48 = uVar2 & 0x100000;
    if (local_48 != 0) {
      uVar8 = 7;
    }
    local_44 = uVar2 & 0x200000;
    if (local_44 != 0) {
      uVar8 = uVar8 & 0xfffb;
    }
    LVar5 = GetWindowLongW(param_1,-0xc);
    hWndTo = pHVar4;
    if (param_2 - LVar5 == -1000) {
      local_4c = 0x29a;
      local_30.left = SendMessageW(pHVar4,0x1944,0,(LPARAM)&local_4c);
      if (local_4c == 0x29a) {
        local_30.left = SendMessageW(pHVar4,0x1943,0,(LPARAM)&local_4c);
      }
      GetClassNameW(pHVar4,(LPWSTR)local_20,0x10);
      iVar6 = lstrcmpW((LPCWSTR)local_20,L"ComboBox");
      if ((iVar6 == 0) || ((local_4c == 1 && (local_30.left == 0x3eb)))) {
        hWndTo = GetParent(pHVar4);
        MapWindowPoints(pHVar4,hWndTo,(LPPOINT)local_40,2);
        ReleaseDC(pHVar4,hDC);
        hDC = GetDC(hWndTo);
        if (param_2 == 0) {
          uVar8 = uVar8 & 0xfffd;
          local_40._4_4_ = local_40._4_4_ + 1;
        }
        else {
          uVar7 = GetWindowLongW(pHVar4,-0x10);
          if (((uVar7 & 3) == 2) || ((uVar7 & 3) == 3)) {
            LVar3 = SendMessageW(pHVar4,0x157,0,0);
            if (LVar3 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(param_1);
              return;
            }
          }
          else {
            uVar8 = uVar8 & 0xfff7;
            pHVar4 = GetWindow(pHVar4,5);
            GetWindowRect(pHVar4,&local_30);
            local_40._8_4_ = local_40._8_4_ + (local_30.left - local_30.right);
            FUN_5f001480(hDC,(int *)local_40,0x1008);
            local_40._8_4_ = local_40._8_4_ + (local_30.right - local_30.left);
          }
        }
      }
    }
    FUN_5f001480(hDC,(int *)local_40,uVar8);
    uVar1 = local_40._8_4_;
    if ((param_3 == 3) && (((byte)uVar2 & 3) == 3)) {
      local_40._0_4_ = GetSystemMetrics(2);
      local_40._0_4_ = uVar1 - local_40._0_4_;
      FUN_5f001340(hDC,(int *)local_40,7,7,0xc);
      FUN_5f002ff0(param_1);
    }
    else {
      if (local_44 != 0) {
        local_40._8_4_ = local_40._8_4_ + 1;
        FUN_5f001340(hDC,(int *)local_40,0,0,4);
        iVar6 = local_40._8_4_ + -1;
        local_20[0] = local_40._0_4_;
        local_40._8_4_ = iVar6;
        local_40._0_4_ = GetSystemMetrics(2);
        local_40._0_4_ = iVar6 - local_40._0_4_;
        FUN_5f001340(hDC,(int *)local_40,7,7,8);
        local_40._0_4_ = local_20[0];
      }
      if (local_48 != 0) {
        local_34 = local_34 + 1;
        FUN_5f001340(hDC,(int *)local_40,0,0,8);
        iVar6 = local_34 + -1;
        local_34 = iVar6;
        local_40._4_4_ = GetSystemMetrics(0x15);
        local_40._4_4_ = iVar6 - local_40._4_4_;
        FUN_5f001340(hDC,(int *)local_40,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (param_2 != 0) {
      ShowCaret(param_1);
    }
  }
  return;
}


/*
 * FUN_5f003f10 at 5f003f10
 * uint __cdecl FUN_5f003f10(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4, int param_5)
 * Address ranges: 5f003f10-5f00405e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint __cdecl FUN_5f003f10(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  uint uVar4;
  HWND hWnd;
  WPARAM wParam;
  undefined4 *lParam;
  
  if (param_2 == 0x82) {
    uVar1 = FUN_5f001260(param_1,0x82,param_3,(LPARAM)param_4,param_5);
    return uVar1;
  }
  pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar2 == (HANDLE)0x0) {
    hWnd = param_1;
    uVar1 = param_2;
    wParam = param_3;
    lParam = param_4;
    pWVar3 = FUN_5f001020(param_1,param_5);
    uVar4 = CallWindowProcW(pWVar3,hWnd,uVar1,wParam,(LPARAM)lParam);
    uVar1 = uVar4;
    if ((param_5 == 3) && (uVar1 = GetWindowLongW(param_1,-0x10), ((byte)uVar1 & 3) == 2)) {
      return uVar4;
    }
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_5f005260 < 0x30a) && (param_3 == 0)) {
          FUN_5f002f30(param_1,0);
        }
      }
      else if ((param_2 == 0xf) && (((param_5 != 3 || ((uVar1 & 3) == 2)) || ((uVar1 & 3) == 3)))) {
        FUN_5f003bd0(param_1,1,param_5);
      }
    }
    else if (param_2 == 0x46) {
      if (0x309 < DAT_5f005260) {
        FUN_5f002f30(param_1,(int)param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3ea;
    }
    return uVar4;
  }
  pWVar3 = FUN_5f001020(param_1,param_5);
  uVar1 = CallWindowProcW(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return uVar1;
}


/*
 * EditWndProc3d at 5f004060
 * undefined __stdcall EditWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
 * Address ranges: 5f004060-5f004080
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void EditWndProc3d(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4)

{
                    /* 0x4060  8  EditWndProc3d */
  FUN_5f003f10(param_1,param_2,param_3,param_4,2);
  return;
}


/*
 * FUN_5f004090 at 5f004090
 * LRESULT __cdecl FUN_5f004090(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4, int param_5)
 * Address ranges: 5f004090-5f0042bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LRESULT __cdecl FUN_5f004090(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4,int param_5)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  HWND pHVar4;
  LONG *lParam;
  undefined1 local_20 [12];
  int local_14;
  tagRECT local_10;
  
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001260(param_1,0x82,param_3,(LPARAM)param_4,param_5);
    return LVar1;
  }
  pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar2 == (HANDLE)0x0) {
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_5f005260 < 0x30a) && (param_3 == 0)) {
          FUN_5f002f30(param_1,0);
        }
      }
      else if (param_2 == 0xf) {
        pHVar4 = param_1;
        pWVar3 = FUN_5f001020(param_1,param_5);
        LVar1 = CallWindowProcW(pWVar3,pHVar4,param_2,param_3,(LPARAM)param_4);
        FUN_5f003bd0(param_1,0,param_5);
        return LVar1;
      }
    }
    else if (param_2 < 0x84) {
      if (param_2 == 0x83) {
        if (DAT_5f005260 < 0x30a) {
          GetWindowRect(param_1,&local_10);
          pHVar4 = param_1;
          lParam = param_4;
          pWVar3 = FUN_5f001020(param_1,param_5);
          LVar1 = CallWindowProcW(pWVar3,pHVar4,param_2,param_3,(LPARAM)lParam);
          local_20._0_4_ = *param_4;
          local_20._4_4_ = param_4[1];
          local_20._8_4_ = param_4[2];
          local_14 = param_4[3];
          InflateRect((LPRECT)local_20,2,1);
          if (local_14 < local_10.bottom) {
            local_20._4_4_ = local_14 + 1;
            local_14 = local_10.bottom + 1;
            pHVar4 = GetParent(param_1);
            ScreenToClient(pHVar4,(LPPOINT)local_20);
            ScreenToClient(pHVar4,(LPPOINT)(local_20 + 8));
            InvalidateRect(pHVar4,(RECT *)local_20,1);
          }
          return LVar1;
        }
      }
      else if ((param_2 == 0x46) && (0x309 < DAT_5f005260)) {
        FUN_5f002f30(param_1,(int)param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3e9;
    }
    pWVar3 = FUN_5f001020(param_1,param_5);
    LVar1 = CallWindowProcW(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
    return LVar1;
  }
  pWVar3 = FUN_5f001020(param_1,param_5);
  LVar1 = CallWindowProcW(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return LVar1;
}


/*
 * ListWndProc3d at 5f0042c0
 * undefined __stdcall ListWndProc3d(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4)
 * Address ranges: 5f0042c0-5f0042e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void ListWndProc3d(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4)

{
                    /* 0x42c0  9  ListWndProc3d */
  FUN_5f004090(param_1,param_2,param_3,param_4,1);
  return;
}


/*
 * ComboWndProc3d at 5f0042f0
 * uint __stdcall ComboWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
 * Address ranges: 5f0042f0-5f004332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


uint ComboWndProc3d(HWND param_1,uint param_2,WPARAM param_3,undefined4 *param_4)

{
  uint uVar1;
  
                    /* 0x42f0  10  ComboWndProc3d */
  if ((0x1942 < param_2) && (param_2 < 0x1945)) {
    *param_4 = 1;
    return 0x3eb;
  }
  uVar1 = FUN_5f003f10(param_1,param_2,param_3,param_4,3);
  return uVar1;
}


/*
 * FUN_5f004340 at 5f004340
 * undefined __cdecl FUN_5f004340(HWND param_1, HDC param_2, LPRECT param_3, uint param_4)
 * Address ranges: 5f004340-5f004415
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f004340(HWND param_1,HDC param_2,LPRECT param_3,uint param_4)

{
  int iVar1;
  UINT format;
  COLORREF local_c;
  
  PatBlt(param_2,param_3->left,param_3->top,param_3->right - param_3->left,
         param_3->bottom - param_3->top,0xf00021);
  iVar1 = GetWindowTextLengthW(param_1);
  FUN_5f00495c();
  if (&stack0x00000000 != (undefined1 *)0x18) {
    iVar1 = GetWindowTextW(param_1,(LPWSTR)&stack0xffffffe8,iVar1 + 4);
    if (iVar1 != 0) {
      format = 0x140;
      if (((byte)param_4 & 0xf) != 0xc) {
        format = (UINT)((ushort)param_4 & 0xf | 0x150);
      }
      if ((param_4 & 0x80) != 0) {
        format = (UINT)(ushort)((ushort)format | 0x800);
      }
      if ((param_4 & 0x8000000) != 0) {
        local_c = SetTextColor(param_2,DAT_5f00527c);
      }
      DrawTextW(param_2,(LPCWSTR)&stack0xffffffe8,-1,param_3,format);
      if ((param_4 & 0x8000000) != 0) {
        SetTextColor(param_2,local_c);
      }
    }
  }
  return;
}


/*
 * FUN_5f004420 at 5f004420
 * undefined __cdecl FUN_5f004420(HWND param_1, HDC param_2)
 * Address ranges: 5f004420-5f004583
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void __cdecl FUN_5f004420(HWND param_1,HDC param_2)

{
  uint uVar1;
  HGDIOBJ pvVar2;
  HWND hWnd;
  HGDIOBJ h;
  HGDIOBJ h_00;
  UINT Msg;
  HDC wParam;
  HWND lParam;
  tagRECT local_10;
  
  uVar1 = GetWindowLongW(param_1,-0x10);
  if ((uVar1 & 0x10000000) != 0) {
    GetClientRect(param_1,&local_10);
    switch(uVar1 & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 0xc:
      pvVar2 = (HGDIOBJ)SendMessageW(param_1,0x31,0,0);
      if (pvVar2 == (HGDIOBJ)0x0) {
        pvVar2 = (HGDIOBJ)0x0;
      }
      else {
        pvVar2 = SelectObject(param_2,pvVar2);
      }
      SetBkMode(param_2,2);
      Msg = 0x138;
      wParam = param_2;
      lParam = param_1;
      hWnd = GetParent(param_1);
      h = (HGDIOBJ)SendMessageW(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
      h_00 = (HGDIOBJ)0x0;
      if (h != (HGDIOBJ)0x0) {
        h_00 = SelectObject(param_2,h);
      }
      FUN_5f004340(param_1,param_2,&local_10,uVar1);
      if (pvVar2 != (HGDIOBJ)0x0) {
        SelectObject(param_2,pvVar2);
      }
      if (h_00 != (HGDIOBJ)0x0) {
        SelectObject(param_2,h_00);
        return;
      }
      break;
    case 4:
    case 7:
      FUN_5f001340(param_2,&local_10.left,2,0,0xf);
      return;
    case 5:
    case 8:
    case 0x10:
    case 0x11:
    case 0x12:
      local_10.left = local_10.left + 1;
      local_10.top = local_10.top + 1;
      FUN_5f001340(param_2,&local_10.left,0,0,0xf);
      OffsetRect(&local_10,-1,-1);
      FUN_5f001340(param_2,&local_10.left,2,2,0xf);
      return;
    case 6:
    case 9:
      FUN_5f001340(param_2,&local_10.left,0,2,0xf);
    }
  }
  return;
}


/*
 * StaticWndProc3d at 5f0045c0
 * LRESULT __stdcall StaticWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
 * Address ranges: 5f0045c0-5f00470b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


LRESULT StaticWndProc3d(HWND param_1,uint param_2,HDC param_3,undefined4 *param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  HDC pHVar4;
  tagPAINTSTRUCT local_40;
  
                    /* 0x45c0  11  StaticWndProc3d */
  if (param_2 == 0x82) {
    LVar1 = FUN_5f001260(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,4);
    return LVar1;
  }
  pvVar2 = GetPropW(param_1,(LPCWSTR)(uint)DAT_5f005254);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_5f001020(param_1,4);
    LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      pHVar4 = param_3;
      if (param_3 == (HDC)0x0) {
        pHVar4 = BeginPaint(param_1,&local_40);
        FUN_5f0014f0(param_1,pHVar4);
      }
      FUN_5f004420(param_1,pHVar4);
      if (param_3 == (HDC)0x0) {
        EndPaint(param_1,&local_40);
      }
      return 0;
    }
    if (param_2 == 10) {
      pHVar4 = GetDC(param_1);
      FUN_5f0014f0(param_1,pHVar4);
      FUN_5f004420(param_1,pHVar4);
      ReleaseDC(param_1,pHVar4);
      return 0;
    }
  }
  else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
    *param_4 = 1;
    return 0x3ec;
  }
  pWVar3 = FUN_5f001020(param_1,4);
  LVar1 = CallWindowProcW(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}


/*
 * entry at 5f004710
 * undefined4 __stdcall entry(undefined4 param_1, int param_2)
 * Address ranges: 5f004710-5f0047e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 entry(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_5f00c250);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_5f00c234);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
    DAT_5f00525c = param_1;
    DAT_5f005258 = param_1;
    DVar2 = GetVersion();
    DAT_5f005260 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_5f005262 = 0x10, 0x35e < DAT_5f005260)) {
      DAT_5f005262 = 0x20;
    }
    _DAT_5f00a394 = GetSystemMetrics(7);
    _DAT_5f00a394 = _DAT_5f00a394 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_5f00a398 = iVar3 + -1;
    DAT_5f00a39c = GetSystemMetrics(4);
    _DAT_5f00a3a0 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_5f005220);
  }
  return 1;
}


/*
 * FUN_5f0047f0 at 5f0047f0
 * HBITMAP __stdcall FUN_5f0047f0(HMODULE param_1, LPCWSTR param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)
 * Address ranges: 5f0047f0-5f00495b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


HBITMAP FUN_5f0047f0(HMODULE param_1,LPCWSTR param_2,uint param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8)

{
  HRSRC hResInfo;
  DWORD dwBytes;
  DWORD *pDVar1;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HBITMAP pHVar2;
  uint uVar3;
  BITMAPINFOHEADER *pBVar4;
  
  hResInfo = FindResourceW(param_1,param_2,(LPCWSTR)0x2);
  if (hResInfo == (HRSRC)0x0) {
    return (HBITMAP)0x0;
  }
  dwBytes = SizeofResource(param_1,hResInfo);
  pDVar1 = LoadResource(param_1,hResInfo);
  if (pDVar1 == (DWORD *)0x0) {
    return (HBITMAP)0x0;
  }
  pbmi = GlobalAlloc(0x40,dwBytes);
  if (pbmi == (BITMAPINFOHEADER *)0x0) {
    return (HBITMAP)0x0;
  }
  pBVar4 = pbmi;
  for (uVar3 = dwBytes >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pBVar4->biSize = *pDVar1;
    pDVar1 = pDVar1 + 1;
    pBVar4 = (BITMAPINFOHEADER *)&pBVar4->biWidth;
  }
  for (uVar3 = dwBytes & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)&pBVar4->biSize = (char)*pDVar1;
    pDVar1 = (DWORD *)((int)pDVar1 + 1);
    pBVar4 = (BITMAPINFOHEADER *)((int)&pBVar4->biSize + 1);
  }
  pbmi[1].biSize = (param_3 >> 8 & 0xff) << 8 | (param_3 & 0xff) << 0x10 | param_3 >> 0x10 & 0xff;
  pbmi[1].biYPelsPerMeter =
       (param_5 >> 8 & 0xff) << 8 | (param_5 & 0xff) << 0x10 | param_5 >> 0x10 & 0xff;
  pbmi[1].biClrUsed = (param_4 >> 8 & 0xff) << 8 | (param_4 & 0xff) << 0x10 | param_4 >> 0x10 & 0xff
  ;
  pbmi[2].biSizeImage =
       (param_6 >> 8 & 0xff) << 8 | (param_6 & 0xff) << 0x10 | param_6 >> 0x10 & 0xff;
  pbmi[2].biWidth = (param_7 >> 8 & 0xff) << 8 | param_7 >> 0x10 & 0xff | (param_7 & 0xff) << 0x10;
  pbmi[2].biSize = (param_8 >> 8 & 0xff) << 8 | param_8 >> 0x10 & 0xff | (param_8 & 0xff) << 0x10;
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreateDIBitmap(hdc,pbmi,4,&pbmi[2].biXPelsPerMeter,(BITMAPINFO *)pbmi,0);
  ReleaseDC((HWND)0x0,hdc);
  GlobalFree(pbmi);
  return pHVar2;
}


/*
 * FUN_5f00495c at 5f00495c
 * undefined __stdcall FUN_5f00495c(void)
 * Address ranges: 5f00495c-5f004988
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */


void FUN_5f00495c(void)

{
  uint in_EAX;
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar1 = (undefined4 *)&stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x400;
    *puVar1 = *puVar1;
  }
  *(undefined4 *)((int)puVar1 - in_EAX) = *(undefined4 *)((int)puVar1 - in_EAX);
                    /* WARNING: Could not recover jumptable at 0x5f004987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


