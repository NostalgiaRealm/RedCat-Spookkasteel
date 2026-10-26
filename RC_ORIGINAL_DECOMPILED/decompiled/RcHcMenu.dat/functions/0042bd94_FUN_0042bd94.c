/*
 * FUN_0042bd94 at 0042bd94
 * undefined __register FUN_0042bd94(int * param_1, char param_2)
 * Address ranges: 0042bd94-0042be1a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bd94(int *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  HWND hWnd;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  UINT Msg;
  LPARAM lParam;
  
  if (param_2 != *(char *)((int)param_1 + 0x1f9)) {
    *(char *)((int)param_1 + 0x1f9) = param_2;
    FUN_00438bb4((int)param_1,param_2);
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      lParam = 0;
      uVar2 = (**(code **)(*param_1 + 0xb4))();
      uVar2 = uVar2 & 0x7f;
      Msg = 0xf1;
      hWnd = (HWND)FUN_00438988(param_1);
      SendMessageA(hWnd,Msg,uVar2,lParam);
    }
    if (param_2 != '\0') {
      FUN_0042bd2c();
      FUN_00432380((int)param_1);
      if ((char)param_1[0x7c] == '\0') {
        FUN_00403270(param_1,extraout_EDX,extraout_ECX);
      }
    }
  }
  return;
}

