/*
 * FUN_004dbea0 at 004dbea0
 * undefined FUN_004dbea0(void)
 * Address ranges: 004dbea0-004dc0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004dbea0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00631fd0;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 0x10c);
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (iVar4 != param_2) {
    ExceptionList = &pvStack_c;
    if ((iVar4 != 0) &&
       (iVar2 = *(int *)(iVar4 + 0x14) + -1, ExceptionList = &pvStack_c,
       *(int *)(iVar4 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x10c) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
  }
  if (*(int *)(param_1 + 0x10c) == 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_00556710();
  if (*(int *)(param_1 + 0x10c) == 0) {
    local_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puStack_18 = *puVar7;
        puVar7 = puVar7 + 1;
        puStack_18 = puStack_18 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puStack_18 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puStack_18 = (undefined4 *)((int)puStack_18 + 1);
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  (**(code **)(**(int **)(param_1 + 0x10c) + 4))(param_1 + 0x198);
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    puStack_8._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  &stack0xffffffe0);
    (*pcVar3)();
    puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
    FUN_004040a0(1);
  }
  FUN_005569b0();
  puStack_8 = (undefined1 *)0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_10;
  return;
}

