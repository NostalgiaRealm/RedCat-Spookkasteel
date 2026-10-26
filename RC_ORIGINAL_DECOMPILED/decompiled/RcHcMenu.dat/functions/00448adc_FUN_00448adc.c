/*
 * FUN_00448adc at 00448adc
 * undefined4 __register FUN_00448adc(int param_1)
 * Address ranges: 00448adc-00448b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00448adc(int param_1)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  int nIndex;
  
  uVar2 = 0x100000;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = 0x200000;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    nIndex = -0x10;
    hWnd = (HWND)FUN_00438988(*(int **)(param_1 + 4));
    uVar1 = GetWindowLongA(hWnd,nIndex);
    if ((uVar1 & uVar2) != 0) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return 0;
}

