/*
 * FUN_100305a9 at 100305a9
 * undefined FUN_100305a9(void)
 * Address ranges: 100305a9-100305dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100305a9(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100305f4();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10030686(uVar1);
  return uVar1;
}

