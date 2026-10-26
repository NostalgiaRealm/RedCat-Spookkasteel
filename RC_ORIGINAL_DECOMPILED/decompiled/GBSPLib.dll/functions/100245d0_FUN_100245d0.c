/*
 * FUN_100245d0 at 100245d0
 * undefined FUN_100245d0(void)
 * Address ranges: 100245d0-100245f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_100245d0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while ((cVar2 != '\0' && (cVar2 != '\\'))) {
    *param_2 = cVar2;
    pcVar1 = param_1 + 1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  *param_2 = '\0';
  if (*param_1 == '\\') {
    param_1 = param_1 + 1;
  }
  return param_1;
}

