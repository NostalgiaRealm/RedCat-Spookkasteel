/*
 * FUN_00475fe0 at 00475fe0
 * undefined FUN_00475fe0(void)
 * Address ranges: 00475fe0-004762b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00475fe0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int iStack_40;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628798;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004762c0(param_2);
  cVar2 = FUN_00553640();
  if (cVar2 != '\0') {
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      local_3c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,local_3c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(char *)(*(int *)(iVar3 + 0xfc) + 0x8c) != '\0') {
      iVar3 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar3 = FUN_0055b280();
      }
      if (*(int *)(iVar3 + 0xfc) == 0) {
        local_3c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4 = 1;
        pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,local_3c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      if (*(char *)(*(int *)(iVar3 + 0xfc) + 0x8c) == '\0') {
        auStack_2c[0] = (undefined1)param_2;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4 = 2;
        pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamSound_h_00692cdc,
                                      0x14b,auStack_2c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar3 = param_1 + param_2 * 0x18;
      piVar5 = (int *)FUN_005514e0(&iStack_40,iVar3 + 0x14894);
      iVar1 = *(int *)(iVar3 + 0x1488c);
      local_4 = 3;
      if (iVar1 != *piVar5) {
        if ((iVar1 != 0) &&
           (iVar6 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar6, iVar6 == 0)) {
          FUN_005abfc0(0);
        }
        *(int *)(iVar3 + 0x1488c) = *piVar5;
        FUN_005844b0();
      }
      local_4 = 0xffffffff;
      if (iStack_40 != 0) {
        FUN_004098d0();
      }
      if (*(int *)(iVar3 + 0x1488c) == 0) {
        puVar9 = *(undefined1 **)(iVar3 + 0x14898);
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &DAT_0064a3b4;
        }
        uVar7 = FUN_005ae390(auStack_1c,s_CRcCutScene__LoadSound__Cannot_p_00692ca8,puVar9);
        local_4 = 4;
        FUN_005aff00(uVar7);
        if (iStack_18 != 0) {
          cVar2 = *(char *)(iStack_18 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar2 + -1;
          }
        }
      }
      goto LAB_00476285;
    }
  }
  FUN_005afe30(s_Soundsystem_not_available_00692c8c);
LAB_00476285:
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)(param_2 * 3) >> 8),*(int *)(param_1 + 0x1488c + param_2 * 0x18) != 0
                 );
}

