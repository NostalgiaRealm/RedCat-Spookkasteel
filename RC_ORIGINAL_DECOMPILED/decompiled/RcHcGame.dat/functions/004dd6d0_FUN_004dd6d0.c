/*
 * FUN_004dd6d0 at 004dd6d0
 * undefined FUN_004dd6d0(void)
 * Address ranges: 004dd6d0-004dd966
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004dd6d0(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *local_44;
  int *piStack_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006321b0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_3c[0] = (undefined1)param_1;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_3c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_004f4940(&local_44);
  local_4._0_1_ = 2;
  if (local_44 == (int *)0x0) {
    auStack_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  auStack_2c);
    (*pcVar3)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  piStack_40 = (int *)*local_44;
  if (piStack_40 != (int *)0x0) {
    iVar4 = *piStack_40;
    while (iVar4 != 0) {
      iVar4 = FUN_0060a6f2(iVar4,0,&CAdamGO::RTTI_Type_Descriptor,&CAdamWorld::RTTI_Type_Descriptor,
                           0);
      if (iVar4 != 0) {
        local_4 = 0xffffffff;
        if ((param_1 != 0) &&
           (iVar5 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar5, iVar5 == 0)) {
          FUN_005abfc0(0);
        }
        ExceptionList = pvStack_c;
        return iVar4;
      }
      if (local_44 == (int *)0x0) {
        auStack_2c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x5f,auStack_2c);
        (*pcVar3)();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
      }
      if (piStack_40 == (int *)0x0) {
        auStack_1c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar7 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4._0_1_ = 5;
        pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x60,auStack_1c);
        (*pcVar3)();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
      }
      piVar2 = (int *)piStack_40[1];
      if (piVar2 == (int *)0x0) break;
      piStack_40 = piVar2;
      iVar4 = *piVar2;
    }
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar4 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return 0;
}

