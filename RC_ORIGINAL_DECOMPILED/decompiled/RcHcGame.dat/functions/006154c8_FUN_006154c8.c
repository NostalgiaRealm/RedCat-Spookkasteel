/*
 * FUN_006154c8 at 006154c8
 * undefined FUN_006154c8(void)
 * Address ranges: 006154c8-0061551f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_006154c8(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (((uVar1 & 0xf) == 0) || ((uVar1 & 0xf) == 2)) {
    uVar1 = ((int)(param_2[1] << 0x1c) >> 0x1c ^ uVar1) & 0xf ^ uVar1;
    param_1[1] = uVar1;
    uVar1 = (param_2[1] ^ uVar1) & 0x10 ^ uVar1;
    param_1[1] = uVar1;
    uVar1 = (param_2[1] ^ uVar1) & 0x20 ^ uVar1;
    param_1[1] = uVar1;
    param_1[1] = (param_2[1] ^ uVar1) & 0x40 ^ uVar1;
    *param_1 = *param_2;
  }
  return;
}

