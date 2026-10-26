/*
 * FUN_005e6cd0 at 005e6cd0
 * undefined FUN_005e6cd0(void)
 * Address ranges: 005e6cd0-005e6e86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005e6d8a) */
/* WARNING: Removing unreachable block (ram,0x005e6e42) */
/* WARNING: Removing unreachable block (ram,0x005e6e4c) */
/* WARNING: Removing unreachable block (ram,0x005e6e50) */
/* WARNING: Removing unreachable block (ram,0x005e6e69) */

void FUN_005e6cd0(void)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 unaff_EBP;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_420;
  char acStack_41c [8];
  undefined1 auStack_414 [1016];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064697b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005e7570((int)&uStack_420 + 2,2);
  iVar5 = (int)(short)((uint)unaff_EBP >> 0x10);
  FUN_005e7570(auStack_414,iVar5);
  uVar3 = 0xffffffff;
  acStack_41c[iVar5] = '\0';
  pcVar6 = acStack_41c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  puVar4 = (undefined1 *)(~uVar3 - 1);
  uStack_420 = 0;
  cVar2 = FUN_00401940(puVar4,1);
  puVar1 = puStack_8;
  puVar10 = (undefined1 *)0x0;
  if (cVar2 != '\0') {
    pcVar6 = acStack_41c;
    pcVar8 = (char *)0x0;
    for (uVar3 = (uint)puVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = (uint)puVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *puVar4 = 0;
    puVar10 = puVar4;
  }
  uStack_14 = 0;
  if (puStack_8 == &stack0xfffffbd4) {
    FUN_0040c9b0(puVar10,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else if ((puVar10 == (undefined1 *)0x0) || (0xfd < DAT_0064a3b3)) {
    cVar2 = FUN_00401940(puVar10,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_0064a3b4;
      puVar9 = *(undefined4 **)(puVar1 + 4);
      for (uVar3 = (uint)puVar10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = (uint)puVar10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      FUN_00404190(puVar10);
    }
  }
  else {
    FUN_004040a0(1);
    *(undefined1 **)(puVar1 + 4) = &DAT_0064a3b4;
    *(undefined1 **)(puVar1 + 8) = puVar10;
    *(undefined4 *)(puVar1 + 0xc) = uStack_420;
    DAT_0064a3b3 = DAT_0064a3b3 + 1;
  }
  ExceptionList = pvStack_1c;
  return;
}

