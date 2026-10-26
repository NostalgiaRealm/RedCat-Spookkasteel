/*
 * FUN_005e79e0 at 005e79e0
 * undefined FUN_005e79e0(void)
 * Address ranges: 005e79e0-005e7a14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __thiscall FUN_005e79e0(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  
  if (param_2 != param_3) {
    do {
      cVar1 = FUN_00600cb2((int)*param_2,param_1 + 8);
      *param_2 = cVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
    return param_2;
  }
  return param_2;
}

