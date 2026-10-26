/*
 * FUN_0044a734 at 0044a734
 * undefined __register FUN_0044a734(int * param_1)
 * Address ranges: 0044a734-0044a78c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044a734(int *param_1)

{
  bool bVar1;
  LPARAM lParam;
  HWND pHVar2;
  BOOL BVar3;
  UINT Msg;
  WPARAM wParam;
  
  if (*PTR_DAT_005722c4 == '\0') {
    pHVar2 = (HWND)FUN_00438988(param_1);
    BVar3 = IsIconic(pHVar2);
    if (BVar3 != 0) {
      (**(code **)(*param_1 + 0x74))();
    }
  }
  else {
    bVar1 = FUN_00438c84((int)param_1);
    if ((bVar1) && (*(char *)((int)param_1 + 0x211) != '\x03')) {
      lParam = FUN_0044c87c((int)param_1);
      wParam = 1;
      Msg = 0x80;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
      return;
    }
  }
  return;
}

