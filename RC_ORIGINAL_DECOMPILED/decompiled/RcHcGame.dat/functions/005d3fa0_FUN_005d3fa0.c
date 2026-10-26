/*
 * FUN_005d3fa0 at 005d3fa0
 * undefined FUN_005d3fa0(void)
 * Address ranges: 005d3fa0-005d3fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d3fa0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  if (0 < param_6) {
    do {
      FUN_005d3f30(param_1,param_2,param_3,param_4,param_5);
      param_6 = param_6 + -1;
      param_5 = param_5 + 0x18;
      param_3 = param_3 + 0xc;
      param_4 = param_4 + 0x18;
    } while (param_6 != 0);
  }
  return;
}

