/*
 * FUN_00448b14 at 00448b14
 * bool __register FUN_00448b14(short param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00448b14-00448b45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00448b14(short param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  int nIndex;
  
  uVar2 = 0x100000;
  if (param_1 == 1) {
    uVar2 = 0x200000;
  }
  nIndex = -0x10;
  hWnd = (HWND)FUN_00438988(*(int **)(*(int *)(param_4 + -4) + 4));
  uVar1 = GetWindowLongA(hWnd,nIndex);
  return (uVar1 & uVar2) != 0;
}

