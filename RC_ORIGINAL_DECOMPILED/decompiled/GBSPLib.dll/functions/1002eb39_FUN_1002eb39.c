/*
 * FUN_1002eb39 at 1002eb39
 * undefined FUN_1002eb39(void)
 * Address ranges: 1002eb39-1002ebf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eb39(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_1052a98c == 0) {
    FUN_100304f3();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_1052a3dc; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1052a480 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_1052a3dc;
  pcVar6 = DAT_1052a3dc;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10030dc0(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_100284b6(DAT_1052a3dc);
  DAT_1052a3dc = (char *)0x0;
  *puVar3 = 0;
  _DAT_1052a988 = 1;
  return;
}

