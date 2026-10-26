/*
 * FUN_10006f60 at 10006f60
 * undefined4 __stdcall FUN_10006f60(void)
 * Address ranges: 10006f60-10006f91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10006f60(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = &DAT_10028b80;
  iVar3 = 0;
  do {
    if (*pcVar2 != '\0') {
      iVar1 = FUN_100074d0(pcVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x20;
  } while (iVar3 < 25000);
  return 1;
}

