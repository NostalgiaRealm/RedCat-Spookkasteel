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

