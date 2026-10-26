/*
 * FUN_0061cedf at 0061cedf
 * undefined FUN_0061cedf(void)
 * Address ranges: 0061cedf-0061cf13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0061cedf(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0061cf2a();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_0061cfbc(uVar1);
  return uVar1;
}

