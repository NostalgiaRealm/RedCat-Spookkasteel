/*
 * FUN_005f42b0 at 005f42b0
 * undefined FUN_005f42b0(void)
 * Address ranges: 005f42b0-005f4457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f42b0(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00647fb0;
  pvStack_c = ExceptionList;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  ExceptionList = &pvStack_c;
  iVar3 = FUN_005f9320();
  iVar4 = FUN_005ecb70(uVar1);
  uVar8 = iVar3 * iVar4;
  puVar5 = operator_new(uVar8);
  if (puVar5 == (undefined4 *)0x0) {
    auStack_2c[0] = param_2;
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      FUN_00404190(uVar6);
    }
    auStack_1c[0] = param_2;
    uVar6 = 0xffffffff;
    uStack_4 = 0;
    pcVar11 = s_out_of_memory_on_allocation_of_a_006b1494;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(s_out_of_memory_on_allocation_of_a_006b1494,~uVar6 - 1);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    FUN_005ea160(0xbb9,auStack_1c,param_1 + 0xc,auStack_2c);
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_4 = 0xffffffff;
    if (puStack_28 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)puStack_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_28 + -1));
      }
      else {
        *(char *)((int)puStack_28 + -1) = cVar2 + -1;
      }
    }
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  puVar9 = puVar5;
  for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  FUN_005ec3a0(puVar5);
  ExceptionList = pvStack_c;
  return;
}

