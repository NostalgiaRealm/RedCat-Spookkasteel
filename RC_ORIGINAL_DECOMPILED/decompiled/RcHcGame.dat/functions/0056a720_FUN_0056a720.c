/*
 * FUN_0056a720 at 0056a720
 * undefined FUN_0056a720(void)
 * Address ranges: 0056a720-0056aa8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056a720(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [4];
  undefined1 local_4c [12];
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00640710;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff84;
  local_30 = 0;
  local_8 = 0;
  iVar4 = DAT_006b915c;
  ExceptionList = &local_10;
  puVar2 = &stack0xffffff84;
  if (DAT_006b915c == 0) {
    ExceptionList = &local_10;
    iVar4 = FUN_004bc480();
    puVar2 = local_14;
  }
  local_14 = puVar2;
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_15);
    local_8._0_1_ = 1;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,local_60);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_004040a0(1);
  }
  FUN_00453d20(&local_1c);
  iVar6 = param_2;
  local_8._0_1_ = 2;
  iVar4 = *(int *)(param_2 + 4);
  if ((((iVar4 == 0) || ((*(int *)(param_2 + 8) - iVar4) / 0x18 != 2)) || (*(int *)(iVar4 + 8) != 3)
      ) || (*(int *)(iVar4 + 0x20) != 2)) {
    local_50[0] = param_2._3_1_;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_8._0_1_ = 3;
    pcVar5 = (code *)FUN_005a07f0();
    (*pcVar5)(s__args_size______2______args_0__I_006a42d4,
              s_D__Work_RCHorror_AdamSource_Adam_006a4280,0x97,local_50);
    local_8._0_1_ = 2;
    FUN_004040a0(1);
  }
  if ((local_1c != 0) &&
     (local_28 = FUN_0060a6f2(*(undefined4 *)(local_1c + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor
                              ,&CRCPlayer::RTTI_Type_Descriptor,0), local_28 != 0)) {
    FUN_0045da10(local_70);
    iVar4 = *(int *)(iVar6 + 4);
    local_8._0_1_ = 5;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 5;
    if (*(int *)(iVar4 + 0x20) != 2) {
      FUN_00409810(&DAT_006b3f70,(int)&param_2 + 3);
      local_8._0_1_ = 6;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,0x42,local_50);
      local_8._0_1_ = 5;
      FUN_004040a0(1);
      uVar3 = (undefined1)local_8;
    }
    local_8._0_1_ = uVar3;
    local_30 = *(int *)(iVar4 + 0x28);
    if (local_1c == 0) {
      FUN_00409810(&DAT_006b3f70,(int)&param_2 + 3);
      local_8._0_1_ = 7;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,local_50);
      local_8._0_1_ = 5;
      FUN_004040a0(1);
    }
    local_24 = FUN_004f3d30(&DAT_006c8df0);
    for (iVar4 = 0; local_20 = iVar4, iVar4 < local_24; iVar4 = iVar4 + 1) {
      if (local_1c == 0) {
        FUN_00409810(&DAT_006b3f70,(int)&param_2 + 3);
        local_8._0_1_ = 8;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,local_40);
        local_8._0_1_ = 5;
        FUN_004040a0(1);
      }
      local_2c = FUN_004f3d50(&DAT_006c8df0,iVar4);
      if (local_2c != 0) {
        pcVar10 = *(char **)(local_2c + 0xc);
        local_50[0] = param_2._3_1_;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar11 = pcVar10;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(pcVar10,~uVar9 - 1);
        local_8._0_1_ = 9;
        iVar6 = FUN_005affe0(local_50,local_70);
        local_8._0_1_ = 5;
        FUN_004040a0(1);
        iVar4 = local_20;
        if (iVar6 == 1) {
          piVar7 = (int *)FUN_00431170();
          (**(code **)(*piVar7 + 0x30))();
          puVar8 = (undefined4 *)FUN_004dbe60(local_4c,local_2c);
          local_3c = *puVar8;
          local_38 = puVar8[1];
          local_34 = puVar8[2];
          FUN_004d60f0(&local_3c,(float)local_30);
          break;
        }
      }
    }
    local_8._0_1_ = 2;
    FUN_004040a0(1);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if ((local_1c != 0) &&
     (iVar4 = *(int *)(local_1c + 0x14) + -1, *(int *)(local_1c + 0x14) = iVar4, iVar4 == 0)) {
    FUN_005abfc0(0);
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  ExceptionList = local_10;
  return;
}

