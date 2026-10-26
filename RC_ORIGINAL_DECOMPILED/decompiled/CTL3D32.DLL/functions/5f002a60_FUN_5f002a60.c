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

