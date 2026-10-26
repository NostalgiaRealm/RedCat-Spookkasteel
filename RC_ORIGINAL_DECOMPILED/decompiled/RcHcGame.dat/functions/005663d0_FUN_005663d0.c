/*
 * FUN_005663d0 at 005663d0
 * undefined FUN_005663d0(void)
 * Address ranges: 005663d0-00566592
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0056654b) */
/* WARNING: Removing unreachable block (ram,0x00566562) */
/* WARNING: Removing unreachable block (ram,0x00566571) */
/* WARNING: Removing unreachable block (ram,0x0056657a) */

void __thiscall FUN_005663d0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  cVar1 = FUN_00566380(param_2);
  if (cVar1 == '\0') {
    puVar8 = *(undefined4 **)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0xc4) - (int)puVar8 >> 2 == 0) {
      iVar2 = *(int *)(param_1 + 0xbc);
      if ((iVar2 == 0) || (uVar5 = (int)puVar8 - iVar2 >> 2, uVar5 < 2)) {
        uVar5 = 1;
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (int)puVar8 - iVar2 >> 2;
      }
      iVar2 = iVar2 + uVar5;
      iVar3 = iVar2;
      if (iVar2 < 0) {
        iVar3 = 0;
      }
      pvVar4 = operator_new(iVar3 * 4);
      pvVar6 = pvVar4;
      for (puVar7 = *(undefined4 **)(param_1 + 0xbc); puVar7 != puVar8; puVar7 = puVar7 + 1) {
        FUN_005f0760(pvVar6,puVar7);
        pvVar6 = (void *)((int)pvVar6 + 4);
      }
      FUN_004a7300(pvVar6,1,&param_2);
      FUN_004dddf0(puVar8,*(undefined4 *)(param_1 + 0xc0),(int)pvVar6 + 4);
      FUN_00587d50(*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc0));
      FUN_005fe5f0(*(undefined4 *)(param_1 + 0xbc));
      iVar3 = *(int *)(param_1 + 0xbc);
      *(void **)(param_1 + 0xc4) = (void *)((int)pvVar4 + iVar2 * 4);
      if (iVar3 == 0) {
        *(void **)(param_1 + 0xbc) = pvVar4;
        *(int *)(param_1 + 0xc0) = (int)pvVar4 + 4;
        return;
      }
      *(void **)(param_1 + 0xbc) = pvVar4;
      *(int *)(param_1 + 0xc0) = (int)pvVar4 + (*(int *)(param_1 + 0xc0) - iVar3 >> 2) * 4 + 4;
      return;
    }
    FUN_004dddf0(puVar8,puVar8,puVar8 + 1);
    FUN_004a7300(*(int *)(param_1 + 0xc0),1 - (*(int *)(param_1 + 0xc0) - (int)puVar8 >> 2),&param_2
                );
    puVar7 = *(undefined4 **)(param_1 + 0xc0);
    if (puVar8 != puVar7) {
      do {
        *puVar8 = param_2;
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar7);
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 4;
      return;
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 4;
  }
  return;
}

