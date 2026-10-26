/*
 * FUN_00409896 at 00409896
 * undefined4 __cdecl FUN_00409896(char * param_1)
 * Address ranges: 00409896-004098d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_00409896(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = *param_1;
  pcVar2 = param_1;
  while ((cVar3 != '\0' && (cVar3 != '\r'))) {
    pcVar1 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
    cVar3 = *pcVar1;
  }
  while( true ) {
    if (*pcVar2 != '\0') {
      pcVar2 = pcVar2 + 2;
    }
    cVar3 = *pcVar2;
    if (cVar3 == '\0') break;
    if (cVar3 == '\"') {
      return 0;
    }
    while ((cVar3 != '\0' && (cVar3 != '\r'))) {
      pcVar1 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
      cVar3 = *pcVar1;
    }
  }
  *param_1 = '*';
  return 1;
}

