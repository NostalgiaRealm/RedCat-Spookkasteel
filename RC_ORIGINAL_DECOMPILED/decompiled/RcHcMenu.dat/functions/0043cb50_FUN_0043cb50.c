/*
 * FUN_0043cb50 at 0043cb50
 * undefined __register FUN_0043cb50(int param_1, undefined4 param_2, LRESULT param_3)
 * Address ranges: 0043cb50-0043cb76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043cb50(int param_1,undefined4 param_2,LRESULT param_3)

{
  HWND pHVar1;
  LRESULT LStack_8;
  
  LStack_8 = param_3;
  pHVar1 = FUN_004085d0((UINT *)(param_1 + 0x1c),(UINT *)(param_1 + 0x24),(UINT *)(param_1 + 0x14),
                        (LRESULT *)(param_1 + 0x10),&LStack_8);
  *(HWND *)(param_1 + 0x18) = pHVar1;
  *(bool *)(param_1 + 0x20) = *(int *)(param_1 + 0x1c) != 0;
  return;
}

