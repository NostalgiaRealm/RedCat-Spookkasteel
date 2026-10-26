/*
 * FUN_005cb770 at 005cb770
 * undefined FUN_005cb770(void)
 * Address ranges: 005cb770-005cb822
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cb770(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  
  if (DAT_006cc508 == 0) {
    while (-1 < param_4) {
      param_4 = param_4 * 0x2c;
      uVar1 = FUN_005caa50(param_2,param_3,
                           DAT_006cc4c8 + *(int *)(param_4 + 0x10 + DAT_006cc510) * 0x14);
      if ((uVar1 & 1) != 0) {
        FUN_005cb770(param_1,param_2,param_3,*(undefined4 *)(param_4 + DAT_006cc510));
      }
      if ((uVar1 & 2) == 0) {
        return;
      }
      param_4 = *(int *)(param_4 + 4 + DAT_006cc510);
      if (DAT_006cc508 != 0) {
        return;
      }
    }
    if (*(int *)(*(int *)(param_1[6] + 0xd5cc) + (param_4 * 3 + 3) * -4) == *param_1) {
      DAT_006cc508 = 1;
    }
  }
  return;
}

