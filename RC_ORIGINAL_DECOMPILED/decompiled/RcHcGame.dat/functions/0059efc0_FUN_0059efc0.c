/*
 * FUN_0059efc0 at 0059efc0
 * undefined FUN_0059efc0(void)
 * Address ranges: 0059efc0-0059f1d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0059efc0(undefined4 **param_1)

{
  undefined4 *puVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 *puStack_38;
  undefined4 *puStack_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644b60;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (undefined4 **)0x0) {
    puStack_38 = param_1;
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    puStack_38 = (undefined4 *)0x1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    puStack_38 = (undefined4 *)local_1c;
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_SubLevel__0_006a7444);
    (*pcVar3)();
    local_4 = 0xffffffff;
    puStack_38 = (undefined4 *)0x1;
    FUN_004040a0();
  }
  puStack_38 = puVar1;
  cVar2 = FUN_0059fa60();
  if (cVar2 == '\0') {
    param_1 = &puStack_38;
    puStack_38 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[5] = puVar1[5] + 1;
    }
    cVar2 = FUN_0059e2d0();
    if (cVar2 == '\0') {
      puStack_38 = (undefined4 *)0x0;
      local_1c[0] = param_1._0_1_;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      puStack_38 = (undefined4 *)0x1;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar2 = FUN_00401940();
      if (cVar2 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar9 = local_18;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined1 *)((int)local_18 + uVar5) = 0;
        local_14 = uVar5;
      }
      puStack_38 = (undefined4 *)local_1c;
      local_4 = 1;
      pcVar3 = (code *)FUN_005a07f0(s_result_00691bc0);
      (*pcVar3)();
      local_4 = 0xffffffff;
      puStack_38 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_38 = (undefined4 *)0x59f149;
    iVar4 = FUN_0059aed0();
    if (*(float *)(iVar4 + 0x27c) == 0.0) {
      puStack_38 = &param_1;
      fVar10 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x27c) = (float)fVar10;
      puStack_24 = (undefined4 *)(float)fVar10;
    }
    else {
      puStack_24 = *(undefined4 **)(iVar4 + 0x27c);
    }
    puStack_38 = puStack_24;
    FUN_0059aed0();
    FUN_004a72c0();
    FUN_00457240(puVar1);
    FUN_0059d120();
    puStack_38 = puVar1;
    FUN_0059fb90();
  }
  ExceptionList = pvStack_c;
  return;
}

