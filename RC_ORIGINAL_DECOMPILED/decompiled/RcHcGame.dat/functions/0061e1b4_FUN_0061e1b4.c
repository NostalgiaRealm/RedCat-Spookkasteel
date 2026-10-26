/*
 * FUN_0061e1b4 at 0061e1b4
 * undefined FUN_0061e1b4(void)
 * Address ranges: 0061e1b4-0061e1e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061e1b4(byte param_1,uint param_2,byte param_3)

{
  if ((*(byte *)((int)&DAT_00747d80 + param_1 + 1) & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_006b26ba + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

