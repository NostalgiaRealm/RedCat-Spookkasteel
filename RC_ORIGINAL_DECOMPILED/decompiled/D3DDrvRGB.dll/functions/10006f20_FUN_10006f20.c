/*
 * FUN_10006f20 at 10006f20
 * char * __stdcall FUN_10006f20(void)
 * Address ranges: 10006f20-10006f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_10006f20(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = &DAT_10028b80;
  iVar1 = 0;
  do {
    if (*pcVar2 == '\0') {
      pcVar3 = pcVar2;
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
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
    pcVar2 = pcVar2 + 0x20;
  } while (iVar1 < 25000);
  FUN_10005e40(7,s_D3D_FindTextureHandle__No_more_h_10018a70);
  return (char *)0x0;
}

