/*
 * FUN_0058ef90 at 0058ef90
 * undefined FUN_0058ef90(void)
 * Address ranges: 0058ef90-0058fe2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0058ef90(undefined4 *param_1,undefined4 **param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *extraout_ECX;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 *puStack_88;
  int local_74;
  undefined1 local_70 [4];
  undefined1 auStack_6c [4];
  undefined1 local_68 [4];
  undefined1 auStack_64 [4];
  undefined1 local_60 [4];
  undefined1 auStack_5c [4];
  undefined1 local_58 [4];
  undefined1 auStack_54 [4];
  undefined1 local_50 [4];
  undefined1 auStack_4c [4];
  undefined1 local_48 [4];
  undefined1 auStack_44 [4];
  undefined1 local_40 [4];
  undefined1 auStack_3c [4];
  undefined1 local_38 [4];
  undefined1 auStack_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 *local_20;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643552;
  local_c = ExceptionList;
  puStack_88 = param_2;
  ExceptionList = &local_c;
  local_20 = param_1;
  FUN_00501cb0();
  puStack_88 = (undefined4 *)0x3e8;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  *(undefined1 *)((int)param_1 + 0x13d) = 0;
  *(undefined1 *)((int)param_1 + 0x13e) = 1;
  param_1[0x50] = 1;
  FUN_004041b0();
  piVar1 = param_1 + 0x57;
  param_1[0x55] = 0;
  *piVar1 = 0;
  puStack_88 = (undefined4 *)0x58f016;
  FUN_005844b0();
  local_4._0_1_ = 1;
  param_1[0x58] = 0;
  puStack_88 = (undefined4 *)0x58f02b;
  FUN_005844b0();
  puStack_88 = (undefined4 *)0x0;
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x59) = param_2._0_1_;
  FUN_004040a0();
  uVar6 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  puStack_88 = (undefined4 *)(~uVar6 - 1);
  FUN_004040f0(&DAT_006b3f70);
  local_4._0_1_ = 3;
  param_1[0x5e] = 0x3ea3d70a;
  param_1[0x5f] = 0x3ff5c28f;
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  param_1[0x6a] = 0x3f800000;
  *param_1 = &PTR_FUN_0064fe9c;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x61] = 0x437a0000;
  param_1[0x62] = 0x43700000;
  param_1[99] = 0x43340000;
  param_1[100] = 0x437f0000;
  param_1[0x65] = 0x43740000;
  param_1[0x66] = 0x43550000;
  param_1[0x67] = 0x42cc0000;
  param_1[0x68] = 0x42700000;
  local_74 = 0;
  puStack_88 = (undefined4 *)0x58f112;
  FUN_005844b0();
  local_4 = CONCAT31(local_4._1_3_,4);
  puStack_88 = (undefined4 *)0x58f11f;
  iVar3 = FUN_0060a4a0();
  puStack_88 = (undefined4 *)0xa;
  switch(iVar3 % 10) {
  case 0:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f146;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 5;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9d88;
    piVar5 = (int *)FUN_0050d730(local_70);
    local_4._0_1_ = 6;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58f1d1;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58f1dc;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58f1ed;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f1fc;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 7;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9dc8;
    piVar5 = (int *)FUN_0050d730(auStack_6c);
    local_4._0_1_ = 8;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58f289;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58f298;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 1:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f2b8;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 9;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9d18;
    piVar5 = (int *)FUN_0050d730(local_68);
    local_4._0_1_ = 10;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58f343;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58f34e;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58f35f;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f36e;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0xb;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9d50;
    piVar5 = (int *)FUN_0050d730(auStack_64);
    local_4._0_1_ = 0xc;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58f3fb;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58f40a;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 2:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f42a;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0xd;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9ca8;
    piVar5 = (int *)FUN_0050d730(local_60);
    local_4._0_1_ = 0xe;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58f4b5;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58f4c0;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58f4d1;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f4e0;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0xf;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9ce0;
    piVar5 = (int *)FUN_0050d730(auStack_5c);
    local_4._0_1_ = 0x10;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58f56d;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58f57c;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 3:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f59c;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x11;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9c38;
    piVar5 = (int *)FUN_0050d730(local_58);
    local_4._0_1_ = 0x12;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58f627;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58f632;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58f643;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f652;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x13;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9c70;
    piVar5 = (int *)FUN_0050d730(auStack_54);
    local_4._0_1_ = 0x14;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58f6df;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58f6ee;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 4:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f70e;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x15;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9bc0;
    piVar5 = (int *)FUN_0050d730(local_50);
    local_4._0_1_ = 0x16;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58f799;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58f7a4;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58f7b5;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f7c4;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x17;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9c00;
    piVar5 = (int *)FUN_0050d730(auStack_4c);
    local_4._0_1_ = 0x18;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58f851;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58f860;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 5:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f880;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x19;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9b50;
    piVar5 = (int *)FUN_0050d730(local_48);
    local_4._0_1_ = 0x1a;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58f90b;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58f916;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58f927;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f936;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x1b;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9b88;
    piVar5 = (int *)FUN_0050d730(auStack_44);
    local_4._0_1_ = 0x1c;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58f9c3;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58f9d2;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 6:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58f9f2;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x1d;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9ae0;
    piVar5 = (int *)FUN_0050d730(local_40);
    local_4._0_1_ = 0x1e;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58fa7d;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58fa88;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58fa99;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58faa8;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x1f;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9b18;
    piVar5 = (int *)FUN_0050d730(auStack_3c);
    local_4._0_1_ = 0x20;
    if (local_74 != *piVar5) {
      if (local_74 != 0) {
        puStack_88 = (undefined4 *)0x58fb35;
        FUN_004098d0();
      }
      local_74 = *piVar5;
      puStack_88 = (undefined4 *)0x58fb44;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 7:
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58fb64;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x21;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9a70;
    piVar5 = (int *)FUN_0050d730(local_38);
    local_4._0_1_ = 0x22;
    if (*piVar1 != *piVar5) {
      if (*piVar1 != 0) {
        puStack_88 = (undefined4 *)0x58fbef;
        FUN_004098d0();
      }
      *piVar1 = *piVar5;
      puStack_88 = (undefined4 *)0x58fbfa;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58fc0b;
    FUN_0057d310();
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58fc1a;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      puStack_88 = &param_2;
      FUN_00409810(&DAT_006b3f70);
      puStack_88 = local_1c;
      local_4._0_1_ = 0x23;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,4);
      puStack_88 = (undefined4 *)0x1;
      FUN_004040a0();
    }
    puStack_88 = (undefined4 *)&DAT_006b9aa8;
    puStack_88 = (undefined4 *)FUN_0050d730(auStack_34);
    local_4._0_1_ = 0x24;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 8:
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58fcbb;
      FUN_0055b280();
    }
    puVar8 = local_30;
    puStack_88 = (undefined4 *)&DAT_006b99f8;
    FUN_0047d800(puVar8);
    puStack_88 = (undefined4 *)FUN_0050d730(puVar8);
    local_4._0_1_ = 0x25;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58fcf4;
    FUN_0057d310();
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58fd02;
      FUN_0055b280();
    }
    puVar8 = local_2c;
    puStack_88 = (undefined4 *)&DAT_006b9a38;
    FUN_0047d800(puVar8);
    puStack_88 = (undefined4 *)FUN_0050d730(puVar8);
    local_4._0_1_ = 0x26;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  case 9:
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58fd4b;
      FUN_0055b280();
    }
    puVar8 = local_28;
    puStack_88 = (undefined4 *)&DAT_006b9988;
    FUN_0047d800(puVar8);
    puStack_88 = (undefined4 *)FUN_0050d730(puVar8);
    local_4._0_1_ = 0x27;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,4);
    puStack_88 = (undefined4 *)0x58fd84;
    FUN_0057d310();
    if (DAT_006c8de0 == 0) {
      puStack_88 = (undefined4 *)0x58fd92;
      FUN_0055b280();
    }
    puVar8 = local_24;
    puStack_88 = (undefined4 *)&DAT_006b99c0;
    FUN_0047d800(puVar8);
    puStack_88 = (undefined4 *)FUN_0050d730(puVar8);
    local_4._0_1_ = 0x28;
    FUN_00537300();
    local_4 = CONCAT31(local_4._1_3_,4);
    break;
  default:
    goto switchD_0058f130_default;
  }
  puStack_88 = (undefined4 *)0x58fdcd;
  FUN_0057d310();
  puStack_88 = extraout_ECX;
switchD_0058f130_default:
  if ((*piVar1 != 0) && (local_74 != 0)) {
    param_2 = &puStack_88;
    FUN_00449760(&local_74);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00412de0();
    FUN_0050aea0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  puStack_88 = (undefined4 *)0x58fe15;
  FUN_0057d310();
  ExceptionList = local_c;
  return param_1;
}

