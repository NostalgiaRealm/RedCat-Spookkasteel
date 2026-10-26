/*
 * FUN_00442df0 at 00442df0
 * undefined FUN_00442df0(void)
 * Address ranges: 00442df0-00442e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00442df0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_00443140(param_3,param_1);
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
  } while (param_1 != param_2);
  return param_3;
}

