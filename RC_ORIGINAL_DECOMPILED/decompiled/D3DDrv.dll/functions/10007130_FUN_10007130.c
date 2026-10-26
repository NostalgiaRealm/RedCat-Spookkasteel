/*
 * FUN_10007130 at 10007130
 * undefined4 __stdcall FUN_10007130(void)
 * Address ranges: 10007130-10007161
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10007130(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = &DAT_10127268;
  iVar3 = 0;
  do {
    if (*pcVar2 != '\0') {
      iVar1 = FUN_10007670((undefined4 *)pcVar2);
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x20;
  } while (iVar3 < 20000);
  return 1;
}

