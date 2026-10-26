/*
 * FUN_100073d0 at 100073d0
 * undefined FUN_100073d0(void)
 * Address ranges: 100073d0-1000741e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100073d0(int *param_1,int param_2)

{
  if (*param_1 != -1) {
    param_1[0x15] = param_2;
    FUN_100073d0(param_1[4],param_2);
    FUN_100073d0(param_1[5],param_2);
    return 1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_1[0x15] = -1;
    return 1;
  }
  param_1[0x15] = param_2;
  return 1;
}

