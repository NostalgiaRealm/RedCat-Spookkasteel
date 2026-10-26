/*
 * FUN_1001ce45 at 1001ce45
 * undefined FUN_1001ce45(void)
 * Address ranges: 1001ce45-1001ce79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001ce45(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1001ce90();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_1001cf22(uVar1);
  return uVar1;
}

