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

