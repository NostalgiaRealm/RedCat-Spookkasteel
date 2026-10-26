/*
 * FUN_00601d1b at 00601d1b
 * undefined FUN_00601d1b(void)
 * Address ranges: 00601d1b-00601d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_00601d1b(char *param_1,char *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = FUN_0060a03a((int)*param_1);
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  }
  return param_1;
}

