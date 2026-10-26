/*
 * FUN_0061e89d at 0061e89d
 * undefined FUN_0061e89d(void)
 * Address ranges: 0061e89d-0061e8c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061e89d(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

