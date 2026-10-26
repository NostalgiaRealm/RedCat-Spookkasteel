/*
 * FUN_004b6220 at 004b6220
 * undefined FUN_004b6220(void)
 * Address ranges: 004b6220-004b7788
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ec64 slot 2 for .?AVCAdamSparkGeneratorPath@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ec64 slot 2 for
   .?AVCAdamSparkGeneratorPath@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004b6220(int param_1,int param_2,int param_3)

{
  float fVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 **ppuVar9;
  int iStack_f8;
  int iStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_d0 [2];
  undefined4 *puStack_c8;
  float fStack_c4;
  int aiStack_c0 [2];
  undefined1 auStack_b8 [4];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ef49;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_3 == -1) {
    ExceptionList = &pvStack_c;
    FUN_00409810(&DAT_006b3f70);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  fVar1 = *(float *)(param_1 + 0x1ac);
  *(float *)(param_1 + 0x1c8) =
       *(float *)(param_1 + 0x1c8) - (float)param_3 * *(float *)(param_1 + 0x1c0) * 0.032;
  if (fVar1 != -NAN) {
    bVar2 = true;
    if (fVar1 != -NAN) {
      iVar4 = *(int *)(param_1 + 0x1b0);
      if (iVar4 == -1) {
        *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
        *(int *)(param_1 + 0x1b0) = (int)fVar1 + param_2;
      }
      else if (iVar4 < param_2) {
        *(undefined4 *)(param_1 + 0x1b4) = 0;
        bVar2 = false;
      }
      else if ((int)fVar1 < 1) {
        *(undefined4 *)(param_1 + 0x1b4) = 0;
      }
      else {
        fStack_f0 = (float)(iVar4 - param_2);
        *(float *)(param_1 + 0x1b4) = (float)(int)fStack_f0 / (float)(int)fVar1;
      }
    }
    *(bool *)(param_1 + 0x1b8) = bVar2;
    local_d0[0] = fVar1;
    if (bVar2) goto LAB_004b7750;
  }
  if (*(int *)(param_1 + 0x1a0) != 1) {
    FUN_005ae390(auStack_2c,s_Unknown_type__d_006970ac);
    local_4 = 1;
    FUN_005035a0();
    local_4 = 0xffffffff;
    FUN_004040a0();
  }
  local_d0[0] = 0.0;
  while (iVar4 = FUN_0060a4a0(), (int)local_d0[0] < iVar4 % 0xb + 10) {
    iVar4 = FUN_0060a4a0();
    fStack_f0 = (float)(iVar4 % 10000);
    fStack_b4 = (float)(int)fStack_f0 * 0.0002 - 1.0;
    iVar4 = FUN_0060a4a0();
    fStack_f0 = (float)(iVar4 % 10000);
    fStack_b0 = (float)(int)fStack_f0 * 0.0002 - 1.0;
    iVar4 = FUN_0060a4a0();
    fStack_f0 = (float)(iVar4 % 10000);
    fStack_ac = (float)(int)fStack_f0 * 0.0002 - 1.0;
    FUN_005b2f20();
    FUN_005b2fa0();
    puVar5 = operator_new(0x184);
    local_4 = 2;
    puStack_c8 = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      uStack_ec = *(undefined4 *)(param_1 + 0xfc);
      uStack_e4 = *(undefined4 *)(param_1 + 0x104);
      uStack_e8 = *(undefined4 *)(param_1 + 0x100);
      FUN_00409810(s_spark_00696fbc);
      local_4._0_1_ = 3;
      FUN_005033a0(auStack_1c);
      local_4._0_1_ = 4;
      FUN_00501cb0();
      local_4._0_1_ = 7;
      FUN_004040a0();
      local_4._0_1_ = 6;
      FUN_004040a0();
      iVar4 = __ftol();
      fStack_c4 = (float)iVar4 * 1.2;
      fStack_f0 = (float)iVar4 * 0.8;
      aiStack_c0[0] = FUN_0060a4a0();
      aiStack_c0[0] = aiStack_c0[0] % 10000;
      __ftol();
      FUN_004041b0();
      puVar5[0x4a] = uStack_ec;
      puVar5[0x4b] = uStack_e8;
      puVar5[0x4c] = uStack_e4;
      puVar5[0x4d] = uStack_ec;
      puVar5[0x4e] = uStack_e8;
      puVar5[0x4f] = uStack_e4;
      puVar5[0x50] = fStack_b4;
      puVar5[0x51] = fStack_b0;
      puVar5[0x52] = fStack_ac;
      puVar5[0x53] = fStack_b4;
      puVar5[0x54] = fStack_b0;
      *(undefined1 *)(puVar5 + 0x56) = 0;
      puVar5[0x55] = fStack_ac;
      DAT_006b9538 = DAT_006b9538 + 1;
      puVar5[0x57] = DAT_006b9538;
      *(undefined1 *)(puVar5 + 0x58) = 0;
      puVar5[0x59] = 0x3f800000;
      FUN_00457240();
      local_4._0_1_ = 8;
      FUN_00409810(&DAT_006b3f70);
      puVar5[0x5f] = 0x3ea3d70a;
      puVar5[0x60] = 0x3ff5c28f;
      *puVar5 = &PTR_FUN_0064ec04;
      DAT_006b953c = DAT_006b953c + 1;
      local_4 = CONCAT31(local_4._1_3_,9);
      puVar5[0x42] = 0x437a0000;
      puVar5[0x43] = 0x43700000;
      puVar5[0x44] = 0x43340000;
      puVar5[0x45] = 0x437f0000;
      puVar5[0x46] = 0x43740000;
      puVar5[0x47] = 0x43550000;
      puVar5[0x48] = 0x42cc0000;
      puVar5[0x49] = 0x42700000;
      uVar6 = FUN_005a1d60();
      FUN_0040cc00(uVar6,0);
    }
    local_4 = 0xffffffff;
    iVar4 = FUN_0060a4a0();
    fStack_c4 = (float)(iVar4 % 10000);
    __ftol();
    FUN_004041b0();
    puVar5[0x59] = 0x3fc00000;
    FUN_00502350();
    piVar7 = (int *)FUN_004042e0();
    local_4 = 10;
    if (*piVar7 == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0xb;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0();
    }
    FUN_004f41c0();
    local_4 = 0xffffffff;
    FUN_0057d310();
    local_d0[0] = (float)((int)local_d0[0] + 1);
  }
  iVar4 = FUN_0060a4a0();
  switch(iVar4 % 0x14) {
  case 0:
    uStack_ec = *(undefined4 *)(param_1 + 0xfc);
    uStack_e8 = *(undefined4 *)(param_1 + 0x100);
    uStack_e4 = *(undefined4 *)(param_1 + 0x104);
    iVar4 = DAT_006c8de0;
    uStack_78 = uStack_ec;
    uStack_74 = uStack_e8;
    uStack_70 = uStack_e4;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0xc;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0054ea00(auStack_9c,&DAT_006ba578,&uStack_78,0,1,0x3f800000,0);
    break;
  case 1:
    uStack_ec = *(undefined4 *)(param_1 + 0xfc);
    uStack_e8 = *(undefined4 *)(param_1 + 0x100);
    uStack_e4 = *(undefined4 *)(param_1 + 0x104);
    iVar4 = DAT_006c8de0;
    uStack_54 = uStack_ec;
    uStack_50 = uStack_e8;
    uStack_4c = uStack_e4;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0xd;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0054ea00(auStack_a4,&DAT_006ba550,&uStack_54,0,1,0x3f800000,0);
    break;
  case 2:
    uStack_ec = *(undefined4 *)(param_1 + 0xfc);
    uStack_e8 = *(undefined4 *)(param_1 + 0x100);
    uStack_e4 = *(undefined4 *)(param_1 + 0x104);
    iVar4 = DAT_006c8de0;
    uStack_60 = uStack_ec;
    uStack_5c = uStack_e8;
    uStack_58 = uStack_e4;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0xe;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0054ea00(auStack_b8,&DAT_006ba528,&uStack_60,0,1,0x3f800000,0);
    break;
  case 3:
    uStack_ec = *(undefined4 *)(param_1 + 0xfc);
    uStack_e8 = *(undefined4 *)(param_1 + 0x100);
    uStack_e4 = *(undefined4 *)(param_1 + 0x104);
    iVar4 = DAT_006c8de0;
    uStack_48 = uStack_ec;
    uStack_44 = uStack_e8;
    uStack_40 = uStack_e4;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0xf;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0054ea00(auStack_a0,&DAT_006ba500,&uStack_48,0,1,0x3f800000,0);
    break;
  case 4:
    uStack_ec = *(undefined4 *)(param_1 + 0xfc);
    uStack_e8 = *(undefined4 *)(param_1 + 0x100);
    uStack_e4 = *(undefined4 *)(param_1 + 0x104);
    iVar4 = DAT_006c8de0;
    uStack_6c = uStack_ec;
    uStack_68 = uStack_e8;
    uStack_64 = uStack_e4;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0x10;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0054ea00(auStack_a8,&DAT_006ba4d0,&uStack_6c,0,1,0x3f800000,0);
    break;
  case 5:
    uStack_ec = *(undefined4 *)(param_1 + 0xfc);
    uStack_e8 = *(undefined4 *)(param_1 + 0x100);
    uStack_e4 = *(undefined4 *)(param_1 + 0x104);
    iVar4 = DAT_006c8de0;
    local_94 = uStack_ec;
    uStack_90 = uStack_e8;
    uStack_8c = uStack_e4;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 0x11;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0054ea00(&iStack_f4,&DAT_006ba4a8,&local_94,0,1,0x3f800000,0);
    break;
  default:
    goto switchD_004b6795_default;
  }
  FUN_0057d310();
switchD_004b6795_default:
  iStack_f4 = FUN_0060a4a0();
  *(undefined4 *)(param_1 + 0x17c) = 0x42c80000;
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x130) = (float)iStack_f4 * 2e-05 + 0.3;
  iStack_f4 = FUN_0060a4a0();
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x180) = (float)iStack_f4 * 0.001;
  iStack_f4 = FUN_0060a4a0();
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x184) = (float)iStack_f4 * 0.002 + 60.0;
  iStack_f4 = FUN_0060a4a0();
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x188) = (float)iStack_f4 * 0.002;
  fVar8 = (float10)FUN_005b2fd0();
  uStack_7c = *(undefined4 *)(param_1 + 0x1cc);
  uStack_84 = *(undefined4 *)(param_1 + 0x1c4);
  uStack_80 = *(undefined4 *)(param_1 + 0x1c8);
  local_d0[0] = (float)fVar8;
  FUN_005b2f20();
  iStack_f4 = FUN_0060a4a0();
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x1d0) = (float)iStack_f4 * 0.0002 - 1.0;
  iStack_f4 = FUN_0060a4a0();
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x1d4) = (float)iStack_f4 * 0.0002 - 1.0;
  iStack_f4 = FUN_0060a4a0();
  iStack_f4 = iStack_f4 % 10000;
  *(float *)(param_1 + 0x1d8) = (float)iStack_f4 * 0.0002 - 1.0;
  FUN_005b2f20();
  fVar8 = (float10)FUN_005b2e40();
  if (fVar8 < (float10)0.0) {
    local_d0[0] = -local_d0[0];
  }
  FUN_005b2fa0();
  iStack_f8 = 0;
  FUN_005844b0();
  local_4 = 0x12;
  iVar4 = FUN_0060a4a0();
  switch(iVar4 % 6) {
  case 0:
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x13;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(&iStack_f4);
    local_4._0_1_ = 0x14;
    if (*(int *)(param_1 + 0x1dc) != *piVar7) {
      if (*(int *)(param_1 + 0x1dc) != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0x1dc) = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0057d310();
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x15;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(auStack_a8);
    local_4._0_1_ = 0x16;
    if (iStack_f8 != *piVar7) {
      if (iStack_f8 != 0) {
        FUN_004098d0();
      }
      iStack_f8 = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    break;
  case 1:
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x17;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(auStack_a0);
    local_4._0_1_ = 0x18;
    if (*(int *)(param_1 + 0x1dc) != *piVar7) {
      if (*(int *)(param_1 + 0x1dc) != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0x1dc) = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0057d310();
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x19;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(auStack_b8);
    local_4._0_1_ = 0x1a;
    if (iStack_f8 != *piVar7) {
      if (iStack_f8 != 0) {
        FUN_004098d0();
      }
      iStack_f8 = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    break;
  case 2:
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x1b;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(auStack_a4);
    local_4._0_1_ = 0x1c;
    if (*(int *)(param_1 + 0x1dc) != *piVar7) {
      if (*(int *)(param_1 + 0x1dc) != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0x1dc) = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0057d310();
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x1d;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(auStack_9c);
    local_4._0_1_ = 0x1e;
    if (iStack_f8 != *piVar7) {
      if (iStack_f8 != 0) {
        FUN_004098d0();
      }
      iStack_f8 = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    break;
  case 3:
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x1f;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(auStack_98);
    local_4._0_1_ = 0x20;
    if (*(int *)(param_1 + 0x1dc) != *piVar7) {
      if (*(int *)(param_1 + 0x1dc) != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0x1dc) = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0057d310();
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x21;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(&fStack_c4);
    local_4._0_1_ = 0x22;
    if (iStack_f8 != *piVar7) {
      if (iStack_f8 != 0) {
        FUN_004098d0();
      }
      iStack_f8 = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    break;
  case 4:
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x23;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(aiStack_c0);
    local_4._0_1_ = 0x24;
    if (*(int *)(param_1 + 0x1dc) != *piVar7) {
      if (*(int *)(param_1 + 0x1dc) != 0) {
        FUN_004098d0();
      }
      *(int *)(param_1 + 0x1dc) = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0057d310();
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x25;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    piVar7 = (int *)FUN_0050d730(&fStack_f0);
    local_4._0_1_ = 0x26;
    if (iStack_f8 != *piVar7) {
      if (iStack_f8 != 0) {
        FUN_004098d0();
      }
      iStack_f8 = *piVar7;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,0x12);
    break;
  case 5:
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xd8) == 0) {
      FUN_00409810(&DAT_006b3f70);
      local_4._0_1_ = 0x27;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x12);
      FUN_004040a0();
    }
    FUN_0050d730(local_d0);
    local_4._0_1_ = 0x28;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_0057d310();
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    ppuVar9 = &puStack_c8;
    FUN_0047d800(ppuVar9);
    FUN_0050d730(ppuVar9);
    local_4._0_1_ = 0x29;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,0x12);
    break;
  default:
    goto switchD_004b6e35_default;
  }
  FUN_0057d310();
switchD_004b6e35_default:
  if ((*(int *)(param_1 + 0x1dc) != 0) && (iStack_f8 != 0)) {
    puStack_c8 = (undefined4 *)&stack0xfffffef0;
    FUN_00449760(&iStack_f8);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    FUN_00412de0();
    FUN_0050aea0();
  }
  puStack_c8 = (undefined4 *)&stack0xfffffef0;
  FUN_00449760(param_1 + 0x1dc);
  FUN_00437280();
  iStack_f4 = *(int *)(param_1 + 0x1a8);
  fStack_f0 = *(float *)(param_1 + 0x1a4);
  iVar4 = FUN_0060a4a0();
  puStack_c8 = (undefined4 *)(iVar4 % 10000);
  __ftol();
  FUN_004041b0();
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_00437230();
    FUN_005871a0(param_2);
  }
  local_4 = 0xffffffff;
  FUN_0057d310();
LAB_004b7750:
  FUN_00591840(param_2);
  FUN_004b77c0();
  ExceptionList = pvStack_c;
  return;
}

