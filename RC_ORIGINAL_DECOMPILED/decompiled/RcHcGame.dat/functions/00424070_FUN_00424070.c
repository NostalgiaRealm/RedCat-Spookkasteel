/*
 * FUN_00424070 at 00424070
 * undefined FUN_00424070(void)
 * Address ranges: 00424070-00424414
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00424070(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBP;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 uVar10;
  int *piStack_38;
  int *local_34;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006226d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_34 = param_1;
  (**(code **)(*param_1 + 0xbc))(4);
  if ((int *)param_1[0x3f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3f] + 0x1c))();
  }
  if ((char)param_1[0x5c] != '\0') {
    piVar2 = (int *)FUN_004042e0(&local_34);
    puStack_8 = (undefined1 *)0x0;
    uVar10 = (undefined1)((uint)unaff_EBP >> 0x18);
    if (*piVar2 == 0) {
      auStack_30[0] = uVar10;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      puStack_8._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_30);
      (*pcVar3)();
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_004040a0(1);
    }
    iVar4 = *(int *)(*piVar2 + 0x360);
    puStack_8 = (undefined1 *)0xffffffff;
    if (local_34 != (int *)0x0) {
      FUN_004098d0();
      local_34 = (int *)0x0;
    }
    if (iVar4 == 0) {
      auStack_20[0] = uVar10;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar9 = puStack_1c;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_00404190(uVar5);
      }
      puStack_8 = (undefined1 *)0x2;
      pcVar3 = (code *)FUN_005a07f0(s_player____0_0068d620,
                                    s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0x290,auStack_20);
      (*pcVar3)();
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004040a0(1);
      param_1 = piStack_38;
    }
    if (*(int *)(iVar4 + 0x1f0) == 0) {
      auStack_20[0] = uVar10;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
      puStack_8 = (undefined1 *)0x3;
      pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_20);
      (*pcVar3)();
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004040a0(1);
    }
    iVar4 = *(int *)(iVar4 + 0x1f0);
    if (iVar4 == 0) {
      auStack_20[0] = uVar10;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puStack_1c = *puVar7;
          puVar7 = puVar7 + 1;
          puStack_1c = puStack_1c + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puStack_1c = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puStack_1c = (undefined4 *)((int)puStack_1c + 1);
        }
        FUN_00404190(uVar5);
      }
      puStack_8 = (undefined1 *)0x4;
      pcVar3 = (code *)FUN_005a07f0(s_props____0_0068f964,
                                    s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0x292,auStack_20);
      (*pcVar3)();
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004040a0(1);
      param_1 = piStack_38;
    }
    iVar4 = FUN_0060a6f2(iVar4,0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                         &CRcPlayerProperties::RTTI_Type_Descriptor,0);
    if (iVar4 == 0) {
      auStack_30[0] = uVar10;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar7 = (undefined4 *)&DAT_006b3f70;
        puVar9 = puStack_2c;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        FUN_00404190(uVar5);
      }
      puStack_8 = (undefined1 *)0x5;
      pcVar3 = (code *)FUN_005a07f0(s_properties____0_0068f908,
                                    s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0x294,auStack_30);
      (*pcVar3)();
      puStack_8 = (undefined1 *)0xffffffff;
      if (puStack_2c != (undefined4 *)0x0) {
        cVar1 = *(char *)((int)puStack_2c + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_2c + -1));
        }
        else {
          *(char *)((int)puStack_2c + -1) = cVar1 + -1;
        }
      }
      puStack_2c = (undefined4 *)0x0;
      uStack_28 = 0;
      uStack_24 = 0;
      param_1 = piStack_38;
    }
    FUN_00439e00(1);
    FUN_00439d20(param_1[0x56]);
  }
  ExceptionList = pvStack_10;
  return;
}

