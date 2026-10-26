/*
 * FUN_0044b5d8 at 0044b5d8
 * undefined __register FUN_0044b5d8(int * param_1)
 * Address ranges: 0044b5d8-0044b650
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b5d8(int *param_1)

{
  HWND pHVar1;
  HMENU pHVar2;
  HMENU wParam;
  LPARAM lParam;
  
  if ((*(char *)((int)param_1 + 0x217) == '\x02') && (param_1[0x8f] != 0)) {
    wParam = (HMENU)0x0;
    if ((int *)param_1[0x8c] != (int *)0x0) {
      wParam = (HMENU)(**(code **)(*(int *)param_1[0x8c] + 0x34))();
    }
    lParam = 0;
    if (param_1[0x90] != 0) {
      lParam = FUN_0044169c(param_1[0x90]);
    }
    pHVar1 = (HWND)FUN_00438988(param_1);
    pHVar2 = GetMenu(pHVar1);
    SendMessageA((HWND)param_1[0x8f],0x230,(WPARAM)wParam,lParam);
    if (wParam != pHVar2) {
      pHVar1 = (HWND)FUN_00438988(param_1);
      DrawMenuBar(pHVar1);
    }
  }
  return;
}

