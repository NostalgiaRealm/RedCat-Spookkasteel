/*
 * FUN_005ad6e0 at 005ad6e0
 * undefined FUN_005ad6e0(void)
 * Address ranges: 005ad6e0-005ad736
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005ad6e0(char param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 == '.') {
    if ((param_2[1] != '\0') && (*param_2 == '\0')) {
      *param_2 = '\x01';
      return 1;
    }
  }
  else if ((param_1 == '-') || (param_1 == '+')) {
    if ((param_2[1] == '\0') && (*param_2 == '\0')) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_0060b2ba((int)param_1);
    if (iVar1 != 0) {
      param_2[1] = '\x01';
      return 1;
    }
  }
  return 0;
}

