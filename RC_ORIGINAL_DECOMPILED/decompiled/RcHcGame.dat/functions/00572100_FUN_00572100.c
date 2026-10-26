/*
 * FUN_00572100 at 00572100
 * undefined FUN_00572100(void)
 * Address ranges: 00572100-00572718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00572100(int param_1)

{
  char cVar1;
  char *extraout_ECX;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  char *pcStack_258;
  char local_241;
  int local_240;
  float local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  char local_220 [4];
  char *local_21c;
  undefined4 local_218;
  undefined4 local_214;
  char local_210 [4];
  char *local_20c;
  float local_200;
  undefined4 local_1fc;
  float local_1f8;
  undefined1 *local_1f4;
  char local_1f0 [12];
  char local_1e4 [12];
  char local_1d8 [12];
  undefined1 local_1cc [37];
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  int local_19c;
  undefined4 local_160;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  char *local_f0;
  char *local_ec;
  undefined4 local_e8;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined4 local_88;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char *local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006411e6;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x189) != '\0')) {
    pcStack_258 = *(char **)(param_1 + 0x1a4);
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x189) = 0;
    *(undefined1 *)(param_1 + 0x1bc) = 1;
    switch(pcStack_258) {
    case (char *)0x0:
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x198);
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x19c);
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1a0);
      break;
    case (char *)0x1:
    case (char *)0x2:
      local_240 = 0xbf800000;
      if (pcStack_258 != (char *)0x1) {
        local_240 = 0x3f800000;
      }
      pcStack_258 = (char *)0x0;
      FUN_005b2e20(0,local_240);
      FUN_004042e0(&pcStack_258);
      FUN_00565c30();
      pcStack_258 = local_1f0;
      local_4 = 1;
      FUN_005b3020(0x45480000);
      local_88 = *(undefined4 *)(param_1 + 0x1b8);
      pcStack_258 = local_1f0;
      local_cf = 1;
      local_ce = 1;
      local_cd = 1;
      local_cc = 1;
      local_cb = 1;
      cVar1 = FUN_00565e10(param_1 + 0x198);
      if (cVar1 == '\0') {
        pcStack_258 = (char *)0x0;
        FUN_004040a0();
        uVar2 = 0xffffffff;
        pcStack_258 = (char *)0x1;
        pcVar3 = s_Couldn_t_find_floor_or_ceiling_006a479c;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (char *)(~uVar2 - 1);
        cVar1 = FUN_00401940(pcVar3);
        if (cVar1 != '\0') {
          pcVar5 = s_Couldn_t_find_floor_or_ceiling_006a479c;
          for (uVar2 = (uint)pcVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)local_20c = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            local_20c = local_20c + 4;
          }
          for (uVar2 = (uint)pcVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *local_20c = *pcVar5;
            pcVar5 = pcVar5 + 1;
            local_20c = local_20c + 1;
          }
          pcStack_258 = pcVar3;
          FUN_00404190();
        }
        pcStack_258 = local_210;
        local_4._0_1_ = 2;
        FUN_005035a0();
        pcStack_258 = (char *)0x1;
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_004040a0();
        *(undefined1 *)(param_1 + 0x1bc) = 1;
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x198);
        *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x19c);
        *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x1a0);
        *(undefined4 *)(param_1 + 0x1a8) = local_238;
        *(undefined4 *)(param_1 + 0x1ac) = local_234;
        local_60 = local_230;
      }
      else {
        *(undefined1 *)(param_1 + 0x1bc) = 1;
        *(undefined4 *)(param_1 + 0x18c) = local_48;
        *(undefined4 *)(param_1 + 400) = local_44;
        *(undefined4 *)(param_1 + 0x194) = local_40;
        *(undefined4 *)(param_1 + 0x1a8) = local_68;
        *(undefined4 *)(param_1 + 0x1ac) = local_64;
      }
      *(undefined4 *)(param_1 + 0x1b0) = local_60;
      pcStack_258 = (char *)0x572344;
      FUN_005b2f20();
      *(undefined1 *)(param_1 + 0x1bc) = 1;
      pcStack_258 = local_14;
      local_4 = 5;
      FUN_00587d50(local_18);
      pcStack_258 = local_18;
      FUN_005fe5f0();
      local_18 = (char *)0x0;
      local_14 = (char *)0x0;
      local_10 = 0;
      local_4._0_1_ = 4;
      pcStack_258 = (char *)0x5723ac;
      FUN_00514430();
      local_4 = CONCAT31(local_4._1_3_,3);
      pcStack_258 = (char *)0x5723c0;
      FUN_0057d310();
      local_4 = 0xffffffff;
      pcStack_258 = (char *)0x5723d7;
      FUN_005ab4d0();
      break;
    case (char *)0x3:
      pcStack_258 = (char *)0x0;
      local_241 = '\0';
      FUN_005b2e20(0,0x3f800000);
      pcVar3 = (char *)(param_1 + 0x198);
      local_240 = 0;
      uVar4 = *(undefined4 *)pcVar3;
      local_234 = *(undefined4 *)(param_1 + 0x19c);
      local_230 = *(undefined4 *)(param_1 + 0x1a0);
      pcStack_258 = pcVar3;
      do {
        local_1f4 = (undefined1 *)&pcStack_258;
        local_1fc = 0;
        fVar7 = (float10)fsin((float10)local_240 * (float10)0.7853982);
        local_200 = (float)fVar7;
        fVar7 = (float10)fcos((float10)local_240 * (float10)0.7853982);
        local_1f8 = (float)fVar7;
        FUN_004042e0(&pcStack_258);
        FUN_00565c30();
        pcStack_258 = local_1e4;
        local_4 = 6;
        FUN_005b3020(0x45480000);
        local_160 = *(undefined4 *)(param_1 + 0x1b8);
        pcStack_258 = local_1e4;
        local_1a7 = 1;
        local_1a6 = 1;
        local_1a5 = 1;
        local_1a4 = 1;
        local_1a3 = 1;
        cVar1 = FUN_00565e10(pcVar3);
        if (cVar1 != '\0') {
          pcStack_258 = local_1d8;
          FUN_005b2fe0();
          pcStack_258 = (char *)0x5724ce;
          fVar7 = (float10)FUN_005b2fd0();
          if ((local_241 == '\0') || (fVar7 < (float10)local_23c)) {
            local_23c = (float)fVar7;
            local_22c = local_140;
            local_228 = local_13c;
            local_224 = local_138;
            local_234 = local_11c;
            local_230 = local_118;
            local_241 = '\x01';
            uVar4 = local_120;
          }
        }
        pcStack_258 = local_ec;
        local_4 = 9;
        FUN_00587d50(local_f0);
        pcStack_258 = local_f0;
        FUN_005fe5f0();
        local_f0 = (char *)0x0;
        local_ec = (char *)0x0;
        local_e8 = 0;
        local_4._0_1_ = 8;
        pcStack_258 = (char *)0x57258d;
        FUN_00514430();
        local_4 = CONCAT31(local_4._1_3_,7);
        if (local_19c != 0) {
          pcStack_258 = (char *)0x5725a5;
          FUN_004098d0();
          local_19c = 0;
        }
        local_4 = 0xffffffff;
        pcStack_258 = (char *)0x5725c7;
        FUN_005ab4d0();
        local_240 = local_240 + 1;
        pcStack_258 = extraout_ECX;
      } while (local_240 < 8);
      *(undefined4 *)(param_1 + 0x1a8) = local_22c;
      *(undefined4 *)(param_1 + 0x1ac) = local_228;
      *(undefined4 *)(param_1 + 0x1b0) = local_224;
      pcStack_258 = (char *)0x5725fa;
      FUN_005b2f20();
      *(undefined1 *)(param_1 + 0x1bc) = 1;
      *(undefined4 *)(param_1 + 0x18c) = uVar4;
      *(undefined4 *)(param_1 + 400) = local_234;
      *(undefined4 *)(param_1 + 0x194) = local_230;
      if (local_241 == '\0') {
        local_220[0] = local_241;
        uVar2 = 0xffffffff;
        pcVar3 = s_Couldn_t_find_any_wall_006a4784;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        pcVar3 = (char *)(~uVar2 - 1);
        pcStack_258 = (char *)0x1;
        local_21c = (char *)0x0;
        local_218 = 0;
        local_214 = 0;
        cVar1 = FUN_00401940(pcVar3);
        if (cVar1 != '\0') {
          pcVar5 = s_Couldn_t_find_any_wall_006a4784;
          pcVar6 = local_21c;
          for (uVar2 = (uint)pcVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar6 = pcVar6 + 4;
          }
          for (uVar2 = (uint)pcVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar6 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          }
          pcStack_258 = pcVar3;
          FUN_00404190();
        }
        pcStack_258 = local_220;
        local_4 = 10;
        FUN_005035a0();
        if (local_21c != (char *)0x0) {
          pcStack_258 = local_21c + -1;
          cVar1 = local_21c[-1];
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *pcStack_258 = cVar1 + -1;
          }
        }
      }
      break;
    default:
      pcStack_258 = (char *)FUN_005ae390(local_1cc,s_Invalid_value_for_m_Positioning___006a475c);
      local_4 = 0;
      FUN_005035a0();
      pcStack_258 = (char *)0x1;
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
  }
  ExceptionList = local_c;
  return;
}

