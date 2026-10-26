/*
 * FUN_1000a690 at 1000a690
 * undefined FUN_1000a690(void)
 * Address ranges: 1000a690-1000a6eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1000a690(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  while (-1 < param_1) {
    param_1 = param_1 * 0x2c;
    fVar1 = (float10)FUN_10009f40(param_2,DAT_1014e2e8 +
                                          *(int *)(param_1 + 0x10 + DAT_1014e298) * 0x14);
    if ((float10)0.0 <= fVar1) {
      param_1 = *(int *)(param_1 + DAT_1014e298);
    }
    else {
      param_1 = *(int *)(param_1 + 4 + DAT_1014e298);
    }
  }
  return -1 - param_1;
}

