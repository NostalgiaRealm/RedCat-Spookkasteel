/*
 * FUN_0044b5d0 at 0044b5d0
 * undefined FUN_0044b5d0(void)
 * Address ranges: 0044b5d0-0044b8ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044b5d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_51;
  undefined4 local_50;
  undefined1 local_4c [4];
  char *pcStack_48;
  undefined1 local_3c [4];
  undefined4 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625767;
  pvStack_c = ExceptionList;
  local_50 = 0;
  local_4c[0] = (undefined1)param_1;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 1;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_51);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x3a4) + 0x18);
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
    pcVar7 = (char *)&DAT_0068fa08;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_0068fa08,~uVar5 - 1);
    goto LAB_0044b78f;
  }
  if (iVar2 == 1) {
    uVar5 = 0xffffffff;
    pcVar7 = s_Normal_0068fa10;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 == '\0') goto LAB_0044b78f;
    pcVar7 = s_Normal_0068fa10;
    pcVar9 = pcStack_48;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
  }
  else {
    if (iVar2 != 2) {
      local_3c[0] = (undefined1)param_1;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = s_unknown_difficulty_level_0068fa20;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_unknown_difficulty_level_0068fa20,~uVar5 - 1);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcWeap_006915fc,
                                    0xb5,local_3c);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
      goto LAB_0044b78f;
    }
    uVar5 = 0xffffffff;
    pcVar7 = (char *)&DAT_0068fa18;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar1 = FUN_00401940(uVar5,1);
    if (cVar1 == '\0') goto LAB_0044b78f;
    pcVar7 = (char *)&DAT_0068fa18;
    pcVar9 = pcStack_48;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
  }
  for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_00404190(uVar5);
LAB_0044b78f:
  local_3c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_0068f9f4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)&DAT_0068f9f4;
    puVar10 = puStack_38;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_4._0_1_ = 4;
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s___Settings_Projectile_006915e4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___Settings_Projectile_006915e4,~uVar5 - 1);
  local_4._0_1_ = 5;
  uVar4 = FUN_0044e370(auStack_1c,local_2c,local_4c);
  local_4._0_1_ = 6;
  FUN_0044e370(param_1,uVar4,local_3c);
  local_50 = 1;
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004040a0(1);
  if (puStack_38 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_38 + -1));
    }
    else {
      *(char *)((int)puStack_38 + -1) = cVar1 + -1;
    }
  }
  puStack_38 = (undefined4 *)0x0;
  uStack_34 = 0;
  uStack_30 = 0;
  if (pcStack_48 != (char *)0x0) {
    cVar1 = pcStack_48[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      pcStack_48[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return param_1;
    }
    FUN_005fe5f0(pcStack_48 + -1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

