/*
 * FUN_00451bc0 at 00451bc0
 * undefined __register FUN_00451bc0(byte param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00451bc0-00451c19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451bc0(byte param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  BOOL BVar1;
  
  BVar1 = IsWindowVisible(*(HWND *)(*(int *)(param_4 + -4) + 0x24));
  if (((BVar1 != 0) == (bool)DAT_0056fb04) && (param_1 != DAT_0056fb04)) {
    SetWindowPos(*(HWND *)(*(int *)(param_4 + -4) + 0x24),(HWND)0x0,0,0,0,0,
                 (uint)*(ushort *)(&DAT_0056fb08 + (uint)param_1 * 2));
    DAT_0056fb04 = param_1;
  }
  return;
}

