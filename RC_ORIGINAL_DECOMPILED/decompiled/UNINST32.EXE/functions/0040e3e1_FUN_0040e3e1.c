/*
 * FUN_0040e3e1 at 0040e3e1
 * undefined __stdcall FUN_0040e3e1(void)
 * Address ranges: 0040e3e1-0040e499
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e3e1(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_00413f08 == 0) {
    FUN_0040ef3c();
  }
  iVar5 = 0;
  for (puVar6 = DAT_004134d8; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_0041350c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0040ca4f(9);
  }
  cVar1 = (char)*DAT_004134d8;
  puVar6 = DAT_004134d8;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_0040ca4f(9);
      }
      FUN_0040cb80((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_0040c92a(DAT_004134d8);
  DAT_004134d8 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_00413f04 = 1;
  return;
}

