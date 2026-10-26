/*
 * FUN_10017460 at 10017460
 * undefined FUN_10017460(void)
 * Address ranges: 10017460-10017475
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10017460(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + (param_1 & 1);
  }
  return iVar1;
}

