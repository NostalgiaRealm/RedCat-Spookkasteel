/*
 * FUN_00429d3c at 00429d3c
 * undefined __register FUN_00429d3c(int * param_1)
 * Address ranges: 00429d3c-00429d72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429d3c(int *param_1)

{
  bool bVar1;
  HWND hWnd;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  int nIndex;
  
  (**(code **)(*param_1 + -0x10))();
  bVar1 = FUN_00438c84((int)param_1);
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
  if (bVar1) {
    nIndex = -0x10;
    hWnd = (HWND)FUN_00438988(param_1);
    uVar2 = GetWindowLongA(hWnd,nIndex);
    uVar3 = extraout_ECX_00;
    uVar4 = extraout_EDX_00;
    if ((uVar2 & 4) == 0) {
      return;
    }
  }
  FUN_00403270(param_1,uVar4,uVar3);
  return;
}

