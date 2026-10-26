/*
 * FUN_0049c99c at 0049c99c
 * uint __register FUN_0049c99c(uint param_1, uint param_2)
 * Address ranges: 0049c99c-0049c9d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0049c99c(uint param_1,uint param_2)

{
  uint uVar1;
  
  while (param_2 != 0) {
    uVar1 = param_1 % param_2;
    param_1 = param_2;
    param_2 = uVar1;
  }
  return param_1;
}

