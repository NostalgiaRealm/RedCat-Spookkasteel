/*
 * FUN_0054f240 at 0054f240
 * undefined FUN_0054f240(void)
 * Address ranges: 0054f240-0054f90e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0054f6aa) */
/* WARNING: Removing unreachable block (ram,0x0054f7ae) */

undefined4 __thiscall
FUN_0054f240(void *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            float param_6,float param_7)

{
  float fVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  undefined1 *local_5c;
  undefined1 *puStack_58;
  void *local_54;
  undefined4 local_50;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063dbf2;
  pvStack_c = ExceptionList;
  local_50 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_54 = param_1;
  FUN_005844b0();
  local_4._0_1_ = 2;
  if (param_3 == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar4)();
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  local_5c = *(undefined1 **)(param_3 + 0x38);
  FUN_004a72c0();
  fVar11 = (float10)FUN_0054d030();
  fVar1 = (float)fVar11;
  cVar3 = FUN_00553640();
  if ((cVar3 != '\0') && (*(char *)((int)param_1 + 0x8c) != '\0')) {
    iVar5 = FUN_0044e4c0();
    if (0x19 < iVar5) {
      FUN_00550330();
    }
    FUN_00516fb0();
    iVar5 = FUN_004337e0();
    if (iVar5 != 0) {
      if (param_3 == 0) {
        FUN_00409810(&DAT_006b3f70);
        local_4._0_1_ = 4;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar4)();
        local_4._0_1_ = 2;
        FUN_004040a0();
      }
      puVar6 = *(undefined1 **)(param_3 + 0x24);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(auStack_1c,s_Played_sound_sample__s_with_loga_006a1ad4,puVar6,
                           (double)fVar1,(double)param_7,(double)param_6);
      local_4._0_1_ = 5;
      FUN_005aff00(uVar7);
      local_4._0_1_ = 2;
      FUN_004040a0();
    }
    if (param_3 == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 6;
      pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0();
    }
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_m_Definition_0069507c,s___AdamSource_AdamSound_h_00692cdc,0x44
                                   );
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0();
    }
    uVar7 = *(undefined4 *)(param_3 + 0x1c);
    if (*(char *)((int)param_1 + 0x8c) == '\0') {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                    0x12e);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0();
    }
    if (*(int *)((int)param_1 + 0x50) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 9;
      pcVar4 = (code *)FUN_005a07f0(s_m_System_006a1a80,s___AdamSource_AdamSound_h_00692cdc,0x12f);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0();
    }
    puVar6 = (undefined1 *)
             FUN_005c7f50(*(undefined4 *)((int)param_1 + 0x50),uVar7,fVar1,param_7,param_6);
    puStack_58 = puVar6;
    if (puVar6 != (undefined1 *)0x0) {
      local_5c = puVar6;
      if (*(int *)((int)param_1 + 0x68) == 0) {
        FUN_00409810(&DAT_006b3f70);
        local_4._0_1_ = 10;
        pcVar4 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,
                                      0xb9);
        (*pcVar4)();
        local_4._0_1_ = 2;
        FUN_004040a0();
      }
      iVar5 = FUN_0044e4c0();
      if (iVar5 != 0) {
        iVar2 = *(int *)((int)param_1 + 100);
        iVar5 = 0;
        iVar8 = FUN_0044e4c0();
        iVar8 = iVar8 + -1;
        do {
          iVar10 = (iVar8 + iVar5) / 2;
          iVar9 = (**(code **)((int)param_1 + 0x68))(&local_5c);
          if (iVar9 == 1) {
            if (*(int *)(*(int *)((int)local_54 + 0x58) + iVar10 * 4) != 0) {
              FUN_005844b0();
            }
            iVar5 = FUN_00425080();
            if (*(int *)(iVar5 + 0x4c) != param_3) {
              FUN_00409810(&DAT_006b3f70);
              local_4._0_1_ = 0xf;
              pcVar4 = (code *)FUN_005a07f0(s_result_>m_SoundDef____a_SoundDef_006a1ab0,
                                            s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x225);
              (*pcVar4)();
              local_4._0_1_ = 2;
              FUN_004040a0();
            }
            goto LAB_0054f828;
          }
          if (iVar9 == (-(uint)(iVar2 != 0) & 0xfffffffe) + 2) {
            iVar5 = iVar10 + 1;
          }
          else {
            iVar8 = iVar10 + -1;
          }
          puVar6 = puStack_58;
        } while (iVar5 <= iVar8);
      }
      local_54 = operator_new(0x54);
      local_4._0_1_ = 0xb;
      if (local_54 == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        puStack_58 = &stack0xffffff80;
        FUN_005844b0();
        iVar5 = FUN_00552e80(puVar6);
      }
      local_4._0_1_ = 2;
      FUN_005844b0();
      if (iVar5 != 0) {
        local_4._0_1_ = 0xc;
        FUN_005844b0();
      }
      local_4._0_1_ = 2;
      FUN_0057d310();
      if (*(char *)((int)param_1 + 0x6c) != '\0') {
        FUN_00409810(&DAT_006b3f70);
        local_4._0_1_ = 0xd;
        pcVar4 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                      s___AdamSource_DaviSortedList_h_00690798,0x49);
        (*pcVar4)();
        local_4._0_1_ = 2;
        FUN_004040a0();
      }
      iVar8 = FUN_00553cc0(&local_5c);
      param_4._0_1_ = (char)iVar5;
      if ((char)param_4 != '\0') {
        FUN_00409810(&DAT_006b3f70);
        local_4._0_1_ = 0xe;
        pcVar4 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,
                                      0x4b);
        (*pcVar4)();
        local_4._0_1_ = 2;
        FUN_004040a0();
      }
      FUN_004fdb90(*(int *)((int)param_1 + 0x58) + iVar8 * 4);
LAB_0054f828:
      iVar5 = FUN_00425080();
      *(float *)(iVar5 + 0x20) = fVar1;
      iVar5 = FUN_00425080();
      *(float *)(iVar5 + 0x28) = param_7;
      iVar5 = FUN_00425080();
      *(float *)(iVar5 + 0x24) = param_6;
      iVar5 = FUN_00425080();
      *(undefined4 *)(iVar5 + 0x2c) = param_5;
      iVar5 = FUN_00425080();
      *(float *)(iVar5 + 0x34) = param_7;
      iVar5 = FUN_00425080();
      *(float *)(iVar5 + 0x30) = param_6;
      iVar5 = FUN_00425080();
      *(undefined1 *)(iVar5 + 0x38) = 1;
      iVar5 = FUN_00425080();
      *(undefined1 *)(iVar5 + 0x39) = 0;
      iVar5 = FUN_00425080();
      *(undefined1 *)(iVar5 + 0x50) = 0;
    }
  }
  FUN_00449760();
  local_50 = 1;
  local_4._0_1_ = 1;
  FUN_0057d310();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0057d310();
  ExceptionList = pvStack_c;
  return param_2;
}

