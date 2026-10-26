/*
 * FUN_10024ad0 at 10024ad0
 * undefined FUN_10024ad0(void)
 * Address ranges: 10024ad0-10024b31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10024ad0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_2;
  while( true ) {
    if (cVar1 == '\0') {
      if (*param_1 == '\0') {
        return 1;
      }
      return 0;
    }
    if (cVar1 == '*') {
      if (param_2[1] == '\0') {
        return 1;
      }
      cVar1 = *param_1;
      while( true ) {
        if (cVar1 == '\0') {
          return 0;
        }
        iVar2 = FUN_10024ad0(param_1,param_2 + 1);
        if (iVar2 == 1) break;
        cVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return 1;
    }
    if ((cVar1 != '?') && (*param_1 != cVar1)) break;
    cVar1 = param_2[1];
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}

