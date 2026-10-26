/*
 * FUN_005e7a40 at 005e7a40
 * undefined FUN_005e7a40(void)
 * Address ranges: 005e7a40-005e7a74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __thiscall FUN_005e7a40(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  
  if (param_2 != param_3) {
    do {
      cVar1 = FUN_00600dfa((int)*param_2,param_1 + 8);
      *param_2 = cVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
    return param_2;
  }
  return param_2;
}

