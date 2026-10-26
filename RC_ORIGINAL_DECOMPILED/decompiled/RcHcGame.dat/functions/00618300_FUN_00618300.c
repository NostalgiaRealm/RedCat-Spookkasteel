/*
 * FUN_00618300 at 00618300
 * undefined FUN_00618300(void)
 * Address ranges: 00618300-00618336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00618300(uint param_1)

{
  uint uVar1;
  
  if (DAT_006b28bc < 2) {
    uVar1 = (byte)PTR_DAT_006b26b0[param_1 * 2] & 4;
  }
  else {
    uVar1 = FUN_0060e0ee(param_1,4);
  }
  if (uVar1 == 0) {
    param_1 = (param_1 & 0xffffffdf) - 7;
  }
  return param_1;
}

