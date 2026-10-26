/*
 * FUN_005df7e0 at 005df7e0
 * undefined FUN_005df7e0(void)
 * Address ranges: 005df7e0-005df834
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005df7e0(char *param_1)

{
  char cVar1;
  int iVar2;
  
  if (((param_1[1] == ':') && (param_1[2] == '\\')) && (param_1[3] == '\0')) {
    param_1[2] = '\0';
    return 1;
  }
  iVar2 = 0;
  if ((*param_1 == '\\') && (param_1[1] == '\\')) {
    cVar1 = param_1[2];
    param_1 = param_1 + 2;
    if (cVar1 != '\0') {
      do {
        param_1 = param_1 + 1;
        if (cVar1 == '\\') {
          iVar2 = iVar2 + 1;
        }
        cVar1 = *param_1;
      } while (cVar1 != '\0');
      if (iVar2 == 1) {
        return 1;
      }
    }
  }
  return 0;
}

