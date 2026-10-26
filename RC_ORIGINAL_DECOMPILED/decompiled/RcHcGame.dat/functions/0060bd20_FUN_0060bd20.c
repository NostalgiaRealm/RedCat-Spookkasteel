/*
 * FUN_0060bd20 at 0060bd20
 * undefined FUN_0060bd20(void)
 * Address ranges: 0060bd20-0060bdae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0060bd20(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int local_8;
  
  puVar8 = (undefined4 *)PTR_PTR_006b2200;
  iVar5 = 0;
  local_8 = 7;
  puVar6 = (undefined4 *)PTR_PTR_006b2200;
  do {
    sVar1 = _strlen((char *)puVar6[7]);
    sVar2 = _strlen((char *)*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
    iVar5 = sVar2 + iVar5 + 2 + sVar1;
  } while (local_8 != 0);
  puVar3 = _malloc(iVar5 + 1);
  if (puVar3 != (undefined1 *)0x0) {
    iVar5 = 7;
    puVar7 = puVar3;
    do {
      *puVar7 = 0x3a;
      puVar7 = puVar7 + 1;
      pcVar4 = (char *)FUN_00611110(puVar7,*puVar8);
      sVar1 = _strlen(pcVar4);
      puVar7 = puVar7 + sVar1;
      *puVar7 = 0x3a;
      pcVar4 = (char *)FUN_00611110(puVar7 + 1,puVar8[7]);
      sVar1 = _strlen(pcVar4);
      puVar7 = puVar7 + 1 + sVar1;
      puVar8 = puVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *puVar7 = 0;
  }
  return puVar3;
}

