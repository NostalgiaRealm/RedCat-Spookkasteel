/*
 * FUN_005770a0 at 005770a0
 * undefined FUN_005770a0(void)
 * Address ranges: 005770a0-005773b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005770a0(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined1 local_41;
  int iStack_40;
  undefined4 local_3c;
  undefined4 *local_38;
  uint local_34;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006418a8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x230) != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x23c) != 0) {
      ExceptionList = &local_c;
      if (*(int *)(param_1 + 0x23c) == 0) {
        local_3c = CONCAT31(local_3c._1_3_,local_41);
        ExceptionList = &local_c;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4 = 0;
        pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      &local_3c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      cVar1 = FUN_005530e0();
      if (cVar1 != '\0') {
        ExceptionList = local_c;
        return;
      }
    }
    local_3c = *(undefined4 *)(param_1 + 0x114);
    local_38 = *(undefined4 **)(param_1 + 0x118);
    local_34 = *(uint *)(param_1 + 0x11c);
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xfc) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 1;
      pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399,auStack_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    piVar4 = (int *)FUN_0054ea50(&iStack_40,param_1 + 0x228,&local_3c,1,1,0x3f800000,0,0);
    iVar3 = *(int *)(param_1 + 0x23c);
    local_4 = 2;
    if (iVar3 != *piVar4) {
      if ((iVar3 != 0) &&
         (iVar5 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar5, iVar5 == 0)) {
        FUN_005abfc0(0);
      }
      iVar3 = *piVar4;
      *(int *)(param_1 + 0x23c) = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((iStack_40 != 0) &&
       (iVar3 = *(int *)(iStack_40 + 0x14) + -1, *(int *)(iStack_40 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
    if (*(int *)(param_1 + 0x23c) == 0) {
      local_3c = CONCAT31(local_3c._1_3_,local_41);
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar1 = FUN_00401940(uVar6,1);
      if (cVar1 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        puVar9 = local_38;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined1 *)((int)local_38 + uVar6) = 0;
        local_34 = uVar6;
      }
      local_4 = 3;
      pcVar2 = (code *)FUN_005a07f0(s_m_IdleSoundHandle_IsNotNull___006a4b64,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a4908,0x317,&local_3c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    if (*(int *)(param_1 + 0x23c) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4 = 4;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553610(0x3ecccccd);
  }
  ExceptionList = local_c;
  return;
}

