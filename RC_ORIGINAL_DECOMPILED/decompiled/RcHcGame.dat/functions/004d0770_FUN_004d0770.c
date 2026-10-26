/*
 * FUN_004d0770 at 004d0770
 * undefined FUN_004d0770(void)
 * Address ranges: 004d0770-004d099c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d0770(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_90 [4];
  undefined4 *puStack_8c;
  uint uStack_88;
  int local_80;
  undefined1 local_7c [4];
  undefined4 *local_78;
  undefined4 local_6c [12];
  undefined1 local_3c [48];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006312eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar2 = (undefined4 *)FUN_004d0720(local_3c,param_2);
  puVar9 = local_6c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar9 = puVar9 + 1;
  }
  piVar3 = (int *)FUN_004042e0(&local_80);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_78 = *puVar2;
        puVar2 = puVar2 + 1;
        local_78 = local_78 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)local_78 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        local_78 = (undefined4 *)((int)local_78 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_7c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar5 = *piVar3;
  if (*(int *)(iVar5 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_8c;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_8c + uVar6) = 0;
      uStack_88 = uVar6;
    }
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_90);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_005b96a0(*(undefined4 *)(iVar5 + 0x5c),*(undefined4 *)(param_1 + 0x138),local_6c);
  local_4 = 0xffffffff;
  if (local_80 == 0) {
    *(undefined4 *)(param_1 + 0x100) = param_2;
  }
  else {
    iVar5 = *(int *)(local_80 + 0x14) + -1;
    *(int *)(local_80 + 0x14) = iVar5;
    if (iVar5 == 0) {
      FUN_005abfc0(0);
      *(undefined4 *)(param_1 + 0x100) = param_2;
    }
    else {
      *(undefined4 *)(param_1 + 0x100) = param_2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}

