/*
 * FUN_0050d730 at 0050d730
 * undefined FUN_0050d730(void)
 * Address ranges: 0050d730-0050d97d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_0050d730(int param_1,int *param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_31;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00636d57;
  pvStack_c = ExceptionList;
  local_20 = 0;
  local_30 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  local_28 = param_1;
  local_24 = FUN_005a1d60();
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_31);
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU) != 0)) {
    iVar7 = *(int *)(param_1 + 0x24);
    local_2c = 0;
    iVar3 = FUN_0044e4c0();
    iVar3 = iVar3 + -1;
    do {
      iVar8 = (local_2c + iVar3) / 2;
      iVar4 = (**(code **)(param_1 + 0x28))(local_24,*(int *)(param_1 + 0x18) + iVar8 * 4);
      if (iVar4 == 1) {
        iVar3 = *(int *)(local_28 + 0x18);
        if (local_30 != *(int *)(iVar3 + iVar8 * 4)) {
          if ((local_30 != 0) &&
             (iVar7 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar7, iVar7 == 0)
             ) {
            FUN_005abfc0(0);
          }
          local_30 = *(int *)(iVar3 + iVar8 * 4);
          FUN_005844b0();
        }
        goto LAB_0050d8cf;
      }
      if (iVar4 == (-(uint)(iVar7 != 0) & 0xfffffffe) + 2) {
        local_2c = iVar8 + 1;
      }
      else {
        iVar3 = iVar8 + -1;
      }
    } while (local_2c <= iVar3);
  }
  piVar5 = (int *)FUN_0050d140(&param_3,param_3);
  local_4._0_1_ = 3;
  if (local_30 != *piVar5) {
    if ((local_30 != 0) &&
       (iVar3 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
    local_30 = *piVar5;
    FUN_005844b0();
  }
  local_4._0_1_ = 1;
  if (param_3 != 0) {
    FUN_004098d0();
  }
LAB_0050d8cf:
  if (local_30 == 0) {
    local_1c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 4;
    pcVar2 = (code *)FUN_005a07f0(s_result_IsNotNull___00695234,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e8f0,0xb4,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  *param_2 = local_30;
  if (local_30 != 0) {
    *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + 1;
  }
  local_20 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_30 != 0) {
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return param_2;
}

