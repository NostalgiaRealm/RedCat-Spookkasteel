/*
 * FUN_005d58b0 at 005d58b0
 * undefined FUN_005d58b0(void)
 * Address ranges: 005d58b0-005d591c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d58b0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0) {
    *(int *)(DAT_006cefe8 + param_1 * -0xc + -8) = param_2;
    return;
  }
  do {
    iVar1 = param_1;
    *(int *)(DAT_006ceff0 + iVar1 * 4) = param_2;
    FUN_005d58b0(*(undefined4 *)(iVar1 * 0x2c + DAT_006cefec),iVar1);
    param_1 = *(int *)(iVar1 * 0x2c + 4 + DAT_006cefec);
    param_2 = iVar1;
  } while (-1 < param_1);
  *(int *)(DAT_006cefe8 + param_1 * -0xc + -8) = iVar1;
  return;
}

