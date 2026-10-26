/*
 * FUN_005cb340 at 005cb340
 * undefined FUN_005cb340(void)
 * Address ranges: 005cb340-005cb3f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005cb340(int param_1)

{
  uint uVar1;
  
  while( true ) {
    if (param_1 < 0) {
      param_1 = -1 - param_1;
      if (((*(uint *)(DAT_006cc4c4 + param_1 * 0x3c) & DAT_006cc58c) != 0) &&
         (DAT_006cc5ac = 0, *(int *)(DAT_006cc4c4 + param_1 * 0x3c + 0x38) != 0)) {
        FUN_005cabc0(&DAT_006cc4b8,&DAT_006cc4f8,param_1,0,1);
      }
      return;
    }
    param_1 = param_1 * 0x2c;
    uVar1 = FUN_005caa50(&DAT_006cc4e8,&DAT_006cc580,
                         DAT_006cc4c8 + *(int *)(param_1 + 0x10 + DAT_006cc510) * 0x14);
    if ((uVar1 & 1) != 0) {
      FUN_005cb340(*(undefined4 *)(param_1 + DAT_006cc510));
    }
    if ((uVar1 & 2) == 0) break;
    param_1 = *(int *)(param_1 + 4 + DAT_006cc510);
  }
  return;
}

