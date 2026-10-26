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

