/*
 * FUN_0061e86f at 0061e86f
 * undefined FUN_0061e86f(void)
 * Address ranges: 0061e86f-0061e89c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061e86f(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}

