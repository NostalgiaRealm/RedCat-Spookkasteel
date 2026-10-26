/*
 * FUN_1001e75f at 1001e75f
 * undefined FUN_1001e75f(void)
 * Address ranges: 1001e75f-1001e78c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e75f(uint *param_1)

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

