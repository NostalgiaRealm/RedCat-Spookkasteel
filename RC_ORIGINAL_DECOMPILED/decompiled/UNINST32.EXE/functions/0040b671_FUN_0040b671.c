/*
 * FUN_0040b671 at 0040b671
 * undefined4 * __cdecl FUN_0040b671(uint param_1)
 * Address ranges: 0040b671-0040b6f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_0040b671(uint param_1)

{
  size_t _Size;
  undefined4 *puVar1;
  
  if (DAT_0041377c == (undefined4 *)0x0) {
    DAT_0041377c = _malloc(0xfc00);
    DAT_00413ac8 = DAT_0041377c;
    *DAT_0041377c = 0;
  }
  else {
    _Size = 0xfc00;
    if ((int)param_1 <= 0xfc00 - DAT_00413708) {
      puVar1 = (undefined4 *)((int)DAT_00413ac8 + DAT_00413708);
      DAT_00413708 = DAT_00413708 + param_1;
      return puVar1;
    }
    if (0xfc00 < param_1) {
      _Size = param_1 + 4;
    }
    puVar1 = _malloc(_Size);
    *DAT_00413ac8 = puVar1;
    DAT_00413ac8 = puVar1;
    *puVar1 = 0;
  }
  DAT_00413708 = param_1 + 4;
  return DAT_00413ac8 + 1;
}

