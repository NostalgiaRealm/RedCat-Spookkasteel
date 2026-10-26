/*
 * FUN_00439d70 at 00439d70
 * undefined FUN_00439d70(void)
 * Address ranges: 00439d70-00439da6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00439d70(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    param_2 = *(int *)(param_1 + 0x54) + param_2;
    *(int *)(param_1 + 0x54) = param_2;
    if (DAT_006b58a0 < param_2) {
      *(int *)(param_1 + 0x54) = DAT_006b58a0;
      return 1;
    }
  }
  return 1;
}

