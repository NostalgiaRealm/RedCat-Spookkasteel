/*
 * FUN_00491c70 at 00491c70
 * undefined FUN_00491c70(void)
 * Address ranges: 00491c70-00491f1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_00491c70(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  char *pcVar9;
  int iStack_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00491930();
  cVar1 = FUN_00553640();
  if (cVar1 != '\0') {
    iVar2 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_2;
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
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) != '\0') {
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar2 = FUN_0055b280();
      }
      if (*(int *)(iVar2 + 0xfc) == 0) {
        local_3c[0] = (undefined1)param_2;
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
        local_4 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,local_3c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(char *)(*(int *)(iVar2 + 0xfc) + 0x8c) == '\0') {
        auStack_2c[0] = (undefined1)param_2;
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
        local_4 = 2;
        pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x14b,auStack_2c);
        (*pcVar3)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar2 = param_2;
      uVar4 = FUN_00492540(param_2);
      piVar5 = (int *)FUN_00551840(&iStack_40,uVar4,iVar2);
      local_4 = 3;
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 != *piVar5) {
        if ((iVar2 != 0) &&
           (iVar6 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar6, iVar6 == 0)) {
          FUN_005abfc0(0);
        }
        *(int *)(param_1 + 0x14) = *piVar5;
        FUN_005844b0();
      }
      local_4 = 0xffffffff;
      if (iStack_40 != 0) {
        FUN_004098d0();
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar7 = *(undefined1 **)(param_2 + 4);
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &DAT_0064a3b4;
        }
        uVar4 = FUN_005ae390(auStack_1c,s_CRcSoundWrapper__LoadSound__Cann_00693a58,puVar7);
        local_4 = 4;
        FUN_005aff00(uVar4);
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
      }
      goto LAB_00491efa;
    }
  }
  FUN_005afe30(s_Soundsystem_not_available_00692c8c);
LAB_00491efa:
  ExceptionList = pvStack_c;
  return *(int *)(param_1 + 0x14) != 0;
}

