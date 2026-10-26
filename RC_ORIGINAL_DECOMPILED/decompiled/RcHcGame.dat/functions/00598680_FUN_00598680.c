/*
 * FUN_00598680 at 00598680
 * undefined FUN_00598680(void)
 * Address ranges: 00598680-00598c76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00598680(int param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iStack_5c;
  int local_58;
  undefined1 auStack_54 [4];
  int *piStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006441a8;
  pvStack_c = ExceptionList;
  local_4c = *(float *)(param_1 + 0x28) + 10.0;
  local_48 = *(float *)(param_1 + 0x2c) - 10.0;
  local_44 = *(float *)(param_1 + 0x30);
  local_40 = local_4c - 20.0;
  local_3c = local_48 + 20.0;
  ExceptionList = &pvStack_c;
  local_38 = local_44;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00409f20(&local_58);
  local_4 = 0;
  if (*piVar2 == 0) {
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
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar9 = *piVar2;
  uVar4 = FUN_0059b230();
  uVar4 = FUN_0059b220(uVar4);
  uVar4 = FUN_0059b1e0(uVar4);
  uVar4 = FUN_0059b230(uVar4);
  uVar4 = FUN_0059b220(uVar4);
  uVar4 = FUN_0059b1e0(uVar4);
  FUN_005b0940(*(undefined4 *)(param_1 + 0x90),iVar9 + 0x1e0,&local_4c,&local_40,uVar4);
  local_4 = 0xffffffff;
  if ((local_58 != 0) &&
     (iVar9 = *(int *)(local_58 + 0x14) + -1, *(int *)(local_58 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  local_4c = *(float *)(param_1 + 0x28) - 10.0;
  local_48 = *(float *)(param_1 + 0x2c) - 10.0;
  local_44 = *(float *)(param_1 + 0x30);
  local_40 = local_4c + 20.0;
  local_3c = local_48 + 20.0;
  local_38 = local_44;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00409f20(&local_58);
  local_4 = 2;
  if (*piVar2 == 0) {
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
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  iVar9 = *piVar2;
  uVar4 = FUN_0059b230();
  uVar4 = FUN_0059b220(uVar4);
  uVar4 = FUN_0059b1e0(uVar4);
  uVar4 = FUN_0059b230(uVar4);
  uVar4 = FUN_0059b220(uVar4);
  uVar4 = FUN_0059b1e0(uVar4);
  FUN_005b0940(*(undefined4 *)(param_1 + 0x90),iVar9 + 0x1e0,&local_4c,&local_40,uVar4);
  local_4 = 0xffffffff;
  if ((local_58 != 0) &&
     (iVar9 = *(int *)(local_58 + 0x14) + -1, *(int *)(local_58 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  local_4c = *(float *)(param_1 + 0x28);
  local_48 = *(float *)(param_1 + 0x2c);
  local_44 = *(float *)(param_1 + 0x30) - 10.0;
  local_38 = local_44 + 20.0;
  local_40 = local_4c;
  local_3c = local_48;
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar2 = (int *)FUN_00409f20(&local_58);
  local_4 = 4;
  if (*piVar2 == 0) {
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
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0(1);
  }
  iVar9 = *piVar2;
  uVar4 = FUN_0059b230();
  uVar4 = FUN_0059b220(uVar4);
  uVar4 = FUN_0059b1e0(uVar4);
  uVar4 = FUN_0059b230(uVar4);
  uVar4 = FUN_0059b220(uVar4);
  uVar4 = FUN_0059b1e0(uVar4);
  FUN_005b0940(*(undefined4 *)(param_1 + 0x90),iVar9 + 0x1e0,&local_4c,&local_40,uVar4);
  local_4 = 0xffffffff;
  if ((local_58 != 0) &&
     (iVar9 = *(int *)(local_58 + 0x14) + -1, *(int *)(local_58 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  puVar8 = (undefined4 *)(param_1 + 0x34);
  local_58 = 8;
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_005b3050();
      FUN_0059df90(*puVar8);
      puVar5 = (undefined4 *)FUN_00597fb0();
      uStack_34 = *puVar5;
      uStack_30 = puVar5[1];
      uStack_2c = puVar5[2];
      puVar5 = (undefined4 *)FUN_00599450(auStack_54);
      uVar4 = *puVar5;
      local_4 = 6;
      FUN_0059df90(*puVar8);
      cVar1 = FUN_00598f20(uVar4);
      local_4 = 0xffffffff;
      FUN_005630e0();
      if (cVar1 != '\0') {
        if (DAT_006c8de0 == 0) {
          FUN_0055b280();
        }
        piVar2 = (int *)FUN_00409f20(&iStack_5c);
        local_4 = 7;
        piStack_50 = piVar2;
        if (*piVar2 == 0) {
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
            puVar5 = (undefined4 *)&DAT_006b3f70;
            puVar11 = puStack_18;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar11 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            FUN_00404190(uVar6);
            piVar2 = piStack_50;
          }
          local_4._0_1_ = 8;
          pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_1c);
          (*pcVar3)();
          local_4 = CONCAT31(local_4._1_3_,7);
          FUN_004040a0(1);
        }
        iVar9 = *piVar2;
        uVar4 = FUN_0059b230();
        uVar4 = FUN_0059b220(uVar4);
        uVar4 = FUN_0059b1e0(uVar4);
        uVar4 = FUN_0059b230(uVar4);
        uVar4 = FUN_0059b220(uVar4);
        uVar4 = FUN_0059b1e0(uVar4);
        FUN_005b0940(*(undefined4 *)(param_1 + 0x90),iVar9 + 0x1e0,auStack_28,&uStack_34,uVar4);
        local_4 = 0xffffffff;
        if (iStack_5c != 0) {
          iVar9 = *(int *)(iStack_5c + 0x14) + -1;
          *(int *)(iStack_5c + 0x14) = iVar9;
          if (iVar9 == 0) {
            FUN_005abfc0(0);
          }
          iStack_5c = 0;
        }
      }
    }
    puVar8 = puVar8 + 1;
    local_58 = local_58 + -1;
    if (local_58 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

