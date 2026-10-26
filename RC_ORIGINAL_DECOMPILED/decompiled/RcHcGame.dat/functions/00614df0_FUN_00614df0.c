/*
 * FUN_00614df0 at 00614df0
 * undefined FUN_00614df0(void)
 * Address ranges: 00614df0-00614e3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00614df0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = ((int)(param_2[1] << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  param_1[1] = uVar1;
  uVar1 = (uVar1 ^ param_2[1]) & 0x10 ^ uVar1;
  param_1[1] = uVar1;
  uVar1 = (uVar1 ^ param_2[1]) & 0x20 ^ uVar1;
  param_1[1] = uVar1;
  param_1[1] = (uVar1 ^ param_2[1]) & 0x40 ^ uVar1;
  *param_1 = *param_2;
  return;
}

