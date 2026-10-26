/*
 * FUN_00509ec8 at 00509ec8
 * undefined __register FUN_00509ec8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00509ec8-00509eff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00509ec8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (*(double *)(param_1 + 0x10) != (double)CONCAT44(param_5,param_4)) {
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_00501180(param_1);
  }
  return;
}

