/*
 * FUN_00439e60 at 00439e60
 * undefined FUN_00439e60(void)
 * Address ranges: 00439e60-00439e95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00439e60(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x58) + param_2;
    *(int *)(param_1 + 0x58) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
  }
  else {
    param_2 = *(int *)(param_1 + 0x58) + param_2;
    *(int *)(param_1 + 0x58) = param_2;
    if (100 < param_2) {
      *(undefined4 *)(param_1 + 0x58) = 100;
      return 1;
    }
  }
  return 1;
}

