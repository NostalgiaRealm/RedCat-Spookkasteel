/*
 * FUN_0056aab0 at 0056aab0
 * undefined FUN_0056aab0(void)
 * Address ranges: 0056aab0-0056aea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0056aab0(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined3 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [4];
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00640778;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffff84;
  local_30 = 0;
  local_40[0] = param_2._3_1_;
  FUN_004040a0(0);
  iVar2 = param_2;
  local_20 = 0;
  local_8._1_3_ = 0;
  uVar3 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  iVar5 = *(int *)(param_2 + 4);
  if ((((iVar5 == 0) || ((*(int *)(param_2 + 8) - iVar5) / 0x18 != 2)) || (*(int *)(iVar5 + 8) != 3)
      ) || (*(int *)(iVar5 + 0x20) != 2)) {
    local_50[0] = param_2._3_1_;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_8._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)(s__args_size______2______args_0__I_006a42d4,
              s_D__Work_RCHorror_AdamSource_Adam_006a4280,0xc6,local_50);
    local_8._0_1_ = 1;
    FUN_004040a0(1);
    uVar3 = local_8._1_3_;
  }
  local_8._1_3_ = uVar3;
  iVar5 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar5 = FUN_004bc480();
  }
  if (*(int *)(iVar5 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,(int)&param_2 + 3);
    local_8._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,local_60);
    local_8._0_1_ = 1;
    FUN_004040a0(1);
  }
  FUN_00453d20(&local_1c);
  local_8._0_1_ = 4;
  if ((local_1c != 0) &&
     (local_2c = FUN_0060a6f2(*(undefined4 *)(local_1c + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor
                              ,&CRCPlayer::RTTI_Type_Descriptor,0), local_2c != 0)) {
    uVar6 = FUN_0045da10(local_70);
    local_8._0_1_ = 6;
    FUN_0040cc00(uVar6,0,0xffffffff);
    local_8._0_1_ = 4;
    FUN_004040a0(1);
    iVar5 = *(int *)(iVar2 + 4);
    if (*(int *)(iVar5 + 0x20) != 2) {
      FUN_00409810(&DAT_006b3f70,&local_15);
      local_8._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0();
      (*pcVar4)(s_IsInt___0069e134,s___Libs_daviscript_Include_Davi_S_00692284,0x42,local_50);
      local_8._0_1_ = 4;
      FUN_004040a0(1);
    }
    local_20 = *(int *)(iVar5 + 0x28);
    if (local_1c == 0) {
      FUN_00409810(&DAT_006b3f70,&local_15);
      local_8._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0();
      (*pcVar4)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,local_50);
      local_8._0_1_ = 4;
      FUN_004040a0(1);
    }
    local_28 = FUN_004f3d30(&DAT_006c8df0);
    for (iVar5 = 0; local_24 = iVar5, iVar5 < local_28; iVar5 = iVar5 + 1) {
      if (local_1c == 0) {
        FUN_00409810(&DAT_006b3f70,&local_15);
        local_8._0_1_ = 9;
        pcVar4 = (code *)FUN_005a07f0();
        (*pcVar4)(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,local_70);
        local_8._0_1_ = 4;
        FUN_004040a0(1);
      }
      local_30 = FUN_004f3d50(&DAT_006c8df0,iVar5);
      if (local_30 != 0) {
        pcVar9 = *(char **)(local_30 + 0xc);
        local_50[0] = param_2._3_1_;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = pcVar9;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(pcVar9,~uVar8 - 1);
        local_8._0_1_ = 10;
        iVar7 = FUN_005affe0(local_50,local_40);
        local_8._0_1_ = 4;
        FUN_004040a0(1);
        iVar2 = local_2c;
        iVar5 = local_24;
        if (iVar7 == 1) {
          if (*(int *)(local_2c + 0x1f0) == 0) {
            FUN_00409810(&DAT_006b3f70,&local_15);
            local_8._0_1_ = 0xb;
            pcVar4 = (code *)FUN_005a07f0();
            (*pcVar4)(s_m_GameProperties____0_0068f970,s_D__Work_RCHorror_AdamSource_Adam_0069888c,
                      0x15b,local_70);
            local_8._0_1_ = 4;
            FUN_004040a0(1);
          }
          iVar5 = FUN_0060a6f2(*(undefined4 *)(iVar2 + 0x1f0),0,
                               &CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                               &CRcPlayerProperties::RTTI_Type_Descriptor,0);
          if (iVar5 != 0) {
            FUN_0043b030(local_30,(float)local_20);
          }
          break;
        }
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (local_1c != 0) {
    FUN_004098d0();
  }
  *param_1 = &PTR_FUN_0064f00c;
  param_1[2] = 0;
  if (local_3c != 0) {
    cVar1 = *(char *)(local_3c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_3c + -1) = cVar1 + -1;
      *unaff_FS_OFFSET = local_10;
      return param_1;
    }
    FUN_005fe5f0(local_3c + -1);
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

