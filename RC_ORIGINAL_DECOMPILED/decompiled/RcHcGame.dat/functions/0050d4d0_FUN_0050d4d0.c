/*
 * FUN_0050d4d0 at 0050d4d0
 * undefined FUN_0050d4d0(void)
 * Address ranges: 0050d4d0-0050d72c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_0050d4d0(int param_1,int *param_2,int param_3,undefined1 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 in_stack_00000030;
  undefined4 auStack_68 [5];
  undefined4 uStack_54;
  char *pcStack_50;
  char *pcStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00636d07;
  pvStack_c = ExceptionList;
  local_20 = 0;
  local_2c = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  local_24 = param_1;
  if (*(int *)(param_1 + 0x28) == 0) {
    puStack_44 = &local_2d;
    puStack_48 = &DAT_006b3f70;
    pcStack_4c = (char *)0x50d521;
    ExceptionList = &pvStack_c;
    FUN_00409810();
    puStack_44 = local_1c;
    local_4._0_1_ = 2;
    puStack_48 = (undefined1 *)0xb9;
    pcStack_4c = s___AdamSource_DaviSortedList_h_00690798;
    pcStack_50 = s_m_Func_0069522c;
    uStack_54 = 0x50d53f;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_54 = 0x50d541;
    (*pcVar2)();
    local_4._0_1_ = 1;
    puStack_44 = (undefined1 *)0x1;
    puStack_48 = (undefined1 *)0x50d554;
    FUN_004040a0();
  }
  if ((*(int *)(param_1 + 0x18) != 0) &&
     ((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) & 0xfffffffcU) != 0)) {
    iVar7 = *(int *)(param_1 + 0x24);
    local_28 = 0;
    puStack_44 = (undefined1 *)0x50d580;
    iVar3 = FUN_0044e4c0();
    iVar3 = iVar3 + -1;
    do {
      iVar8 = (local_28 + iVar3) / 2;
      puStack_44 = (undefined1 *)(*(int *)(param_1 + 0x18) + iVar8 * 4);
      puStack_48 = (undefined1 *)param_3;
      pcStack_4c = (char *)0x50d59f;
      iVar4 = (**(code **)(param_1 + 0x28))();
      if (iVar4 == 1) {
        iVar3 = *(int *)(local_24 + 0x18);
        if (local_2c != *(int *)(iVar3 + iVar8 * 4)) {
          if ((local_2c != 0) &&
             (iVar7 = *(int *)(local_2c + 0x14) + -1, *(int *)(local_2c + 0x14) = iVar7, iVar7 == 0)
             ) {
            puStack_44 = (undefined1 *)0x0;
            puStack_48 = (undefined1 *)0x50d669;
            FUN_005abfc0();
          }
          local_2c = *(int *)(iVar3 + iVar8 * 4);
          puStack_44 = (undefined1 *)0x50d679;
          FUN_005844b0();
        }
        goto LAB_0050d67d;
      }
      if (iVar4 == (-(uint)(iVar7 != 0) & 0xfffffffe) + 2) {
        local_28 = iVar8 + 1;
      }
      else {
        iVar3 = iVar8 + -1;
      }
    } while (local_28 <= iVar3);
  }
  puStack_44 = (undefined1 *)in_stack_00000030;
  puVar9 = (undefined4 *)&param_4;
  puVar10 = auStack_68;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  piVar5 = (int *)FUN_0050cb60(&param_3,param_3);
  local_4._0_1_ = 3;
  if (local_2c != *piVar5) {
    if ((local_2c != 0) &&
       (iVar3 = *(int *)(local_2c + 0x14) + -1, *(int *)(local_2c + 0x14) = iVar3, iVar3 == 0)) {
      puStack_44 = (undefined1 *)0x0;
      puStack_48 = (undefined1 *)0x50d616;
      FUN_005abfc0();
    }
    local_2c = *piVar5;
    puStack_44 = (undefined1 *)0x50d625;
    FUN_005844b0();
  }
  local_4._0_1_ = 1;
  if (param_3 != 0) {
    puStack_44 = (undefined1 *)0x50d63b;
    FUN_004098d0();
  }
LAB_0050d67d:
  if (local_2c == 0) {
    puStack_44 = (undefined1 *)0x0;
    param_4 = (undefined1)param_3;
    puStack_48 = (undefined1 *)0x50d694;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    puStack_44 = (undefined1 *)(~uVar6 - 1);
    puStack_48 = &DAT_006b3f70;
    pcStack_4c = (char *)0x50d6b2;
    FUN_004040f0();
    puStack_44 = &param_4;
    local_4._0_1_ = 4;
    puStack_48 = (undefined1 *)0x9d;
    pcStack_4c = s_D__Work_RCHorror_AdamSource_Adam_0069e8f0;
    pcStack_50 = s_result_IsNotNull___00695234;
    uStack_54 = 0x50d6d0;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_54 = 0x50d6d2;
    (*pcVar2)();
    local_4._0_1_ = 1;
    puStack_44 = (undefined1 *)0x1;
    puStack_48 = (undefined1 *)0x50d6e5;
    FUN_004040a0();
  }
  *param_2 = local_2c;
  if (local_2c != 0) {
    *(int *)(local_2c + 0x14) = *(int *)(local_2c + 0x14) + 1;
  }
  local_20 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_2c != 0) {
    puStack_44 = (undefined1 *)0x50d716;
    FUN_004098d0();
  }
  ExceptionList = pvStack_c;
  return param_2;
}

