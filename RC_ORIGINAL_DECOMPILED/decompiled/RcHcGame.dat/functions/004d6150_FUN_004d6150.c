/*
 * FUN_004d6150 at 004d6150
 * undefined FUN_004d6150(void)
 * Address ranges: 004d6150-004d64dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004d6150(int *param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 unaff_retaddr;
  undefined1 auStack_30 [4];
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00631a73;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*param_1 + 100))();
  param_1[0x3e] = iVar2;
  if (iVar2 == 0) {
    puStack_2c = (undefined4 *)CONCAT31(puStack_2c._1_3_,param_3);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar5);
    }
    uStack_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_PlayerInput____0_00699714,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699728,0xe4,&puStack_2c);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = (**(code **)(*param_1 + 0x68))();
  param_1[0x7c] = iVar2;
  if (iVar2 == 0) {
    puStack_2c = (undefined4 *)CONCAT31(puStack_2c._1_3_,param_3);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar5);
    }
    uStack_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699728,0xe8,&puStack_2c);
    (*pcVar3)();
    uStack_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar2 = (**(code **)(*param_1 + 0x6c))(param_1);
  param_1[0x7d] = iVar2;
  if (iVar2 == 0) {
    auStack_30[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_2c;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_00404190(uVar5);
    }
    puStack_8 = (undefined1 *)0x2;
    pcVar3 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,s_D__Work_RCHorror_AdamSource_Adam_00699728,
                                  0xec,auStack_30);
    (*pcVar3)();
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_004040a0(1);
  }
  pvVar4 = operator_new(0x234);
  puStack_8 = (undefined1 *)0x3;
  if (pvVar4 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0050ee00();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  param_1[0x7e] = iVar2;
  if (iVar2 == 0) {
    auStack_30[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    puVar7 = (undefined4 *)(~uVar5 - 1);
    cVar1 = FUN_00401940(puVar7,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_2c;
      for (uVar5 = (uint)puVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = (uint)puVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_2c + (int)puVar7) = 0;
      puStack_28 = puVar7;
    }
    puStack_8 = (undefined1 *)0x4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Communicator____0_006934bc,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699728,0xf0,auStack_30);
    (*pcVar3)();
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_004040a0(1);
  }
  FUN_004d60f0(unaff_retaddr,param_2);
  cVar1 = (**(code **)(*param_1 + 0x5c))();
  *(char *)(param_1 + 0x3f) = cVar1;
  if (cVar1 == '\0') {
    auStack_20[0] = (undefined1)param_2;
    uVar5 = 0xffffffff;
    pcVar10 = s_CAdamPlayer__DoInit___fails_006996f8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    FUN_004040f0(s_CAdamPlayer__DoInit___fails_006996f8,~uVar5 - 1);
    puStack_8 = (undefined1 *)0x5;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_00699728,0xf9,auStack_20);
    if (iStack_1c != 0) {
      cVar1 = *(char *)(iStack_1c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_1c + -1));
      }
      else {
        *(char *)(iStack_1c + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_10;
  return;
}

