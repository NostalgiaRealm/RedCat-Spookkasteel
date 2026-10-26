/*
 * FUN_00439db0 at 00439db0
 * undefined FUN_00439db0(void)
 * Address ranges: 00439db0-00439de6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00439db0(int param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = *(int *)(param_1 + 0x74) + param_2;
    *(int *)(param_1 + 0x74) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  else {
    param_2 = *(int *)(param_1 + 0x74) + param_2;
    *(int *)(param_1 + 0x74) = param_2;
    if (DAT_006b5884 < param_2) {
      *(int *)(param_1 + 0x74) = DAT_006b5884;
      return 1;
    }
  }
  return 1;
}

