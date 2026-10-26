/*
 * FUN_0061bf01 at 0061bf01
 * undefined FUN_0061bf01(void)
 * Address ranges: 0061bf01-0061bf48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_0061bf01(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_2 <= param_1) {
    return (byte *)0x0;
  }
  if (DAT_00747c7c != 0) {
    pbVar1 = param_2 + -1;
    if ((*(byte *)((int)&DAT_00747d80 + param_2[-1] + 1) & 4) != 0) {
      return param_2 + -2;
    }
    do {
      pbVar1 = pbVar1 + -1;
      if (pbVar1 < param_1) break;
    } while ((*(byte *)((int)&DAT_00747d80 + *pbVar1 + 1) & 4) != 0);
    param_2 = param_2 + -((int)param_2 - (int)pbVar1 & 1U);
  }
  return param_2 + -1;
}

