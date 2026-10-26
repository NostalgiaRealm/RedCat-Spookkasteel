/*
 * FUN_00619eb9 at 00619eb9
 * undefined FUN_00619eb9(void)
 * Address ranges: 00619eb9-00619eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00619eb9(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_00619ed0;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_00619ed0:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}

