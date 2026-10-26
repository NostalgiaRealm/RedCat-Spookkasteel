/*
 * FUN_00429e1c at 00429e1c
 * undefined __register FUN_00429e1c(int param_1, WPARAM param_2, undefined * param_3)
 * Address ranges: 00429e1c-00429e8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429e1c(int param_1,WPARAM param_2,undefined *param_3)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int lParam;
  undefined *lParam_00;
  UINT UVar4;
  WPARAM wParam;
  LPARAM LVar5;
  
  LVar5 = 0;
  UVar4 = 0xbb;
  pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
  WVar2 = SendMessageA(pHVar1,UVar4,param_2,LVar5);
  if (-1 < (int)WVar2) {
    LVar5 = 0;
    UVar4 = 0xc1;
    wParam = WVar2;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    LVar3 = SendMessageA(pHVar1,UVar4,wParam,LVar5);
    lParam = LVar3 + WVar2;
    UVar4 = 0xb1;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar4,WVar2,lParam);
    lParam_00 = FUN_004041f4(param_3);
    WVar2 = 0;
    UVar4 = 0xc2;
    pHVar1 = (HWND)FUN_00438988(*(int **)(param_1 + 0xc));
    SendMessageA(pHVar1,UVar4,WVar2,(LPARAM)lParam_00);
  }
  return;
}

