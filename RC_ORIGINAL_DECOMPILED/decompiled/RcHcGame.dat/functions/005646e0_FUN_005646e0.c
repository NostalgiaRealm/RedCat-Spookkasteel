/*
 * FUN_005646e0 at 005646e0
 * undefined FUN_005646e0(void)
 * Address ranges: 005646e0-00564963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005646e0(undefined1 *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fee0;
  pvStack_c = ExceptionList;
  if ((param_2 < 0) || (ExceptionList = &pvStack_c, 3 < param_2)) {
    local_1c[0] = param_1._0_1_;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_DriverNr_>__0____a_DriverNr_<_4_006a3798,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x864,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  switch(param_2) {
  case 1:
    *param_1 = param_1._0_1_;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = s_Amsterdoom_heeft_geen_enkele_bee_006a3864;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar6 = s_Amsterdoom_heeft_geen_enkele_bee_006a3864;
      pcVar8 = *(char **)(param_1 + 4);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_00404190(uVar3);
    }
    break;
  case 2:
  case 3:
    *param_1 = param_1._0_1_;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = s_Er_zijn_ernstige_problemen_met_d_006a3940;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar6 = s_Er_zijn_ernstige_problemen_met_d_006a3940;
      pcVar8 = *(char **)(param_1 + 4);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_00404190(uVar3);
    }
    break;
  default:
    auStack_2c[0] = param_1._0_1_;
    uVar3 = 0xffffffff;
    iStack_28 = 0;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x868
                                  ,auStack_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
  case 0:
    *param_1 = param_1._0_1_;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = s_De_vorige_keer_dat_het_spel_werd_006a37bc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar6 = s_De_vorige_keer_dat_het_spel_werd_006a37bc;
      pcVar8 = *(char **)(param_1 + 4);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      *(uint *)(param_1 + 8) = uVar3;
      *(undefined1 *)(*(int *)(param_1 + 4) + uVar3) = 0;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

