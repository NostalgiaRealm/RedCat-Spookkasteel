/*
 * FUN_00529840 at 00529840
 * undefined FUN_00529840(void)
 * Address ranges: 00529840-00529a31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00529840(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int local_38;
  int local_34;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00639c30;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x277);
  local_4._0_1_ = 1;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      local_4._0_1_ = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar2)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    piVar3 = (int *)FUN_004f20b0(&local_38,param_2 + 0x1c);
    iVar4 = *piVar3;
    if (local_38 != 0) {
      iVar8 = *(int *)(local_38 + 0x14) + -1;
      *(int *)(local_38 + 0x14) = iVar8;
      if (iVar8 == 0) {
        FUN_005abfc0(0);
      }
      local_38 = 0;
    }
    if (iVar4 == 0) {
      auStack_2c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar10 = puStack_28;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)puStack_28 + uVar5) = 0;
        param_1 = local_34;
        uStack_24 = uVar5;
      }
      local_4._0_1_ = 4;
      pcVar2 = (code *)FUN_005a07f0(s__a_SubLevel_IsNull________m_Curr_006a0084,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x279,auStack_2c);
      (*pcVar2)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
  }
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 != param_2) {
    if ((iVar4 != 0) &&
       (iVar8 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar8, iVar8 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x60) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar4 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

