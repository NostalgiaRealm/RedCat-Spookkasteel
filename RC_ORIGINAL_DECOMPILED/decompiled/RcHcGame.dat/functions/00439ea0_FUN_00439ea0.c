/*
 * FUN_00439ea0 at 00439ea0
 * undefined FUN_00439ea0(void)
 * Address ranges: 00439ea0-00439ed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00439ea0(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x60) + param_2;
    *(int *)(param_1 + 0x60) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  else {
    param_2 = *(int *)(param_1 + 0x60) + param_2;
    *(int *)(param_1 + 0x60) = param_2;
    if (*(int *)(param_1 + 100) < param_2) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 100);
      return 1;
    }
  }
  return 1;
}

