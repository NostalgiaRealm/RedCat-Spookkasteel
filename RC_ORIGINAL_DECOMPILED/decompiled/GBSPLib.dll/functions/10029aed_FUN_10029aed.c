/*
 * FUN_10029aed at 10029aed
 * undefined FUN_10029aed(void)
 * Address ranges: 10029aed-10029b11
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029aed(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_10029010(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}

