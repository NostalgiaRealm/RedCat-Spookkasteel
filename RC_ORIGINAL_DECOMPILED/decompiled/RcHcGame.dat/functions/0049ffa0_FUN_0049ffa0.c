/*
 * FUN_0049ffa0 at 0049ffa0
 * undefined FUN_0049ffa0(void)
 * Address ranges: 0049ffa0-004a01cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004a00e3) */
/* WARNING: Removing unreachable block (ram,0x004a00f4) */
/* WARNING: Removing unreachable block (ram,0x004a0136) */
/* WARNING: Removing unreachable block (ram,0x004a0147) */

int * __thiscall FUN_0049ffa0(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint3 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int local_30;
  int iStack_2c;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ce27;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_00695128,0x52);
  local_30 = 0;
  local_4._1_3_ = 0;
  uVar3 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    local_1c[0] = (undefined1)param_3;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                  local_1c);
    (*pcVar4)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    uVar3 = local_4._1_3_;
  }
  local_4._1_3_ = uVar3;
  iVar5 = FUN_0044e4c0();
  if (iVar5 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    iStack_2c = 0;
    iVar5 = FUN_0044e4c0();
    iVar5 = iVar5 + -1;
    do {
      iVar9 = (iVar5 + iStack_2c) / 2;
      iVar6 = (**(code **)(param_1 + 0x28))(param_3,*(int *)(param_1 + 0x18) + iVar9 * 4);
      if (iVar6 == 1) {
        if (*(int *)(*(int *)(param_1 + 0x18) + iVar9 * 4) != 0) {
          local_30 = *(int *)(*(int *)(param_1 + 0x18) + iVar9 * 4);
          FUN_005844b0();
        }
        goto LAB_004a0162;
      }
      if (iVar6 == (-(uint)(iVar2 != 0) & 0xfffffffe) + 2) {
        iStack_2c = iVar9 + 1;
      }
      else {
        iVar5 = iVar9 + -1;
      }
    } while (iStack_2c <= iVar5);
  }
  piVar7 = (int *)FUN_0049f690(&param_3,param_3);
  if (*piVar7 != 0) {
    local_4._0_1_ = 4;
    local_30 = *piVar7;
    FUN_005844b0();
  }
  local_4._0_1_ = 2;
  if (param_3 != 0) {
    FUN_004098d0();
  }
LAB_004a0162:
  *param_2 = local_30;
  if (local_30 != 0) {
    *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + 1;
  }
  local_4._0_1_ = 1;
  if ((local_30 != 0) &&
     (iVar5 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return param_2;
}

