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

