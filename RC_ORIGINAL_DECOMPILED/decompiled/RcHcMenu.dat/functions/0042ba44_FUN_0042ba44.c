/*
 * FUN_0042ba44 at 0042ba44
 * undefined __register FUN_0042ba44(int * param_1, char param_2)
 * Address ranges: 0042ba44-0042ba95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042ba44(int *param_1,char param_2)

{
  bool bVar1;
  HWND pHVar2;
  uint uVar3;
  uint wParam;
  UINT Msg;
  int nIndex;
  LPARAM lParam;
  
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    wParam = (uint)(param_2 != '\0');
    nIndex = -0x10;
    pHVar2 = (HWND)FUN_00438988(param_1);
    uVar3 = GetWindowLongA(pHVar2,nIndex);
    if ((uVar3 & 0xf) != wParam) {
      lParam = 1;
      Msg = 0xf4;
      pHVar2 = (HWND)FUN_00438988(param_1);
      SendMessageA(pHVar2,Msg,wParam,lParam);
    }
  }
  return;
}

