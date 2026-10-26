/*
 * FUN_005d3df0 at 005d3df0
 * undefined FUN_005d3df0(void)
 * Address ranges: 005d3df0-005d3e44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_005d3df0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((double)CONCAT44(param_2,param_1) == 0.0) {
    return (float10)0.0;
  }
  uVar2 = param_2 & 0xfffff;
  uVar1 = ((int)param_2 >> 0x14) - 0x3ff;
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar2 | 0x100000;
  }
  return (float10)(double)CONCAT44((&DAT_007103c0)[(int)uVar2 >> 7] |
                                   (((int)uVar1 >> 1) + 0x3ff) * 0x100000,param_1);
}

