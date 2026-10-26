/*
 * FUN_0060bdaf at 0060bdaf
 * undefined FUN_0060bdaf(void)
 * Address ranges: 0060bdaf-0060be43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0060bdaf(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int local_c;
  int local_8;
  
  puVar1 = PTR_PTR_006b2200;
  local_8 = 0;
  local_c = 0xc;
  puVar8 = (undefined4 *)(PTR_PTR_006b2200 + 0x38);
  do {
    sVar2 = _strlen((char *)puVar8[0xc]);
    sVar3 = _strlen((char *)*puVar8);
    puVar8 = puVar8 + 1;
    local_c = local_c + -1;
    local_8 = sVar3 + local_8 + 2 + sVar2;
  } while (local_c != 0);
  puVar4 = _malloc(local_8 + 1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar8 = (undefined4 *)(puVar1 + 0x68);
    iVar6 = 0xc;
    puVar7 = puVar4;
    do {
      *puVar7 = 0x3a;
      puVar7 = puVar7 + 1;
      pcVar5 = (char *)FUN_00611110(puVar7,puVar8[-0xc]);
      sVar2 = _strlen(pcVar5);
      puVar7 = puVar7 + sVar2;
      *puVar7 = 0x3a;
      pcVar5 = (char *)FUN_00611110(puVar7 + 1,*puVar8);
      sVar2 = _strlen(pcVar5);
      puVar7 = puVar7 + 1 + sVar2;
      puVar8 = puVar8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *puVar7 = 0;
  }
  return puVar4;
}

