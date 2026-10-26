/*
 * FUN_0047cf20 at 0047cf20
 * undefined FUN_0047cf20(void)
 * Address ranges: 0047cf20-0047d1eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_0047cf20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628e18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0047d1f0(param_2);
  cVar4 = FUN_00553640();
  if (cVar4 != '\0') {
    iVar5 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar5 = FUN_0055b280();
    }
    if (*(int *)(iVar5 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar10 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar4 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar4 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
      local_4 = 0;
      pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar6)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar5 + 0xfc) + 0x8c) != '\0') {
      iVar5 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar5 = FUN_0055b280();
      }
      if (*(int *)(iVar5 + 0xfc) == 0) {
        local_3c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar4 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4 = 1;
        pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(char *)(*(int *)(iVar5 + 0xfc) + 0x8c) == '\0') {
        auStack_2c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar4 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4 = 2;
        pcVar6 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x14b,auStack_2c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar5 = param_1 + (iVar3 * 3 + 0x96c) * 8;
      piVar7 = (int *)FUN_005514e0(&param_2,iVar5);
      local_4 = 3;
      piVar1 = (int *)(param_1 + 0x4b58 + iVar3 * 0x18);
      iVar2 = *piVar1;
      if (iVar2 != *piVar7) {
        if ((iVar2 != 0) &&
           (iVar8 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar8, iVar8 == 0)) {
          FUN_005abfc0(0);
        }
        *piVar1 = *piVar7;
        FUN_005844b0();
      }
      local_4 = 0xffffffff;
      if (param_2 != 0) {
        FUN_004098d0();
      }
      if (*piVar1 == 0) {
        puVar11 = *(undefined1 **)(iVar5 + 4);
        if (puVar11 == (undefined1 *)0x0) {
          puVar11 = &DAT_0064a3b4;
        }
        uVar9 = FUN_005ae390(auStack_1c,s_CRcCutScene__LoadSound__Cannot_p_00692ca8,puVar11);
        local_4 = 4;
        FUN_005aff00(uVar9);
        if (iStack_18 != 0) {
          cVar4 = *(char *)(iStack_18 + -1);
          if ((cVar4 == '\0') || (cVar4 == -1)) {
            FUN_005fe5f0((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar4 + -1;
          }
        }
      }
      goto LAB_0047d1c1;
    }
  }
  FUN_005afe30(s_Soundsystem_not_available_00692c8c);
LAB_0047d1c1:
  ExceptionList = pvStack_c;
  return *(int *)(param_1 + 0x4b58 + iVar3 * 0x18) != 0;
}

