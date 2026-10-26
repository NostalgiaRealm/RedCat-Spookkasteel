/*
 * FUN_005c16f0 at 005c16f0
 * undefined FUN_005c16f0(void)
 * Address ranges: 005c16f0-005c1705
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c16f0(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + (param_1 & 1);
  }
  return iVar1;
}

