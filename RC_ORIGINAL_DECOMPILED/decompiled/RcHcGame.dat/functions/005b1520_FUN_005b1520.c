/*
 * FUN_005b1520 at 005b1520
 * undefined FUN_005b1520(void)
 * Address ranges: 005b1520-005b1560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b1520(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5
                 ,undefined4 *param_6)

{
  *param_6 = *(undefined4 *)(param_1 + 0xc);
  param_6[1] = *(undefined4 *)(param_1 + 0x10);
  param_6[2] = *(undefined4 *)(param_1 + 0x14);
  if (param_4 != 0.0) {
    FUN_005b3020(param_4,param_6);
  }
  return;
}

