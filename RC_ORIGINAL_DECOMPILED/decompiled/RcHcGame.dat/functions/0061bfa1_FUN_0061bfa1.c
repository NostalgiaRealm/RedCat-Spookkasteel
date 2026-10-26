/*
 * FUN_0061bfa1 at 0061bfa1
 * undefined FUN_0061bfa1(void)
 * Address ranges: 0061bfa1-0061c059
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061bfa1(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_00747ea8 == 0) {
    FUN_0061b888();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_0070ff7c; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_0070ffc0 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_0070ff7c;
  pcVar6 = DAT_0070ff7c;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_00611110(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_0060b25d(DAT_0070ff7c);
  DAT_0070ff7c = (char *)0x0;
  *puVar3 = 0;
  DAT_00747ea4 = 1;
  return;
}

