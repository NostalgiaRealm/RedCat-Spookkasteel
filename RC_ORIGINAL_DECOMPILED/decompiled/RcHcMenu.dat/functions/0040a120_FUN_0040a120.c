/*
 * FUN_0040a120 at 0040a120
 * char * __register FUN_0040a120(char * param_1)
 * Address ranges: 0040a120-0040a132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0040a120(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = -1;
  do {
    pcVar3 = param_1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar3;
  } while (cVar1 != '\0');
  return pcVar3 + -1;
}

