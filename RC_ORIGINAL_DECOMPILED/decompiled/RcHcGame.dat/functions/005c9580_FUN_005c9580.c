/*
 * FUN_005c9580 at 005c9580
 * undefined FUN_005c9580(void)
 * Address ranges: 005c9580-005c95c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005c9580(uint param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x33660) == 0) {
    return 0;
  }
  uVar1 = (param_1 - 0x4488) + *(int *)(param_1 + 0x33660) * 0x4488;
  if (param_2 != 0) {
    return ~-(uint)(uVar1 < param_2 + 0x4488U) & param_2 + 0x4488U;
  }
  return ~-(uint)(uVar1 < param_1) & param_1;
}

