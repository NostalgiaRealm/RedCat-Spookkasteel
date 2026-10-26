/*
 * FUN_1001b59f at 1001b59f
 * undefined FUN_1001b59f(void)
 * Address ranges: 1001b59f-1001b5c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b59f(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1001c3f0(param_1 + param_2,param_1,sVar1 + 1);
  }
  return;
}

