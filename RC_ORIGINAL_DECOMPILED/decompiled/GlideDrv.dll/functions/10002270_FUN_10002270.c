/*
 * FUN_10002270 at 10002270
 * char * __stdcall FUN_10002270(void)
 * Address ranges: 10002270-1000229c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10002270(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = &DAT_100e3e20;
  iVar1 = 0;
  do {
    if (*pcVar2 == '\0') {
      pcVar3 = pcVar2;
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        pcVar3[0] = '\0';
        pcVar3[1] = '\0';
        pcVar3[2] = '\0';
        pcVar3[3] = '\0';
        pcVar3 = pcVar3 + 4;
      }
      *pcVar2 = '\x01';
      return pcVar2;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 0x38;
  } while (iVar1 < 20000);
  return (char *)0x0;
}

