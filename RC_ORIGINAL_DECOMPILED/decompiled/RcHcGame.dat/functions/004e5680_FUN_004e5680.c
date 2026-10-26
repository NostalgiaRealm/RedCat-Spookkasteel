/*
 * FUN_004e5680 at 004e5680
 * undefined FUN_004e5680(void)
 * Address ranges: 004e5680-004e5948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e5680(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 uStack_59;
  int iStack_58;
  int *local_54;
  int *piStack_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00632bf8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_4c[0] = (undefined1)param_1;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_4c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_004f4940(&local_54);
  local_4._0_1_ = 2;
  if (local_54 == (int *)0x0) {
    auStack_3c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  auStack_3c);
    (*pcVar3)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  piStack_50 = (int *)*local_54;
  if (piStack_50 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piStack_50;
  }
  iVar8 = 0;
  iStack_58 = 0;
  while (iVar4 != 0) {
    iVar4 = FUN_0060a6f2(iVar4,0,&CAdamGO::RTTI_Type_Descriptor,&CAdamWorld::RTTI_Type_Descriptor,0)
    ;
    if (iVar4 != 0) {
      iVar8 = iVar8 + 1;
      iStack_58 = iVar8;
      if (1 < iVar8) {
        if (iVar8 == 2) {
          puVar5 = &DAT_0069a568;
        }
        else {
          puVar5 = &DAT_0069a564;
          if (iVar8 != 3) {
            puVar5 = &DAT_0069a560;
          }
        }
        uVar6 = FUN_005ae390(auStack_3c,s_Found__d_s_world_entity_where_th_0069a520,iVar8,puVar5);
        local_4._0_1_ = 4;
        FUN_005035a0(uVar6);
        local_4._0_1_ = 2;
        if (iStack_38 != 0) {
          cVar1 = *(char *)(iStack_38 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)(iStack_38 + -1));
          }
          else {
            *(char *)(iStack_38 + -1) = cVar1 + -1;
          }
        }
        iStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
      }
      FUN_004e5410();
    }
    if (local_54 == (int *)0x0) {
      auStack_2c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x5f,
                                    auStack_2c);
      (*pcVar3)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
      iVar8 = iStack_58;
    }
    if (piStack_50 == (int *)0x0) {
      FUN_00409810(&DAT_006b3f70,&uStack_59);
      local_4._0_1_ = 6;
      pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,0x60,
                                    auStack_1c);
      (*pcVar3)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    piVar2 = (int *)piStack_50[1];
    if (piVar2 == (int *)0x0) break;
    piStack_50 = piVar2;
    iVar4 = *piVar2;
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar4 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

