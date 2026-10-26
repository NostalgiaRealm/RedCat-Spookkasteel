/*
 * FUN_0044c7b0 at 0044c7b0
 * undefined __register FUN_0044c7b0(UINT param_1, int * param_2, int * param_3)
 * Address ranges: 0044c7b0-0044c7f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c7b0(UINT param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  int *piVar2;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_2 != (int *)0x0) {
    do {
      piVar2 = param_2;
      param_2 = (int *)piVar2[9];
      if (param_2 == (int *)0x0) break;
      uVar1 = FUN_0040320c(piVar2,(int)&PTR_FUN_00446c28);
    } while ((char)uVar1 == '\0');
    if ((piVar2 != (int *)0x0) && (param_3 != piVar2)) {
      lParam = 0;
      wParam = 0;
      hWnd = (HWND)FUN_00438988(piVar2);
      SendMessageA(hWnd,param_1,wParam,lParam);
    }
  }
  return;
}

