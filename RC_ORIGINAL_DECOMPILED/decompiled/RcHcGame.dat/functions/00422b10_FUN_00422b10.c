/*
 * FUN_00422b10 at 00422b10
 * undefined FUN_00422b10(void)
 * Address ranges: 00422b10-00422d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00422b10(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  float10 fVar9;
  int iStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00622538;
  pvStack_c = ExceptionList;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  fVar9 = (float10)(**(code **)(*param_1 + 0x6c))();
  if (fVar9 < (float10)(float)param_1[0x54]) {
    puVar7 = (undefined1 *)param_1[0x1c];
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    fVar9 = (float10)(**(code **)(*param_1 + 0x6c))((double)(float)param_1[0x54]);
    FUN_005ae390(auStack_1c,s__s__VisualRange_<_AttackRange_(__0068f868,puVar7,(double)fVar9);
    local_4._0_1_ = 1;
    FUN_005035a0();
    local_4._0_1_ = 0;
    FUN_004040a0();
    fVar9 = (float10)(**(code **)(*param_1 + 0x6c))();
    param_1[0x54] = (int)(float)fVar9;
  }
  param_1[0x5e] = param_1[0x53];
  if (param_1[0x5d] == 0) {
    auStack_1c[0] = (undefined1)param_2;
    uVar5 = 0xffffffff;
    iStack_18 = 0;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Effect_0068e4dc,s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,
                                  0xb5,auStack_1c);
    (*pcVar3)();
    local_4._0_1_ = 0;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  piVar4 = (int *)FUN_004042e0(&iStack_20);
  local_4._0_1_ = 3;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 3;
  if (*piVar4 == 0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    iVar6 = -1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_1c);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  FUN_004f41c0(param_1[0x5d]);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iStack_20 != 0) {
    iVar6 = *(int *)(iStack_20 + 0x14) + -1;
    *(int *)(iStack_20 + 0x14) = iVar6;
    if (iVar6 == 0) {
      FUN_005abfc0();
    }
    iStack_20 = 0;
  }
  (**(code **)(*param_1 + 0x84))();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar6 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

