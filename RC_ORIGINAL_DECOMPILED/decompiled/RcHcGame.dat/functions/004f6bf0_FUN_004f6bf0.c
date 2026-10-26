/*
 * FUN_004f6bf0 at 004f6bf0
 * undefined FUN_004f6bf0(void)
 * Address ranges: 004f6bf0-004f6e5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f6bf0(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  int *piStack_38;
  int *local_34;
  int *local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634c78;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004f4940(&local_34);
  local_4._0_1_ = 1;
  if (local_34 == (int *)0x0) {
    local_2c[0] = (undefined1)param_1;
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
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  local_2c);
    (*pcVar3)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  local_30 = (int *)*local_34;
  if (local_30 != (int *)0x0) {
    iVar4 = *local_30;
    while (iVar4 != 0) {
      iVar4 = FUN_0060a6f2(iVar4,0,&CAdamGO::RTTI_Type_Descriptor,
                           &CAdamPreLoadedActor::RTTI_Type_Descriptor,0);
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_00421000(&piStack_38);
        iVar4 = *piVar5;
        if (piStack_38 != (int *)0x0) {
          iVar2 = piStack_38[5];
          piStack_38[5] = iVar2 + -1;
          if (iVar2 + -1 == 0) {
            FUN_005abfc0(0);
          }
          piStack_38 = (int *)0x0;
        }
        if (iVar4 == param_1) {
          local_4 = 0xffffffff;
          if (param_1 != 0) {
            iVar4 = *(int *)(param_1 + 0x14) + -1;
            *(int *)(param_1 + 0x14) = iVar4;
            if (iVar4 == 0) {
              FUN_005abfc0(0);
            }
          }
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      if (local_34 == (int *)0x0) {
        local_2c[0] = (undefined1)param_1;
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
        pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x5f,local_2c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      if (local_30 == (int *)0x0) {
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
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x60,auStack_1c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
      piVar5 = (int *)local_30[1];
      if (piVar5 == (int *)0x0) break;
      local_30 = piVar5;
      iVar4 = *piVar5;
    }
  }
  local_4 = 0xffffffff;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

