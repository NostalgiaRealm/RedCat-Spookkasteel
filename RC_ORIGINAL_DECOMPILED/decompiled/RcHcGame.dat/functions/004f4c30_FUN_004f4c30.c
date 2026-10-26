/*
 * FUN_004f4c30 at 004f4c30
 * undefined FUN_004f4c30(void)
 * Address ranges: 004f4c30-004f4e0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004f4c30(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  char *_Str1;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *local_34;
  int *local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634960;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f4940(&local_34);
  local_4 = 0;
  if (local_34 == (int *)0x0) {
    local_2c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                  local_2c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_30 = (int *)*local_34;
  if (local_30 != (int *)0x0) {
    iVar2 = *local_30;
    while (iVar2 != 0) {
      pcVar6 = "";
      if (*(char **)(param_1 + 4) != (char *)0x0) {
        pcVar6 = *(char **)(param_1 + 4);
      }
      _Str1 = *(char **)(iVar2 + 0x70);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar4 = __strcmpi(_Str1,pcVar6);
      if (iVar4 == 0) {
        ExceptionList = pvStack_c;
        return iVar2;
      }
      if (local_34 == (int *)0x0) {
        local_2c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x5f,local_2c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      if (local_30 == (int *)0x0) {
        auStack_1c[0] = (undefined1)param_1;
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar6 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4._0_1_ = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                      0x60,auStack_1c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      local_30 = (int *)local_30[1];
      if (local_30 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return 0;
      }
      iVar2 = *local_30;
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

