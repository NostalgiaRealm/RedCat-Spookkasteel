/*
 * FUN_004e4c80 at 004e4c80
 * undefined FUN_004e4c80(void)
 * Address ranges: 004e4c80-004e51e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ec04 slot 3 for .?AVCAdamSpark@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ec04 slot 3 for
   .?AVCAdamSpark@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_004e4c80(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_108;
  undefined1 local_104 [4];
  undefined4 *local_100;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [4];
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [4];
  undefined4 *puStack_b4;
  undefined1 auStack_a8 [12];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632b41;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x160) != '\0') {
    ExceptionList = &local_c;
    piVar4 = (int *)FUN_004042e0(&local_108);
    local_4 = 0;
    if (*piVar4 == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar3 = FUN_00401940(uVar6,1);
      if (cVar3 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_100 = *puVar8;
          puVar8 = puVar8 + 1;
          local_100 = local_100 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)local_100 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          local_100 = (undefined4 *)((int)local_100 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_104);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar10 = *piVar4;
    if (*(int *)(iVar10 + 0x5c) == 0) {
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar3 = FUN_00401940(uVar6,1);
      if (cVar3 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puStack_b4 = *puVar8;
          puVar8 = puVar8 + 1;
          puStack_b4 = puStack_b4 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puStack_b4 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puStack_b4 = (undefined4 *)((int)puStack_b4 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_b8);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uVar1 = *(undefined4 *)(iVar10 + 0x5c);
    local_4 = 0xffffffff;
    uStack_bc = uVar1;
    if ((local_108 != 0.0) &&
       (iVar10 = *(int *)((int)local_108 + 0x14) + -1, *(int *)((int)local_108 + 0x14) = iVar10,
       iVar10 == 0)) {
      FUN_005abfc0(0);
    }
    fStack_f0 = *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x100) +
                (1.0 - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0x118);
    fStack_f4 = *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x100) +
                (1.0 - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0x11c);
    local_108 = *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x100) +
                (1.0 - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0x120);
    fVar2 = *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x100) +
            (1.0 - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0x124);
    FUN_005b2fe0(auStack_c8);
    FUN_005b2f20();
    uStack_ec = 0;
    uStack_e8 = 0xbf800000;
    if (0.0 <= fStack_c4) {
      uStack_e8 = 0x3f800000;
    }
    uStack_e4 = 0;
    iVar10 = FUN_005b2ec0(0x3dcccccd);
    if (iVar10 != 0) {
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0xbf800000;
      if (0.0 <= fStack_c0) {
        uStack_e4 = 0x3f800000;
      }
    }
    FUN_005b2e60(auStack_a8);
    FUN_005b2f20();
    FUN_005b2fa0(*(undefined4 *)(param_1 + 0x17c));
    FUN_005b2fa0(*(float *)(param_1 + 0x17c) * 0.5);
    fStack_9c = fStack_e0 + *(float *)(param_1 + 0x134);
    fStack_88 = fStack_f0;
    fStack_84 = fStack_f4;
    fStack_98 = fStack_dc + *(float *)(param_1 + 0x138);
    fStack_80 = local_108;
    fStack_64 = fStack_f0;
    fStack_94 = fStack_d8 + *(float *)(param_1 + 0x13c);
    fStack_60 = fStack_f4;
    fStack_5c = local_108;
    fStack_78 = *(float *)(param_1 + 0x134) - fStack_e0;
    fStack_40 = fStack_f0;
    uStack_90 = 0x3f800000;
    uStack_8c = 0x3f800000;
    uStack_6c = 0x3f800000;
    fStack_74 = *(float *)(param_1 + 0x138) - fStack_dc;
    uStack_68 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    fStack_3c = fStack_f4;
    fStack_38 = local_108;
    fStack_70 = *(float *)(param_1 + 0x13c) - fStack_d8;
    fStack_54 = *(float *)(param_1 + 0x128) - fStack_d4;
    fStack_50 = *(float *)(param_1 + 300) - fStack_d0;
    fStack_4c = *(float *)(param_1 + 0x130) - fStack_cc;
    fStack_30 = fStack_d4 + *(float *)(param_1 + 0x128);
    fStack_2c = fStack_d0 + *(float *)(param_1 + 300);
    fStack_1c = fStack_f0;
    fStack_18 = fStack_f4;
    fStack_28 = fStack_cc + *(float *)(param_1 + 0x130);
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    fStack_14 = local_108;
    fStack_7c = fVar2;
    fStack_58 = fVar2;
    fStack_34 = fVar2;
    fStack_10 = fVar2;
    if (*(int *)(param_1 + 0x168) == 0) {
      uVar14 = 0x3f800000;
      uVar13 = 1;
      uVar12 = 1;
      uVar11 = 0;
    }
    else {
      uVar14 = 0x3f800000;
      uVar13 = 1;
      uVar12 = 0;
      uVar11 = FUN_0050aa70(0,1,0x3f800000);
    }
    FUN_005b6e90(uVar1,&fStack_9c,4,uVar11,uVar12,uVar13,uVar14);
  }
  ExceptionList = local_c;
  return;
}

