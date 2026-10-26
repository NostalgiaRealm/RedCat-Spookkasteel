/*
 * FUN_0040ebd6 at 0040ebd6
 * undefined __register FUN_0040ebd6(undefined4 param_1, undefined4 param_2, int param_3)
 * Address ranges: 0040ebd6-0040ec10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040ebd6(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int unaff_EBP;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(unaff_EBP + 8);
  do {
    pcVar3 = pcVar4;
    if (param_3 == 0) {
      return;
    }
    do {
      while( true ) {
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        if ((cVar1 != '\'') && (cVar1 != '\"')) break;
        while( true ) {
          pcVar3 = pcVar4 + 1;
          cVar2 = *pcVar4;
          if (cVar2 == cVar1) break;
          pcVar4 = pcVar3;
          if (cVar2 == '\0') {
            return;
          }
        }
      }
      if (cVar1 == '\0') {
        return;
      }
      pcVar3 = pcVar4;
    } while (cVar1 != ';');
    param_3 = param_3 + -1;
  } while( true );
}

