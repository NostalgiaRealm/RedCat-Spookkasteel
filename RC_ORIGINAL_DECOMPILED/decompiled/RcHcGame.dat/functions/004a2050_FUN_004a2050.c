/*
 * FUN_004a2050 at 004a2050
 * undefined FUN_004a2050(void)
 * Address ranges: 004a2050-004a69fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004a2050(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  float10 fVar12;
  undefined1 local_375;
  undefined1 local_374 [16];
  undefined1 local_364 [19];
  undefined1 uStack_351;
  uint uStack_350;
  undefined1 local_34c [4];
  char *pcStack_348;
  undefined1 local_33c [4];
  char *pcStack_338;
  undefined1 uStack_32c;
  undefined1 uStack_32b;
  undefined1 uStack_32a;
  undefined1 auStack_329 [117];
  undefined1 auStack_2b4 [16];
  undefined1 local_2a4 [16];
  undefined1 local_294 [16];
  undefined1 local_284 [124];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined4 *local_1c8;
  undefined1 local_1c4 [16];
  undefined1 local_1b4 [16];
  void *pvStack_1a4;
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [356];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dabe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_1c8 = param_1;
  FUN_005ab4a0();
  param_1[5] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 0x35) = local_375;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x39) = local_375;
  FUN_004040a0(0);
  local_4._0_1_ = 2;
  *(undefined1 *)(param_1 + 0x3d) = local_375;
  FUN_004040a0(0);
  puVar1 = param_1 + 0x41;
  local_4._0_1_ = 3;
  *(undefined1 *)puVar1 = local_375;
  FUN_004040a0(0);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x4c) = local_375;
  FUN_004040a0(0);
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x53) = local_375;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  local_1f8[0] = local_375;
  local_4._0_1_ = 6;
  *param_1 = &PTR_FUN_0064e870;
  FUN_004040a0(0);
  local_4._0_1_ = 7;
  local_1b4[0] = local_375;
  FUN_004040a0(0);
  local_4._0_1_ = 8;
  local_294[0] = local_375;
  FUN_004040a0(0);
  local_1c4[0] = local_375;
  local_4._0_1_ = 9;
  FUN_004040a0(0);
  local_4._0_1_ = 10;
  local_284[0] = local_375;
  FUN_004040a0(0);
  local_4._0_1_ = 0xb;
  local_1d8[0] = local_375;
  FUN_004040a0(0);
  local_2a4[0] = local_375;
  local_4._0_1_ = 0xc;
  FUN_004040a0(0);
  local_4._0_1_ = 0xd;
  local_1e8[0] = local_375;
  FUN_004040a0(0);
  local_4._0_1_ = 0xe;
  local_208[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_0068f9f4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  local_4._0_1_ = 0xf;
  FUN_004040f0(&DAT_0068f9f4,~uVar7 - 1);
  uVar7 = 0xffffffff;
  pcVar9 = s___actors_00695cc4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s___actors_00695cc4,~uVar7 - 1);
  uVar7 = 0xffffffff;
  pcVar9 = &DAT_00695cbc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_00695cbc,~uVar7 - 1);
  FUN_005b1140(param_2,local_1f8,local_1b4,local_294,local_1c4);
  FUN_005b0ff0(param_1 + 0x35,0,0,local_294,0);
  FUN_005b0ff0(puVar1,local_1f8,local_208,local_294,local_1d8);
  FUN_005b0ff0(local_1e8,0,0,local_294,local_2a4);
  local_374[0] = local_375;
  puVar10 = param_1 + 6;
  for (iVar8 = 0x2f; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x10;
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorDefName_00695cac;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorDefName_00695cac,~uVar7 - 1);
  local_4._0_1_ = 0x11;
  iVar8 = FUN_005acbc0(local_364,local_374,local_1e8,puVar1,0);
  local_33c[0] = *(undefined1 *)(iVar8 + 0x14);
  local_4._0_1_ = 0x12;
  FUN_004040a0(0);
  FUN_0040cc00(iVar8 + 0x14,0,0xffffffff);
  local_4._0_1_ = 0x13;
  local_34c[0] = local_33c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_33c,0,0xffffffff);
  local_4._0_1_ = 0x14;
  FUN_0040cc00(local_34c,0,0xffffffff);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_005acca0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  FUN_005b1140(param_1 + 0x3d,0,0,local_284,0);
  FUN_005b0ff0(param_1 + 0x3d,0,0,local_284,local_2a4);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x15;
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorDescription_00695c98;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorDescription_00695c98,~uVar7 - 1);
  local_4._0_1_ = 0x16;
  iVar8 = FUN_005acaf0(local_364,local_34c,s_Enter_a_meaningful_description_h_00695c74,puVar1,0);
  local_4._0_1_ = 0x17;
  local_33c[0] = *(undefined1 *)(iVar8 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar8 + 0x14),0,0xffffffff);
  local_4._0_1_ = 0x18;
  local_374[0] = local_33c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_33c,0,0xffffffff);
  local_4._0_1_ = 0x19;
  FUN_0040cc00(local_374,0,0xffffffff);
  local_4._0_1_ = 0x18;
  FUN_004040a0(1);
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  local_4._0_1_ = 0x16;
  FUN_005acca0();
  local_4._0_1_ = 0x15;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x1a;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorBlocksPlayer_00695c60;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorBlocksPlayer_00695c60,~uVar7 - 1);
  local_4._0_1_ = 0x1b;
  FUN_005ac9d0(local_374,local_364,1,puVar1,0);
  local_4._0_1_ = 0x1c;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 6) = iVar8 != 0;
  local_4._0_1_ = 0x1b;
  FUN_005acca0();
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x1d;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorCanBeShot_00695c50;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorCanBeShot_00695c50,~uVar7 - 1);
  local_4._0_1_ = 0x1e;
  FUN_005ac9d0(local_374,local_364,1,puVar1,0);
  local_4._0_1_ = 0x1f;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0x15) = iVar8 != 0;
  local_4._0_1_ = 0x1e;
  FUN_005acca0();
  local_4._0_1_ = 0x1d;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x20;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorBlocksLOS_00695c40;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorBlocksLOS_00695c40,~uVar7 - 1);
  local_4._0_1_ = 0x21;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0x22;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x55) = iVar8 != 0;
  local_4._0_1_ = 0x21;
  FUN_005acca0();
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x23;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorScale_00695c34;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorScale_00695c34,~uVar7 - 1);
  local_4._0_1_ = 0x24;
  iVar8 = FUN_005a3d10(local_374,local_364,0x3f800000,0,0x41200000,puVar1);
  local_4._0_1_ = 0x25;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[7] = (float)fVar12;
  local_4._0_1_ = 0x24;
  FUN_005a3ce0();
  local_4._0_1_ = 0x23;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x26;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingUseSun_00695c10;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingUseSun_00695c10,~uVar7 - 1);
  local_4._0_1_ = 0x27;
  FUN_005ac9d0(local_374,local_364,1,puVar1,0);
  local_4._0_1_ = 0x28;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 8) = iVar8 != 0;
  local_4._0_1_ = 0x27;
  FUN_005acca0();
  local_4._0_1_ = 0x26;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x29;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingUseAmbient_00695bf8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingUseAmbient_00695bf8,~uVar7 - 1);
  local_4._0_1_ = 0x2a;
  FUN_005ac9d0(local_374,local_364,1,puVar1,0);
  local_4._0_1_ = 0x2b;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x21) = iVar8 != 0;
  local_4._0_1_ = 0x2a;
  FUN_005acca0();
  local_4._0_1_ = 0x29;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x2c;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingOverrideAmbient_00695bd8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingOverrideAmbient_00695bd8,~uVar7 - 1);
  local_4._0_1_ = 0x2d;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0x2e;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x22) = iVar8 != 0;
  local_4._0_1_ = 0x2d;
  FUN_005acca0();
  local_4._0_1_ = 0x2c;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x2f;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingOverrideAmbientRed_00695bb8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingOverrideAmbientRed_00695bb8,~uVar7 - 1);
  local_4._0_1_ = 0x30;
  iVar8 = FUN_005a3d10(local_374,local_364,0x431b0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x31;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[9] = (float)fVar12;
  local_4._0_1_ = 0x30;
  FUN_005a3ce0();
  local_4._0_1_ = 0x2f;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x32;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingOverrideAmbientGree_00695b94;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingOverrideAmbientGree_00695b94,~uVar7 - 1);
  local_4._0_1_ = 0x33;
  iVar8 = FUN_005a3d10(local_374,local_364,0x431b0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x34;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[10] = (float)fVar12;
  local_4._0_1_ = 0x33;
  FUN_005a3ce0();
  local_4._0_1_ = 0x32;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x35;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingOverrideAmbientBlue_00695b70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingOverrideAmbientBlue_00695b70,~uVar7 - 1);
  local_4._0_1_ = 0x36;
  iVar8 = FUN_005a3d10(local_374,local_364,0x431b0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x37;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0xb] = (float)fVar12;
  local_4._0_1_ = 0x36;
  FUN_005a3ce0();
  local_4._0_1_ = 0x35;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x38;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingSunIntensityFactor_00695b50;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingSunIntensityFactor_00695b50,~uVar7 - 1);
  local_4._0_1_ = 0x39;
  iVar8 = FUN_005a3d10(local_374,local_364,0x3f800000,0,0x41200000,puVar1);
  local_4._0_1_ = 0x3a;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0xd] = (float)fVar12;
  local_4._0_1_ = 0x39;
  FUN_005a3ce0();
  local_4._0_1_ = 0x38;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x3b;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingUseDefaultSun_00695b34;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingUseDefaultSun_00695b34,~uVar7 - 1);
  local_4._0_1_ = 0x3c;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0x3d;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0xe) = iVar8 != 0;
  local_4._0_1_ = 0x3c;
  FUN_005acca0();
  local_4._0_1_ = 0x3b;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x3e;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingUseDefaultSunOnly_00695b14;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingUseDefaultSunOnly_00695b14,~uVar7 - 1);
  local_4._0_1_ = 0x3f;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0x40;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x39) = iVar8 != 0;
  local_4._0_1_ = 0x3f;
  FUN_005acca0();
  local_4._0_1_ = 0x3e;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x41;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingDefaultSunRed_00695af8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingDefaultSunRed_00695af8,~uVar7 - 1);
  local_4._0_1_ = 0x42;
  iVar8 = FUN_005a3d10(local_374,local_364,0x431b0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x43;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0xf] = (float)fVar12;
  local_4._0_1_ = 0x42;
  FUN_005a3ce0();
  local_4._0_1_ = 0x41;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x44;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingDefaultSunGreen_00695ad8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingDefaultSunGreen_00695ad8,~uVar7 - 1);
  local_4._0_1_ = 0x45;
  iVar8 = FUN_005a3d10(local_374,local_364,0x431b0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x46;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x10] = (float)fVar12;
  local_4._0_1_ = 0x45;
  FUN_005a3ce0();
  local_4._0_1_ = 0x44;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x47;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingDefaultSunBlue_00695abc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingDefaultSunBlue_00695abc,~uVar7 - 1);
  local_4._0_1_ = 0x48;
  iVar8 = FUN_005a3d10(local_374,local_364,0x431b0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x49;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x11] = (float)fVar12;
  local_4._0_1_ = 0x48;
  FUN_005a3ce0();
  local_4._0_1_ = 0x47;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x4a;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingDefaultSunNormalX_00695a9c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingDefaultSunNormalX_00695a9c,~uVar7 - 1);
  local_4._0_1_ = 0x4b;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xbf800000,0x3f800000,puVar1);
  local_4._0_1_ = 0x4c;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x12] = (float)fVar12;
  local_4._0_1_ = 0x4b;
  FUN_005a3ce0();
  local_4._0_1_ = 0x4a;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x4d;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingDefaultSunNormalY_00695a7c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingDefaultSunNormalY_00695a7c,~uVar7 - 1);
  local_4._0_1_ = 0x4e;
  iVar8 = FUN_005a3d10(local_374,local_364,0x3f800000,0xbf800000,0x3f800000,puVar1);
  local_4._0_1_ = 0x4f;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x13] = (float)fVar12;
  local_4._0_1_ = 0x4e;
  FUN_005a3ce0();
  local_4._0_1_ = 0x4d;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x50;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingDefaultSunNormalZ_00695a5c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingDefaultSunNormalZ_00695a5c,~uVar7 - 1);
  local_4._0_1_ = 0x51;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xbf800000,0x3f800000,puVar1);
  local_4._0_1_ = 0x52;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x14] = (float)fVar12;
  local_4._0_1_ = 0x51;
  FUN_005a3ce0();
  local_4._0_1_ = 0x50;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLighting_00695c24;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLighting_00695c24,~uVar7 - 1);
  local_4._0_1_ = 0x53;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightingMaxNrDynLights_00695a40;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightingMaxNrDynLights_00695a40,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x54);
  iVar4 = FUN_005ac9d0(local_374,local_364,2,puVar1,0);
  iVar8 = *(int *)(iVar4 + 100);
  if (iVar8 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar8;
  }
  param_1[0xc] = iVar8;
  FUN_005acca0();
  local_4._0_1_ = 0x53;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x55;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorDestroyable_00695a2c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorDestroyable_00695a2c,~uVar7 - 1);
  local_4._0_1_ = 0x56;
  FUN_005ac9d0(local_374,local_364,1,puVar1,0);
  local_4._0_1_ = 0x57;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x56) = iVar8 != 0;
  local_4._0_1_ = 0x56;
  FUN_005acca0();
  local_4._0_1_ = 0x55;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x58;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorMinDamage_00695a1c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorMinDamage_00695a1c,~uVar7 - 1);
  local_4._0_1_ = 0x59;
  iVar8 = FUN_005a3d10(local_374,local_364,0x42c80000,0,0x49742400,puVar1);
  local_4._0_1_ = 0x5a;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x16] = (float)fVar12;
  local_4._0_1_ = 0x59;
  FUN_005a3ce0();
  local_4._0_1_ = 0x58;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x5b;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorMaxDamage_00695a0c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorMaxDamage_00695a0c,~uVar7 - 1);
  local_4._0_1_ = 0x5c;
  iVar8 = FUN_005a3d10(local_374,local_364,0x42c80000,0,0x49742400,puVar1);
  local_4._0_1_ = 0x5d;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x17] = (float)fVar12;
  local_4._0_1_ = 0x5c;
  FUN_005a3ce0();
  local_4._0_1_ = 0x5b;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  if ((float)param_1[0x17] < (float)param_1[0x16]) {
    puVar5 = (undefined1 *)param_1[0x42];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(auStack_2b4,s_ActorMinDamage_should_be_<__Acto_006959d0,puVar5);
    local_4._0_1_ = 0x5e;
    FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069541c,0xd9,uVar6);
    local_4._0_1_ = 0xf;
    FUN_004040a0(1);
  }
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x5f;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorPreload_006959c0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorPreload_006959c0,~uVar7 - 1);
  local_4._0_1_ = 0x60;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0x61;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0x18) = iVar8 != 0;
  local_4._0_1_ = 0x60;
  FUN_005acca0();
  local_4._0_1_ = 0x5f;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x62;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorPreloadParticles_006959a8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorPreloadParticles_006959a8,~uVar7 - 1);
  local_4._0_1_ = 99;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 100;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x61) = iVar8 != 0;
  local_4._0_1_ = 99;
  FUN_005acca0();
  local_4._0_1_ = 0x62;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x65;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorNrParticleTypes_00695990;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorNrParticleTypes_00695990,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0x66);
  iVar4 = FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  iVar8 = *(int *)(iVar4 + 100);
  if (iVar8 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar8;
  }
  param_1[0x19] = iVar8;
  FUN_005acca0();
  local_4._0_1_ = 0x65;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x67;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorInitialRotationX_00695978;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorInitialRotationX_00695978,~uVar7 - 1);
  local_4._0_1_ = 0x68;
  iVar8 = FUN_005a3d10(local_374,local_364,0xc2b40000,0xc3b40000,0x43b40000,puVar1);
  local_4._0_1_ = 0x69;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x1a] = (float)fVar12;
  local_4._0_1_ = 0x68;
  FUN_005a3ce0();
  local_4._0_1_ = 0x67;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x6a;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorInitialRotationY_00695960;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorInitialRotationY_00695960,~uVar7 - 1);
  local_4._0_1_ = 0x6b;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xc3b40000,0x43b40000,puVar1);
  local_4._0_1_ = 0x6c;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x1b] = (float)fVar12;
  local_4._0_1_ = 0x6b;
  FUN_005a3ce0();
  local_4._0_1_ = 0x6a;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x6d;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorInitialRotationZ_00695948;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorInitialRotationZ_00695948,~uVar7 - 1);
  local_4._0_1_ = 0x6e;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xc3b40000,0x43b40000,puVar1);
  local_4._0_1_ = 0x6f;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x1c] = (float)fVar12;
  local_4._0_1_ = 0x6e;
  FUN_005a3ce0();
  local_4._0_1_ = 0x6d;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x70;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorRotationSpeedX_00695934;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorRotationSpeedX_00695934,~uVar7 - 1);
  local_4._0_1_ = 0x71;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xc47a0000,0x447a0000,puVar1);
  local_4._0_1_ = 0x72;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x1d] = (float)fVar12;
  local_4._0_1_ = 0x71;
  FUN_005a3ce0();
  local_4._0_1_ = 0x70;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x73;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorRotationSpeedY_00695920;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorRotationSpeedY_00695920,~uVar7 - 1);
  local_4._0_1_ = 0x74;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xc47a0000,0x447a0000,puVar1);
  local_4._0_1_ = 0x75;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x1e] = (float)fVar12;
  local_4._0_1_ = 0x74;
  FUN_005a3ce0();
  local_4._0_1_ = 0x73;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Actor_0068f828;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Actor_0068f828,~uVar7 - 1);
  local_4._0_1_ = 0x76;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorRotationSpeedZ_0069590c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorRotationSpeedZ_0069590c,~uVar7 - 1);
  local_4._0_1_ = 0x77;
  iVar8 = FUN_005a3d10(local_374,local_364,0,0xc47a0000,0x447a0000,puVar1);
  local_4._0_1_ = 0x78;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x1f] = (float)fVar12;
  local_4._0_1_ = 0x77;
  FUN_005a3ce0();
  local_4._0_1_ = 0x76;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  param_1[0x1d] = (float)param_1[0x1d] * 0.017453292;
  param_1[0x1e] = (float)param_1[0x1e] * 0.017453292;
  param_1[0x1f] = (float)param_1[0x1f] * 0.017453292;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x79;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorEndRed_006958e4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorEndRed_006958e4,~uVar7 - 1);
  local_4._0_1_ = 0x7a;
  iVar8 = FUN_005a3d10(local_374,local_364,0x437f0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x7b;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x49] = (float)fVar12;
  local_4._0_1_ = 0x7a;
  FUN_005a3ce0();
  local_4._0_1_ = 0x79;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x7c;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorEndGreen_006958cc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorEndGreen_006958cc,~uVar7 - 1);
  local_4._0_1_ = 0x7d;
  iVar8 = FUN_005a3d10(local_374,local_364,0x42b40000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x7e;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x4a] = (float)fVar12;
  local_4._0_1_ = 0x7d;
  FUN_005a3ce0();
  local_4._0_1_ = 0x7c;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x7f;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorEndBlue_006958b8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorEndBlue_006958b8,~uVar7 - 1);
  local_4._0_1_ = 0x80;
  iVar8 = FUN_005a3d10(local_374,local_364,0x42b40000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x81;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x4b] = (float)fVar12;
  local_4._0_1_ = 0x80;
  FUN_005a3ce0();
  local_4._0_1_ = 0x7f;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x82;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorStartRed_006958a0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorStartRed_006958a0,~uVar7 - 1);
  local_4._0_1_ = 0x83;
  iVar8 = FUN_005a3d10(local_374,local_364,0x42b40000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x84;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x46] = (float)fVar12;
  local_4._0_1_ = 0x83;
  FUN_005a3ce0();
  local_4._0_1_ = 0x82;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x85;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorStartGreen_00695888;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorStartGreen_00695888,~uVar7 - 1);
  local_4._0_1_ = 0x86;
  iVar8 = FUN_005a3d10(local_374,local_364,0x42b40000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x87;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x47] = (float)fVar12;
  local_4._0_1_ = 0x86;
  FUN_005a3ce0();
  local_4._0_1_ = 0x85;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x88;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorStartBlue_00695870;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorStartBlue_00695870,~uVar7 - 1);
  local_4._0_1_ = 0x89;
  iVar8 = FUN_005a3d10(local_374,local_364,0x437f0000,0,0x437f0000,puVar1);
  local_4._0_1_ = 0x8a;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x48] = (float)fVar12;
  local_4._0_1_ = 0x89;
  FUN_005a3ce0();
  local_4._0_1_ = 0x88;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x8b;
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorString_0069585c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorString_0069585c,~uVar7 - 1);
  local_4._0_1_ = 0x8c;
  iVar8 = FUN_005acaf0(local_364,local_34c,s_adhkruxurkhd_0069584c,puVar1,0);
  local_4._0_1_ = 0x8d;
  local_33c[0] = *(undefined1 *)(iVar8 + 0x14);
  FUN_004040a0(0);
  FUN_0040cc00((undefined1 *)(iVar8 + 0x14),0,0xffffffff);
  local_4._0_1_ = 0x8e;
  local_374[0] = local_33c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_33c,0,0xffffffff);
  local_4._0_1_ = 0x8f;
  FUN_0040cc00(local_374,0,0xffffffff);
  local_4._0_1_ = 0x8e;
  FUN_004040a0(1);
  local_4._0_1_ = 0x8d;
  FUN_004040a0(1);
  local_4._0_1_ = 0x8c;
  FUN_005acca0();
  local_4._0_1_ = 0x8b;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x90;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorTimeSeconds_00695834;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorTimeSeconds_00695834,~uVar7 - 1);
  local_4._0_1_ = 0x91;
  iVar8 = FUN_005a3d10(local_374,local_364,0x40000000,0,0x42c80000,puVar1);
  local_4._0_1_ = 0x92;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x50] = (float)fVar12;
  local_4._0_1_ = 0x91;
  FUN_005a3ce0();
  local_4._0_1_ = 0x90;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ActorLightAnimation_006958f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ActorLightAnimation_006958f8,~uVar7 - 1);
  local_4._0_1_ = 0x93;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AnimateColorEnabled_00695820;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_AnimateColorEnabled_00695820,~uVar7 - 1);
  local_4._0_1_ = 0x94;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0x95;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0x51) = iVar8 != 0;
  local_4._0_1_ = 0x94;
  FUN_005acca0();
  local_4._0_1_ = 0x93;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x96;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeDamagePercentage_006957fc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeDamagePercentage_006957fc,~uVar7 - 1);
  local_4._0_1_ = 0x97;
  iVar8 = FUN_005a3d10(local_374,local_364,0x41c80000,0,0x42c80000,puVar1);
  local_4._0_1_ = 0x98;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x2c] = (float)fVar12;
  local_4._0_1_ = 0x97;
  FUN_005a3ce0();
  local_4._0_1_ = 0x96;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x99;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeSizePercentage_006957e4;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeSizePercentage_006957e4,~uVar7 - 1);
  local_4._0_1_ = 0x9a;
  iVar8 = FUN_005a3d10(local_374,local_364,0x41c80000,0,0x42c80000,puVar1);
  local_4._0_1_ = 0x9b;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x2d] = (float)fVar12;
  local_4._0_1_ = 0x9a;
  FUN_005a3ce0();
  local_4._0_1_ = 0x99;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x9c;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeNrExplosions_006957d0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeNrExplosions_006957d0,~uVar7 - 1);
  local_4._0_1_ = 0x9d;
  iVar8 = FUN_005a3d10(local_374,local_364,0x3f800000,0,0x41c80000,puVar1);
  local_4._0_1_ = 0x9e;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x2e] = (float)fVar12;
  local_4._0_1_ = 0x9d;
  FUN_005a3ce0();
  local_4._0_1_ = 0x9c;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0x9f;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeElectric_006957c0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeElectric_006957c0,~uVar7 - 1);
  local_4._0_1_ = 0xa0;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0xa1;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0x2f) = iVar8 != 0;
  local_4._0_1_ = 0xa0;
  FUN_005acca0();
  local_4._0_1_ = 0x9f;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_4._0_1_ = 0xa2;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeSmokeOnly_006957ac;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeSmokeOnly_006957ac,~uVar7 - 1);
  local_4._0_1_ = 0xa3;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0xa4;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0x32) = iVar8 != 0;
  local_4._0_1_ = 0xa3;
  FUN_005acca0();
  local_4._0_1_ = 0xa2;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_4._0_1_ = 0xa5;
  local_374[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeGreen_0069579c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeGreen_0069579c,~uVar7 - 1);
  local_4._0_1_ = 0xa6;
  FUN_005ac9d0(local_374,local_364,0,puVar1,0);
  local_4._0_1_ = 0xa7;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0xc9) = iVar8 != 0;
  local_4._0_1_ = 0xa6;
  FUN_005acca0();
  local_4._0_1_ = 0xa5;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  local_364[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Explosion_00695814,~uVar7 - 1);
  local_374[0] = local_375;
  local_4._0_1_ = 0xa8;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeParticleFallSoundType_0069577c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_ExplodeParticleFallSoundType_0069577c,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,0xa9);
  iVar4 = FUN_005ac9d0(local_374,local_364,0,param_1 + 0x41,0);
  iVar8 = *(int *)(iVar4 + 100);
  if (iVar8 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar8;
  }
  param_1[0x30] = iVar8;
  FUN_005acca0();
  local_4._0_1_ = 0xa8;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  if (((int)param_1[0x30] < 0) || (3 < (int)param_1[0x30])) {
    puVar5 = (undefined1 *)param_1[0x42];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(auStack_2b4,s_ExplodeParticleFallSoundType_out_00695738,puVar5,0,3);
    local_4._0_1_ = 0xaa;
    FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x106,uVar6);
    local_4._0_1_ = 0xf;
    FUN_004040a0(1);
    param_1[0x30] = 0;
  }
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_Explosion_00695814;
    pcVar11 = pcStack_338;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xab);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeParticleFallSoundDelaySec_00695710;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_ExplodeParticleFallSoundDelaySec_00695710;
    pcVar11 = pcStack_348;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4._0_1_ = 0xac;
  iVar8 = FUN_005a3d10(local_34c,local_33c,0x3f000000,0,0x41c80000,param_1 + 0x41);
  local_4._0_1_ = 0xad;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x31] = (float)fVar12;
  local_4._0_1_ = 0xac;
  FUN_005a3ce0();
  local_4._0_1_ = 0xab;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(1);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_Explosion_00695814;
    pcVar11 = pcStack_348;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xae);
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeExtraSoundType_006956f8;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_ExplodeExtraSoundType_006956f8;
    pcVar11 = pcStack_338;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xaf);
  iVar4 = FUN_005ac9d0(local_33c,local_34c,0,param_1 + 0x41,0);
  iVar8 = *(int *)(iVar4 + 100);
  if (iVar8 == -0x80000000) {
    puVar5 = *(undefined1 **)(iVar4 + 0x18);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar8 = FUN_0060af10(puVar5);
    *(int *)(iVar4 + 100) = iVar8;
  }
  param_1[0x33] = iVar8;
  FUN_005acca0();
  local_4._0_1_ = 0xae;
  FUN_004040a0(1);
  local_4._0_1_ = 0xf;
  FUN_004040a0(1);
  if (((int)param_1[0x33] < 0) || (3 < (int)param_1[0x33])) {
    puVar5 = (undefined1 *)param_1[0x42];
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(auStack_2b4,s_ExplodeExtraSoundType_out_of_ran_006956bc,puVar5,0,3);
    local_4._0_1_ = 0xb0;
    FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x115,uVar6);
    local_4._0_1_ = 0xf;
    FUN_004040a0(1);
    param_1[0x33] = 0;
  }
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_Explosion_00695814;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_Explosion_00695814;
    pcVar11 = pcStack_348;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xb1);
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ExplodeExtraSoundDelaySeconds_0069569c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_ExplodeExtraSoundDelaySeconds_0069569c;
    pcVar11 = pcStack_338;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4._0_1_ = 0xb2;
  iVar8 = FUN_005a3d10(local_33c,local_34c,0x3f000000,0,0x41c80000,param_1 + 0x41);
  local_4._0_1_ = 0xb3;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x34] = (float)fVar12;
  local_4._0_1_ = 0xb2;
  FUN_005a3ce0();
  local_4._0_1_ = 0xb1;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(1);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = (char *)&DAT_00695690;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = (char *)&DAT_00695690;
    pcVar11 = pcStack_348;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xb4);
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ParticleGravity_00695680;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_ParticleGravity_00695680;
    pcVar11 = pcStack_338;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4._0_1_ = 0xb5;
  iVar8 = FUN_005a3d10(local_33c,local_34c,0x411ccccd,0,0x42c80000,param_1 + 0x41);
  local_4._0_1_ = 0xb6;
  if (*(float *)(iVar8 + 0x60) == 0.0) {
    fVar12 = (float10)FUN_005ad390(iVar8 + 0x14,&local_375);
    *(float *)(iVar8 + 0x60) = (float)fVar12;
  }
  else {
    fVar12 = (float10)*(float *)(iVar8 + 0x60);
  }
  param_1[0x20] = (float)fVar12;
  local_4._0_1_ = 0xb5;
  FUN_005a3ce0();
  local_4._0_1_ = 0xb4;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(1);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = (char *)&DAT_00695690;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = (char *)&DAT_00695690;
    pcVar11 = pcStack_348;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xb7);
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ParticleMustFade_0069566c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_ParticleMustFade_0069566c;
    pcVar11 = pcStack_338;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4._0_1_ = 0xb8;
  FUN_005ac9d0(local_33c,local_34c,1,param_1 + 0x41,0);
  local_4._0_1_ = 0xb9;
  iVar8 = FUN_004337e0();
  *(bool *)(param_1 + 0x21) = iVar8 != 0;
  local_4._0_1_ = 0xb8;
  FUN_005acca0();
  local_4._0_1_ = 0xb7;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(1);
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = (char *)&DAT_00695690;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = (char *)&DAT_00695690;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcStack_348 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcStack_348 = pcStack_348 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcStack_348 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcStack_348 = pcStack_348 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4 = CONCAT31(local_4._1_3_,0xba);
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ParticleTestCollision_00695654;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = s_ParticleTestCollision_00695654;
    pcVar11 = pcStack_338;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4._0_1_ = 0xbb;
  FUN_005ac9d0(local_33c,local_34c,1,param_1 + 0x41,0);
  local_4._0_1_ = 0xbc;
  iVar8 = FUN_004337e0();
  *(bool *)((int)param_1 + 0x85) = iVar8 != 0;
  local_4._0_1_ = 0xbb;
  FUN_005acca0();
  local_4._0_1_ = 0xba;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_004040a0(1);
  local_33c[0] = local_375;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = (char *)&DAT_00695690;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  uStack_350 = ~uVar7 - 1;
  cVar2 = FUN_00401940(uStack_350,1);
  if (cVar2 != '\0') {
    pcVar9 = (char *)&DAT_00695690;
    for (uVar7 = uStack_350 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcStack_338 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcStack_338 = pcStack_338 + 4;
    }
    for (uVar7 = uStack_350 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcStack_338 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcStack_338 = pcStack_338 + 1;
    }
    FUN_00404190(uStack_350);
  }
  local_4._0_1_ = 0xbd;
  local_34c[0] = local_375;
  FUN_004040a0(0);
  uVar6 = FUN_004a6a00(s_ParticleMustRotate_00695640);
  FUN_004040f0(s_ParticleMustRotate_00695640,uVar6);
  puVar1 = param_1 + 0x41;
  local_4._0_1_ = 0xbe;
  FUN_005ac9d0(local_34c,local_33c,1,puVar1,0);
  local_4._0_1_ = 0xbf;
  uVar3 = FUN_004a7130();
  *(undefined1 *)((int)param_1 + 0x86) = uVar3;
  local_4._0_1_ = 0xbe;
  FUN_005acca0();
  local_4._0_1_ = 0xbd;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&local_375);
  local_4._0_1_ = 0xc0;
  FUN_00409810(s_ParticleRotationSpeed_00695628,&uStack_351);
  local_4._0_1_ = 0xc1;
  FUN_005a3d10(local_374,local_364,0x42c80000,0,0x461c4000,puVar1);
  local_4._0_1_ = 0xc2;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x22] = (float)fVar12;
  local_4._0_1_ = 0xc1;
  FUN_005a3ce0();
  local_4._0_1_ = 0xc0;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xc3;
  FUN_00409810(s_ParticleSizeX_00695618,&local_375);
  local_4._0_1_ = 0xc4;
  FUN_005a3d10(local_374,local_364,0x41700000,0,0x447a0000,puVar1);
  local_4._0_1_ = 0xc5;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x23] = (float)fVar12;
  local_4._0_1_ = 0xc4;
  FUN_005a3ce0();
  local_4._0_1_ = 0xc3;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xc6;
  FUN_00409810(s_ParticleSizeY_00695608,&local_375);
  local_4._0_1_ = 199;
  FUN_005a3d10(local_374,local_364,0x41700000,0,0x447a0000,puVar1);
  local_4._0_1_ = 200;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x24] = (float)fVar12;
  local_4._0_1_ = 199;
  FUN_005a3ce0();
  local_4._0_1_ = 0xc6;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xc9;
  FUN_00409810(s_ParticleSizeZ_006955f8,&local_375);
  local_4._0_1_ = 0xca;
  FUN_005a3d10(local_374,local_364,0x41700000,0,0x447a0000,puVar1);
  local_4._0_1_ = 0xcb;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x25] = (float)fVar12;
  local_4._0_1_ = 0xca;
  FUN_005a3ce0();
  local_4._0_1_ = 0xc9;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xcc;
  FUN_00409810(s_ParticleFloorOffset_006955e4,&local_375);
  local_4._0_1_ = 0xcd;
  FUN_005a3d10(local_374,local_364,0x40a00000,0,0x447a0000,puVar1);
  local_4._0_1_ = 0xce;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x26] = (float)fVar12;
  local_4._0_1_ = 0xcd;
  FUN_005a3ce0();
  local_4._0_1_ = 0xcc;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xcf;
  FUN_00409810(s_ParticleMinLifeTimeSeconds_006955c8,&local_375);
  local_4._0_1_ = 0xd0;
  FUN_005a3d10(local_374,local_364,0x40400000,0,0x45610000,puVar1);
  local_4._0_1_ = 0xd1;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x27] = (float)fVar12;
  local_4._0_1_ = 0xd0;
  FUN_005a3ce0();
  local_4._0_1_ = 0xcf;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xd2;
  FUN_00409810(s_ParticleMaxLifeTimeSeconds_006955ac,&local_375);
  local_4._0_1_ = 0xd3;
  FUN_005a3d10(local_374,local_364,0x40800000,0,0x45610000,puVar1);
  local_4._0_1_ = 0xd4;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x28] = (float)fVar12;
  local_4._0_1_ = 0xd3;
  FUN_005a3ce0();
  local_4._0_1_ = 0xd2;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  if ((float)param_1[0x28] < (float)param_1[0x27]) {
    uVar6 = FUN_004a6ef0();
    uVar6 = FUN_005ae390(auStack_2b4,s_ParticleMinLifeTimeSeconds_shoul_00695558,uVar6);
    local_4._0_1_ = 0xd5;
    FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069541c,0x12d,uVar6);
    local_4._0_1_ = 0xf;
    FUN_00542570();
  }
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xd6;
  FUN_00409810(s_ParticleElasticity_00695544,&local_375);
  local_4._0_1_ = 0xd7;
  FUN_005a3d10(local_374,local_364,0x3fcccccd,0,0x41200000,puVar1);
  local_4._0_1_ = 0xd8;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x29] = (float)fVar12;
  local_4._0_1_ = 0xd7;
  FUN_005a3ce0();
  local_4._0_1_ = 0xd6;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xd9;
  FUN_00409810(s_ParticleFriction_00695530,&local_375);
  local_4._0_1_ = 0xda;
  FUN_005a3d10(local_374,local_364,0x3f4ccccd,0,0x3f800000,puVar1);
  local_4._0_1_ = 0xdb;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x2a] = (float)fVar12;
  local_4._0_1_ = 0xda;
  FUN_005a3ce0();
  local_4._0_1_ = 0xd9;
  FUN_00542570();
  local_4._0_1_ = 0xf;
  FUN_00542570();
  FUN_00409810(&DAT_00695690,&uStack_351);
  local_4._0_1_ = 0xdc;
  FUN_00409810(s_ParticleAirFriction_0069551c,&local_375);
  local_4._0_1_ = 0xdd;
  FUN_005a3d10(local_374,local_364,0x3f800000,0,0x3f800000,puVar1);
  local_4._0_1_ = 0xde;
  fVar12 = (float10)FUN_004a72c0();
  param_1[0x2b] = (float)fVar12;
  local_4._0_1_ = 0xdd;
  FUN_005a3ce0();
  local_4._0_1_ = 0xdc;
  FUN_00542570();
  local_4 = CONCAT31(local_4._1_3_,0xf);
  FUN_00542570();
  iVar8 = 0;
  if (0 < (int)param_1[0x19]) {
    do {
      FUN_0044e4a0(&uStack_351);
      iVar8 = iVar8 + 1;
      local_4._0_1_ = 0xdf;
      uVar6 = FUN_005ae390(auStack_170,s_ParticleType_d_0069550c,iVar8);
      local_4._0_1_ = 0xe0;
      FUN_004a6db0(uVar6);
      local_4._0_1_ = 0xdf;
      FUN_00542570();
      pvStack_1a4 = operator_new(0x40);
      local_4._0_1_ = 0xe1;
      if (pvStack_1a4 == (void *)0x0) {
        uStack_350 = 0;
      }
      else {
        uStack_350 = FUN_004a1840();
      }
      local_4._0_1_ = 0xdf;
      FUN_00409810(s_ActorDefName_00695cac,&local_375);
      local_4._0_1_ = 0xe2;
      FUN_005acaf0(local_364,local_34c,s_particle_act_006954fc,puVar1,0);
      local_4._0_1_ = 0xe3;
      uVar6 = FUN_004a7120();
      FUN_00429a30(uVar6);
      local_4._0_1_ = 0xe4;
      uVar6 = FUN_00429a30(local_374);
      local_4._0_1_ = 0xe5;
      FUN_004a6db0(uVar6);
      local_4._0_1_ = 0xe4;
      FUN_00542570();
      local_4._0_1_ = 0xe3;
      FUN_00542570();
      local_4._0_1_ = 0xe2;
      FUN_005acca0();
      local_4._0_1_ = 0xdf;
      FUN_00542570();
      FUN_005b1140(uStack_350 + 0x14,0,0,local_284,0);
      FUN_005b0ff0(uStack_350 + 0x14,0,0,local_284,local_2a4);
      FUN_00409810(s_MinNr_006954f4,&uStack_32a);
      local_4._0_1_ = 0xe6;
      FUN_005ac9d0(local_33c,local_34c,5,puVar1,0);
      local_4._0_1_ = 0xe7;
      uVar6 = FUN_004337e0();
      local_4._0_1_ = 0xe6;
      *(undefined4 *)(uStack_350 + 0x24) = uVar6;
      FUN_005acca0();
      local_4._0_1_ = 0xdf;
      FUN_00542570();
      FUN_00409810(s_MaxNr_006954ec,&uStack_32c);
      local_4._0_1_ = 0xe8;
      FUN_005ac9d0(auStack_1a0,local_34c,10,puVar1,0);
      local_4._0_1_ = 0xe9;
      uVar6 = FUN_004337e0();
      local_4._0_1_ = 0xe8;
      *(undefined4 *)(uStack_350 + 0x28) = uVar6;
      FUN_005acca0();
      local_4._0_1_ = 0xdf;
      FUN_00542570();
      FUN_00409810(s_MinVelocity_006954e0,&uStack_32b);
      local_4._0_1_ = 0xea;
      FUN_005a3d10(auStack_190,local_34c,0x42f00000,0,0x447a0000,puVar1);
      local_4._0_1_ = 0xeb;
      fVar12 = (float10)FUN_004a72c0();
      local_4._0_1_ = 0xea;
      *(float *)(uStack_350 + 0x2c) = (float)fVar12;
      FUN_005a3ce0();
      local_4._0_1_ = 0xdf;
      FUN_00542570();
      FUN_00409810(s_MaxVelocity_006954d4,auStack_329);
      local_4._0_1_ = 0xec;
      FUN_005a3d10(auStack_2b4,local_34c,0x43160000,0,0x447a0000,puVar1);
      local_4._0_1_ = 0xed;
      fVar12 = (float10)FUN_004a72c0();
      local_4._0_1_ = 0xec;
      *(float *)(uStack_350 + 0x30) = (float)fVar12;
      FUN_005a3ce0();
      local_4._0_1_ = 0xdf;
      FUN_00542570();
      FUN_004a6f00(&uStack_350);
      local_4 = CONCAT31(local_4._1_3_,0xf);
      FUN_00542570();
    } while (iVar8 < (int)param_1[0x19]);
  }
  local_4._0_1_ = 0xe;
  FUN_00542570();
  local_4._0_1_ = 0xd;
  FUN_00542570();
  local_4._0_1_ = 0xc;
  FUN_00542570();
  local_4._0_1_ = 0xb;
  FUN_00542570();
  local_4._0_1_ = 10;
  FUN_00542570();
  local_4._0_1_ = 9;
  FUN_00542570();
  local_4._0_1_ = 8;
  FUN_00542570();
  local_4._0_1_ = 7;
  FUN_00542570();
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_00542570();
  ExceptionList = pvStack_c;
  return param_1;
}

