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

