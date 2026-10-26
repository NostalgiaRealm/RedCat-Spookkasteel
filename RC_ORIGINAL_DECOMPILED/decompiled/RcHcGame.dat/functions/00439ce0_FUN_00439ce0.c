/*
 * FUN_00439ce0 at 00439ce0
 * undefined FUN_00439ce0(void)
 * Address ranges: 00439ce0-00439d19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_00439ce0(int param_1,int param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_2 < 1) {
    param_2 = *(int *)(param_1 + 0x44) + param_2;
    *(int *)(param_1 + 0x44) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      uVar1 = 0;
    }
  }
  else {
    param_2 = *(int *)(param_1 + 0x44) + param_2;
    *(int *)(param_1 + 0x44) = param_2;
    if (DAT_006b58a8 < param_2) {
      *(int *)(param_1 + 0x44) = DAT_006b58a8;
      return uVar1;
    }
  }
  return uVar1;
}

