/*
 * FUN_00610677 at 00610677
 * undefined FUN_00610677(void)
 * Address ranges: 00610677-0061069b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00610677(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_0060ab50(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}

