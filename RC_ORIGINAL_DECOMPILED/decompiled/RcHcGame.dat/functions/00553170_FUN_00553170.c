/*
 * FUN_00553170 at 00553170
 * undefined FUN_00553170(void)
 * Address ranges: 00553170-00553607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00553170(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  char *pcVar9;
  float10 fVar10;
  undefined1 local_6d;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 local_5c [16];
  undefined1 auStack_4c [16];
  undefined1 uStack_3c;
  undefined1 uStack_2c;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e2f8;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(*(int *)(iVar2 + 0x3a0) + 0xfc) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_6d);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_5c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  cVar1 = FUN_005530e0();
  if (cVar1 != '\0') {
    uStack_68 = *(undefined4 *)(param_1 + 0x30);
    uStack_6c = *(undefined4 *)(param_1 + 0x2c);
    uStack_64 = *(undefined4 *)(param_1 + 0x34);
    if (*(char *)(param_1 + 0x39) != '\0') {
      if (*(int *)(param_1 + 0x4c) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_6d);
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_0054e750(param_1 + 0x3c,&uStack_6c,&uStack_68,&uStack_64);
    }
    if (*(char *)(param_1 + 0x50) == '\0') {
      if (*(int *)(param_1 + 0x4c) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_6d);
        local_4 = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      uStack_60 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x38);
      FUN_004a72c0();
    }
    else {
      if (*(int *)(param_1 + 0x4c) == 0) {
        FUN_00409810(&DAT_006b3f70,&local_6d);
        local_4 = 2;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      uStack_60 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x38);
      FUN_004a72c0();
    }
    fVar10 = (float10)FUN_0054d030();
    *(float *)(param_1 + 0x20) = (float)fVar10;
    *(undefined4 *)(param_1 + 0x24) = uStack_68;
    *(undefined4 *)(param_1 + 0x28) = uStack_64;
    iVar4 = FUN_00516fb0();
    iVar2 = *(int *)(iVar4 + 100);
    if (iVar2 == -0x80000000) {
      iVar2 = FUN_0060af10();
      *(int *)(iVar4 + 100) = iVar2;
    }
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        local_5c[0] = local_6d;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4 = 4;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      puVar5 = *(undefined1 **)(*(int *)(param_1 + 0x4c) + 0x24);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar6 = FUN_005ae390(auStack_1c,s_Modified_sound_sample__s_to_loga_006a1f7c,puVar5,
                           (double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x28),
                           (double)*(float *)(param_1 + 0x24));
      local_4 = 5;
      FUN_005aff00(uVar6);
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    if (*(int *)(param_1 + 0x4c) == 0) {
      auStack_4c[0] = local_6d;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 6;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_4c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 0x30);
    if (*(char *)(iVar2 + 0x8c) == '\0') {
      uStack_3c = local_6d;
      FUN_004040a0(0);
      iVar4 = -1;
      pcVar9 = &DAT_006b3f70;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4 = 7;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(iVar2 + 0x50) == 0) {
      uStack_2c = local_6d;
      FUN_004040a0(0);
      iVar4 = -1;
      pcVar9 = &DAT_006b3f70;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4 = 8;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x50);
    uVar7 = FUN_00552fd0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x24),unaff_EBX);
    FUN_005c8020(uVar6,uVar7);
  }
  ExceptionList = pvStack_c;
  return;
}

