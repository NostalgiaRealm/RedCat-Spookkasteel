/*
 * FUN_005acdb0 at 005acdb0
 * undefined FUN_005acdb0(void)
 * Address ranges: 005acdb0-005acdd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_005acdb0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005acde0(param_2);
  if (((uVar1 & 3) != 0) && (*(code **)(param_1 + 0x68) != (code *)0x0)) {
    (**(code **)(param_1 + 0x68))(param_1);
  }
  return uVar1;
}

