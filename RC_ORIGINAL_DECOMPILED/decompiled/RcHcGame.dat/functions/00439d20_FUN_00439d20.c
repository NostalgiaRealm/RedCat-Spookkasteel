/*
 * FUN_00439d20 at 00439d20
 * undefined FUN_00439d20(void)
 * Address ranges: 00439d20-00439d56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00439d20(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = *(int *)(param_1 + 0x48) + param_2;
    *(int *)(param_1 + 0x48) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  else {
    param_2 = *(int *)(param_1 + 0x48) + param_2;
    *(int *)(param_1 + 0x48) = param_2;
    if (DAT_006b58a0 < param_2) {
      *(int *)(param_1 + 0x48) = DAT_006b58a0;
      return 1;
    }
  }
  return 1;
}

