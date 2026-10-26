/*
 * FUN_005c95d0 at 005c95d0
 * undefined FUN_005c95d0(void)
 * Address ranges: 005c95d0-005c9610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_005c95d0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xf8 + *(int *)(param_1 + 0x4484) * 0x20c;
  if (param_2 != 0) {
    return ~-(uint)(uVar1 < param_2 + 0x20cU) & param_2 + 0x20cU;
  }
  return ~-(uint)(uVar1 < param_1 + 0x304U) & param_1 + 0x304U;
}

