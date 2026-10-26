/*
 * FUN_0060be44 at 0060be44
 * undefined FUN_0060be44(void)
 * Address ranges: 0060be44-0060c075
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0060be44(void)

{
  undefined *puVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar1 = PTR_PTR_006b2200;
  iVar10 = 0;
  local_c = (undefined4 *)PTR_PTR_006b2200;
  local_10 = (int *)0x7;
  do {
    sVar2 = _strlen((char *)local_c[7]);
    sVar3 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (int *)((int)local_10 + -1);
    iVar10 = sVar3 + iVar10 + 2 + sVar2;
  } while (local_10 != (int *)0x0);
  local_c = (undefined4 *)(puVar1 + 0x38);
  local_10 = (int *)0xc;
  do {
    sVar2 = _strlen((char *)local_c[0xc]);
    sVar3 = _strlen((char *)*local_c);
    local_c = local_c + 1;
    local_10 = (int *)((int)local_10 + -1);
    iVar10 = sVar3 + iVar10 + 2 + sVar2;
  } while (local_10 != (int *)0x0);
  sVar2 = _strlen(*(char **)(puVar1 + 0x98));
  sVar3 = _strlen(*(char **)(puVar1 + 0x9c));
  sVar4 = _strlen(*(char **)(puVar1 + 0xa0));
  sVar5 = _strlen(*(char **)(puVar1 + 0xa4));
  sVar6 = _strlen(*(char **)(puVar1 + 0xa8));
  piVar7 = _malloc(sVar3 + iVar10 + sVar2 + sVar4 + sVar5 + sVar6 + 0xb1);
  if (piVar7 != (int *)0x0) {
    piVar11 = piVar7 + 0x2b;
    FUN_0060eb70(piVar7,PTR_PTR_006b2200,0xac);
    local_8 = (undefined4 *)(puVar1 + 0x1c);
    local_14 = 7;
    local_10 = piVar7;
    do {
      *local_10 = (int)piVar11;
      pcVar8 = (char *)FUN_00611110(piVar11,local_8[-7]);
      sVar2 = _strlen(pcVar8);
      iVar10 = (int)piVar11 + sVar2 + 1;
      *(int *)(((int)piVar7 - (int)puVar1) + (int)local_8) = iVar10;
      pcVar8 = (char *)FUN_00611110(iVar10,*local_8);
      sVar2 = _strlen(pcVar8);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
      piVar11 = (int *)(iVar10 + 1 + sVar2);
    } while (local_14 != 0);
    local_10 = piVar7 + 0x1a;
    local_14 = 0xc;
    puVar9 = (undefined4 *)(puVar1 + 0x38);
    do {
      *(int **)((int)puVar9 + ((int)piVar7 - (int)puVar1)) = piVar11;
      pcVar8 = (char *)FUN_00611110(piVar11,*puVar9);
      sVar2 = _strlen(pcVar8);
      iVar10 = (int)piVar11 + sVar2 + 1;
      *local_10 = iVar10;
      pcVar8 = (char *)FUN_00611110(iVar10,puVar9[0xc]);
      sVar2 = _strlen(pcVar8);
      puVar9 = puVar9 + 1;
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      piVar11 = (int *)(iVar10 + 1 + sVar2);
    } while (local_14 != 0);
    piVar7[0x26] = (int)piVar11;
    pcVar8 = (char *)FUN_00611110(piVar11,*(undefined4 *)(puVar1 + 0x98));
    sVar2 = _strlen(pcVar8);
    iVar10 = (int)piVar11 + sVar2 + 1;
    piVar7[0x27] = iVar10;
    pcVar8 = (char *)FUN_00611110(iVar10,*(undefined4 *)(puVar1 + 0x9c));
    sVar2 = _strlen(pcVar8);
    iVar10 = iVar10 + 1 + sVar2;
    piVar7[0x28] = iVar10;
    pcVar8 = (char *)FUN_00611110(iVar10,*(undefined4 *)(puVar1 + 0xa0));
    sVar2 = _strlen(pcVar8);
    iVar10 = iVar10 + 1 + sVar2;
    piVar7[0x29] = iVar10;
    pcVar8 = (char *)FUN_00611110(iVar10,*(undefined4 *)(puVar1 + 0xa4));
    sVar2 = _strlen(pcVar8);
    piVar7[0x2a] = sVar2 + 1 + iVar10;
  }
  return piVar7;
}

