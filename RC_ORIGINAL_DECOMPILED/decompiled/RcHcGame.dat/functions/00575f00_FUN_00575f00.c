/*
 * FUN_00575f00 at 00575f00
 * undefined FUN_00575f00(void)
 * Address ranges: 00575f00-00576341
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00575f00(int param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  float10 fVar8;
  char *local_16c;
  char local_155;
  int local_148;
  char local_144 [4];
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  char local_118 [4];
  char *local_114;
  uint local_110;
  int local_108;
  float local_104;
  undefined1 *local_100;
  char local_fc [12];
  char local_f0 [33];
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00641757;
  local_c = ExceptionList;
  local_16c = (char *)0x0;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_155 = '\0';
  ExceptionList = &local_c;
  local_108 = param_1;
  FUN_005b2e20(0,0x3f800000);
  local_134 = 0;
  local_130 = *(undefined4 *)(param_1 + 0xfc);
  local_12c = *(undefined4 *)(param_1 + 0x100);
  local_128 = *(undefined4 *)(param_1 + 0x104);
  do {
    local_148 = 0;
    iVar7 = local_134;
    do {
      fVar8 = (float10)local_148 * (float10)0.7853982;
      if (iVar7 == 0) {
        fcos(fVar8);
        fsin(fVar8);
      }
      else if (iVar7 == 1) {
        fsin(fVar8);
        fcos(fVar8);
      }
      else if (iVar7 == 2) {
        fsin(fVar8);
        fcos(fVar8);
      }
      else {
        local_16c = (char *)0x0;
        local_118[0] = local_155;
        FUN_004040a0();
        uVar3 = 0xffffffff;
        local_16c = (char *)0x1;
        pcVar5 = s_Invalid_case_0068d650;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3 - 1;
        cVar1 = FUN_00401940(uVar3);
        if (cVar1 != '\0') {
          pcVar5 = s_Invalid_case_0068d650;
          pcVar6 = local_114;
          for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          local_114[uVar3] = '\0';
          local_110 = uVar3;
        }
        local_16c = local_118;
        local_4._0_1_ = 1;
        pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a4908,
                                      0x24a);
        (*pcVar2)();
        local_4._0_1_ = 0;
        local_16c = (char *)0x1;
        FUN_004040a0();
        iVar7 = local_134;
      }
      local_100 = (undefined1 *)&local_16c;
      local_16c = param_2;
      if (param_2 != (char *)0x0) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      }
      FUN_00565c30();
      local_16c = local_fc;
      local_4 = CONCAT31(local_4._1_3_,2);
      local_cf = 1;
      local_ce = 1;
      local_cd = 1;
      local_cc = 1;
      local_cb = 1;
      FUN_005b3020(0x45480000);
      local_16c = (char *)0x5760dc;
      FUN_005b3080();
      local_16c = local_f0;
      FUN_005b3020(0x3f800000);
      local_16c = local_fc;
      cVar1 = FUN_00565e10(local_f0);
      if (cVar1 != '\0') {
        local_16c = local_144;
        FUN_005b2fe0();
        local_16c = (char *)0x576127;
        fVar8 = (float10)FUN_005b2fd0();
        if ((local_155 == '\0') || (fVar8 < (float10)local_104)) {
          local_124 = local_68;
          local_120 = local_64;
          local_11c = local_60;
          local_130 = local_54;
          local_104 = (float)fVar8;
          local_12c = local_50;
          local_128 = local_4c;
          local_155 = '\x01';
        }
      }
      local_16c = local_14;
      local_4._0_1_ = 5;
      FUN_00587d50(local_18);
      local_16c = local_18;
      FUN_005fe5f0();
      local_18 = (char *)0x0;
      local_14 = (char *)0x0;
      local_10 = 0;
      local_16c = local_24;
      local_4._0_1_ = 4;
      FUN_00587d50(local_28);
      local_16c = local_28;
      FUN_005fe5f0();
      local_28 = (char *)0x0;
      local_24 = (char *)0x0;
      local_20 = 0;
      local_4._0_1_ = 3;
      local_16c = (char *)0x57622d;
      FUN_0057d310();
      local_4._0_1_ = 0;
      local_16c = (char *)0x576240;
      FUN_005ab4d0();
      local_148 = local_148 + 1;
    } while (local_148 < 8);
    local_134 = iVar7 + 1;
  } while (local_134 < 3);
  if (local_155 == '\0') {
    local_144[0] = local_155;
    uVar3 = 0xffffffff;
    local_140 = 0;
    pcVar5 = s_CAdamEffectBeam__StickToNearestW_006a4ab0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_16c = (char *)(~uVar3 - 1);
    local_13c = 0;
    local_138 = 0;
    FUN_004040f0(s_CAdamEffectBeam__StickToNearestW_006a4ab0);
    local_16c = local_144;
    local_4._0_1_ = 6;
    FUN_005035a0();
    if (local_140 != 0) {
      local_16c = (char *)(local_140 + -1);
      cVar1 = *(char *)(local_140 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *local_16c = cVar1 + -1;
      }
    }
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
  }
  local_16c = (char *)0x5762e6;
  FUN_005b2f20();
  local_16c = (char *)0x5762f7;
  FUN_005b3050();
  local_16c = (char *)0x576302;
  FUN_005b3050();
  local_4 = 0xffffffff;
  if ((param_2 != (char *)0x0) &&
     (iVar7 = *(int *)(param_2 + 0x14), *(int *)(param_2 + 0x14) = iVar7 + -1, iVar7 + -1 == 0)) {
    local_16c = (char *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

