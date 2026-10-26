/*
 * FUN_0043c20c at 0043c20c
 * undefined __register FUN_0043c20c(int param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 0043c20c-0043c268
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043c20c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  HWND pHVar3;
  HDC pHVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(undefined4 *)(param_1 + 0x60) = param_2;
  pHVar3 = (HWND)FUN_00438988(*(int **)(param_1 + 0x14));
  FUN_0043cb78(DAT_0057374c,pHVar3);
  pHVar3 = (HWND)FUN_00438988(*(int **)(param_1 + 0x14));
  *(HWND *)(param_1 + 0x5c) = pHVar3;
  pHVar4 = GetDCEx(pHVar3,(HRGN)0x0,0x412);
  *(HDC *)(param_1 + 0x58) = pHVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  FUN_0043c31c(param_1);
  return;
}

