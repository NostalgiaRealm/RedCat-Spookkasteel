/*
 * FUN_00470710 at 00470710
 * undefined FUN_00470710(void)
 * Address ranges: 00470710-0047103f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00470710(int param_1,undefined4 param_2,int param_3)

{
  float **ppfVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  float ***pppfVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float ***pppfVar11;
  float ***extraout_ECX;
  float *pfVar12;
  float *pfVar13;
  char *pcVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float10 fVar17;
  char ****ppppcStack_204;
  undefined1 auStack_1f0 [3];
  char local_1ed;
  char local_1ec [4];
  undefined4 *local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  float local_1dc;
  float ***local_1d8;
  float ***local_1d4;
  float fStack_1d0;
  undefined4 local_1c8;
  float ***local_1c4;
  undefined4 local_1c0;
  float **appfStack_1bc [9];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float **appfStack_18c [3];
  float **appfStack_180 [8];
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined1 uStack_15b;
  undefined1 uStack_15a;
  int iStack_154;
  undefined4 uStack_118;
  float **ppfStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float ***pppfStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x364) == '\0') {
    ExceptionList = &local_c;
    *(undefined4 *)(param_1 + 0x368) = 0;
  }
  if (*(int *)(param_1 + 0x368) == 0) {
    ppppcStack_204 = (char ****)0x470758;
    FUN_00471140();
    ExceptionList = local_c;
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x368) + 0x7d) != '\0') {
    ppppcStack_204 = (char ****)0x47076b;
    FUN_00471140();
    ExceptionList = local_c;
    return;
  }
  ppppcStack_204 = (char ****)0x11f;
  FUN_005ae5f0(s_D__Work_RCHorror_rcsource_RcTarg_00692de0);
  ppppcStack_204 = (char ****)0x0;
  local_4 = 0;
  local_1dc = (float)FUN_0060a6f2(*(undefined4 *)(param_1 + 0x368),0,&CAdamGO::RTTI_Type_Descriptor,
                                  &CAdamActor::RTTI_Type_Descriptor);
  if (local_1dc == 0.0) {
    ppppcStack_204 = (char ****)local_1ec;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x368) + 0x48))();
    *(undefined4 *)(param_1 + 0x36c) = *puVar5;
    *(undefined4 *)(param_1 + 0x370) = puVar5[1];
    *(undefined4 *)(param_1 + 0x374) = puVar5[2];
    puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x368) + 0x48))(auStack_1f0);
    *(undefined4 *)(param_1 + 0x378) = *puVar5;
    *(undefined4 *)(param_1 + 0x37c) = puVar5[1];
    *(undefined4 *)(param_1 + 0x380) = puVar5[2];
  }
  else {
    ppppcStack_204 = (char ****)local_1ec;
    puVar5 = (undefined4 *)FUN_0049bc80();
    *(undefined4 *)(param_1 + 0x36c) = *puVar5;
    *(undefined4 *)(param_1 + 0x370) = puVar5[1];
    ppppcStack_204 = (char ****)local_1ec;
    *(undefined4 *)(param_1 + 0x374) = puVar5[2];
    puVar5 = (undefined4 *)FUN_0049bc80();
    *(undefined4 *)(param_1 + 0x378) = *puVar5;
    *(undefined4 *)(param_1 + 0x37c) = puVar5[1];
    *(undefined4 *)(param_1 + 0x380) = puVar5[2];
  }
  iVar9 = *(int *)(param_1 + 0x360);
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      ppppcStack_204 = (char ****)(param_1 + 0x100);
      goto LAB_00470882;
    }
    if (iVar9 == 2) {
      ppppcStack_204 = (char ****)(param_1 + 0x104);
      goto LAB_00470882;
    }
  }
  ppppcStack_204 = (char ****)(param_1 + 0xfc);
LAB_00470882:
  cVar4 = FUN_00470670(param_3);
  if ((cVar4 != '\0') &&
     (iVar9 = *(int *)(param_1 + 0x360) + 1, *(int *)(param_1 + 0x360) = iVar9, 2 < iVar9)) {
    *(undefined4 *)(param_1 + 0x360) = 0;
  }
  puVar5 = (undefined4 *)(param_1 + 300);
  iVar9 = 4;
  do {
    puVar5[-1] = *(undefined4 *)(param_1 + 0xfc);
    *puVar5 = *(undefined4 *)(param_1 + 0x100);
    puVar5[1] = *(undefined4 *)(param_1 + 0x104);
    puVar5[2] = 0x437f0000;
    puVar5 = puVar5 + 9;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (DAT_006c8de0 == 0) {
    ppppcStack_204 = (char ****)0x4708e8;
    FUN_0055b280();
  }
  ppppcStack_204 = (char ****)&local_1d4;
  pppfVar6 = (float ***)FUN_00421750();
  local_4._0_1_ = 1;
  local_1d8 = pppfVar6;
  if (*pppfVar6 == (float **)0x0) {
    ppppcStack_204 = (char ****)0x0;
    local_1ec[0] = local_1ed;
    FUN_004040a0();
    uVar10 = 0xffffffff;
    ppppcStack_204 = (char ****)0x1;
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    pppfVar11 = (float ***)(~uVar10 - 1);
    cVar4 = FUN_00401940(pppfVar11);
    if (cVar4 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar15 = local_1e8;
      for (uVar10 = (uint)pppfVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar10 = (uint)pppfVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ppppcStack_204 = (char ****)pppfVar11;
      FUN_00404190();
      pppfVar6 = local_1d8;
    }
    ppppcStack_204 = (char ****)local_1ec;
    local_4._0_1_ = 2;
    pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar7)();
    local_4._0_1_ = 1;
    ppppcStack_204 = (char ****)0x1;
    FUN_004040a0();
  }
  iVar9 = (int)*pppfVar6;
  local_4._0_1_ = 0;
  local_1c8 = *(undefined4 *)(iVar9 + 0x210);
  local_1c4 = *(float ****)(iVar9 + 0x214);
  local_1c0 = *(undefined4 *)(iVar9 + 0x218);
  ppppcStack_204 = (char ****)local_1c4;
  if ((local_1d4 != (float ***)0x0) &&
     (ppfVar1 = local_1d4[5], local_1d4[5] = (float **)((int)ppfVar1 + -1),
     ppppcStack_204 = (char ****)local_1d4, (float **)((int)ppfVar1 + -1) == (float **)0x0)) {
    ppppcStack_204 = (char ****)0x0;
    FUN_005abfc0();
    ppppcStack_204 = (char ****)extraout_ECX;
  }
  bVar3 = false;
  iVar9 = 0;
  if (local_1dc != 0.0) {
    local_1d8 = (float ***)&ppppcStack_204;
    FUN_004042e0(&ppppcStack_204);
    FUN_00565c30();
    local_4 = CONCAT31(local_4._1_3_,3);
    uStack_118 = 0x40a00000;
    uStack_160 = 1;
    uStack_15f = 1;
    uStack_15e = 1;
    uStack_15d = 0;
    uStack_15c = 1;
    uStack_15b = 0;
    uStack_15a = 0;
    do {
      if (4 < iVar9) break;
      ppppcStack_204 = (char ****)(param_1 + 0x378);
      cVar4 = FUN_00565e10(&local_1c8);
      if (cVar4 != '\0') {
        ppppcStack_204 = (char ****)0x470a8b;
        iVar8 = FUN_00566370();
        if ((float)iVar8 == local_1dc) {
          *(float ***)(param_1 + 0x378) = ppfStack_d8;
          bVar3 = true;
          *(undefined4 *)(param_1 + 0x37c) = uStack_d4;
          *(undefined4 *)(param_1 + 0x380) = uStack_d0;
        }
      }
      iVar9 = iVar9 + 1;
    } while (!bVar3);
    local_4 = CONCAT31(local_4._1_3_,4);
    ppppcStack_204 = (char ****)pppfStack_a8;
    FUN_005fe5f0();
    pppfStack_a8 = (float ***)0x0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    FUN_005fe5f0(uStack_b8);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (iStack_154 != 0) {
      iVar9 = *(int *)(iStack_154 + 0x14) + -1;
      *(int *)(iStack_154 + 0x14) = iVar9;
      if (iVar9 == 0) {
        ppppcStack_204 = (char ****)0x0;
        FUN_005abfc0();
      }
      iStack_154 = 0;
    }
    local_4._0_1_ = 0;
    ppppcStack_204 = (char ****)0x470b43;
    FUN_005ab4d0();
  }
  ppppcStack_204 = (char ****)appfStack_18c;
  FUN_005b2fe0();
  ppppcStack_204 = (char ****)0x470b62;
  FUN_005b2f20();
  ppppcStack_204 = (char ****)(param_1 + 0x378);
  FUN_005b3020(0x41200000);
  if (*(char *)(param_1 + 0x35c) == '\0') {
    uVar10 = 0xffffffff;
    if (param_3 == -1) {
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar4 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar4 != '\0');
      ppppcStack_204 = (char ****)0x1;
      pppfVar6 = (float ***)(~uVar10 - 1);
      local_1ec[0] = local_1ed;
      local_1e8 = (undefined4 *)0x0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      cVar4 = FUN_00401940(pppfVar6);
      if (cVar4 != '\0') {
        puVar5 = (undefined4 *)&DAT_006b3f70;
        puVar15 = local_1e8;
        for (uVar10 = (uint)pppfVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar15 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar10 = (uint)pppfVar6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        ppppcStack_204 = (char ****)pppfVar6;
        FUN_00404190();
      }
      ppppcStack_204 = (char ****)local_1ec;
      local_4._0_1_ = 6;
      pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a);
      (*pcVar7)();
      local_4._0_1_ = 0;
      if (local_1e8 != (undefined4 *)0x0) {
        ppppcStack_204 = (char ****)((int)local_1e8 + -1);
        cVar4 = *(char *)((int)local_1e8 + -1);
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)ppppcStack_204 = cVar4 + -1;
        }
      }
    }
    fVar2 = *(float *)(param_1 + 0x358) - (float)param_3 * 25.0 * 0.001;
  }
  else {
    uVar10 = 0xffffffff;
    if (param_3 == -1) {
      pcVar14 = &DAT_006b3f70;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar4 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar4 != '\0');
      ppppcStack_204 = (char ****)0x1;
      pppfVar6 = (float ***)(~uVar10 - 1);
      local_1ec[0] = local_1ed;
      local_1e8 = (undefined4 *)0x0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      cVar4 = FUN_00401940(pppfVar6);
      if (cVar4 != '\0') {
        puVar5 = (undefined4 *)&DAT_006b3f70;
        puVar15 = local_1e8;
        for (uVar10 = (uint)pppfVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar15 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar10 = (uint)pppfVar6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        ppppcStack_204 = (char ****)pppfVar6;
        FUN_00404190();
      }
      ppppcStack_204 = (char ****)local_1ec;
      local_4._0_1_ = 5;
      pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a);
      (*pcVar7)();
      local_4._0_1_ = 0;
      if (local_1e8 != (undefined4 *)0x0) {
        ppppcStack_204 = (char ****)((int)local_1e8 + -1);
        cVar4 = *(char *)((int)local_1e8 + -1);
        if ((cVar4 == '\0') || (cVar4 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)ppppcStack_204 = cVar4 + -1;
        }
      }
    }
    fVar2 = (float)param_3 * 25.0 * 0.001 + *(float *)(param_1 + 0x358);
  }
  fStack_1d0 = (float)param_3;
  *(float *)(param_1 + 0x358) = fVar2;
  if (*(float *)(param_1 + 0x358) <= 50.0) {
    if (*(float *)(param_1 + 0x358) < 25.0) {
      *(bool *)(param_1 + 0x35c) = *(char *)(param_1 + 0x35c) == '\0';
      *(undefined4 *)(param_1 + 0x358) = 0x41c80000;
    }
  }
  else {
    *(bool *)(param_1 + 0x35c) = *(char *)(param_1 + 0x35c) == '\0';
    *(undefined4 *)(param_1 + 0x358) = 0x42480000;
  }
  local_1dc = *(float *)(param_1 + 0x358);
  ppppcStack_204 = (char ****)appfStack_180;
  FUN_005b2fe0();
  ppppcStack_204 = (char ****)appfStack_180;
  fVar17 = (float10)FUN_005b15f0();
  local_1d4 = (float ***)(float)fVar17;
  ppppcStack_204 = (char ****)appfStack_180;
  fVar17 = (float10)FUN_004703d0();
  local_1d8 = (float ***)(float)fVar17;
  if (((float)local_1d4 < 0.0) && (-3.1415927 < (float)local_1d4)) {
    local_1d8 = (float ***)-(float)local_1d8;
  }
  ppppcStack_204 = (char ****)0x470e1a;
  FUN_005b30c0();
  ppppcStack_204 = (char ****)0x470e26;
  FUN_005b30c0();
  ppppcStack_204 = (char ****)0x470e32;
  FUN_005b30c0();
  ppppcStack_204 = (char ****)0x470e3e;
  FUN_005b30c0();
  uVar10 = 0xffffffff;
  if (param_3 == -1) {
    pcVar14 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar4 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar4 != '\0');
    ppppcStack_204 = (char ****)0x1;
    pppfVar6 = (float ***)(~uVar10 - 1);
    local_1ec[0] = local_1ed;
    local_1e8 = (undefined4 *)0x0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
    cVar4 = FUN_00401940(pppfVar6);
    if (cVar4 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar15 = local_1e8;
      for (uVar10 = (uint)pppfVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar15 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar15 = puVar15 + 1;
      }
      for (uVar10 = (uint)pppfVar6 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar15 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      ppppcStack_204 = (char ****)pppfVar6;
      FUN_00404190();
    }
    ppppcStack_204 = (char ****)local_1ec;
    local_4._0_1_ = 7;
    pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a);
    (*pcVar7)();
    if (local_1e8 != (undefined4 *)0x0) {
      ppppcStack_204 = (char ****)((int)local_1e8 + -1);
      cVar4 = *(char *)((int)local_1e8 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)ppppcStack_204 = cVar4 + -1;
      }
    }
    local_1e8 = (undefined4 *)0x0;
    uStack_1e4 = 0;
    uStack_1e0 = 0;
  }
  fVar2 = fStack_1d0 * 3.5 * 0.001 + *(float *)(param_1 + 0x354);
  *(float *)(param_1 + 0x354) = fVar2;
  ppppcStack_204 = (char ****)-fVar2;
  FUN_005b3170();
  ppppcStack_204 = (char ****)((float)local_1d4 - 1.5707964);
  FUN_005b3130();
  ppppcStack_204 = (char ****)local_1d8;
  FUN_005b30f0();
  pfVar16 = (float *)(param_1 + 0x118);
  pfVar12 = (float *)&DAT_0064de6c;
  do {
    fStack_198 = local_1dc * pfVar12[-1];
    ppppcStack_204 = (char ****)appfStack_1bc;
    fStack_194 = local_1dc * *pfVar12;
    fStack_190 = local_1dc * pfVar12[1];
    FUN_005b32c0();
    ppppcStack_204 = (char ****)appfStack_1bc;
    FUN_005b32c0();
    ppppcStack_204 = (char ****)appfStack_1bc;
    FUN_005b32c0();
    ppppcStack_204 = *(char *****)(param_1 + 0x380);
    FUN_005b3280(*(undefined4 *)(param_1 + 0x378),*(undefined4 *)(param_1 + 0x37c));
    pfVar16[-1] = fStack_198;
    *pfVar16 = fStack_194;
    pfVar16[1] = fStack_190;
    pfVar13 = pfVar12 + 9;
    pfVar16[2] = pfVar12[2];
    pfVar16[3] = pfVar12[3];
    pfVar16 = pfVar16 + 9;
    pfVar12 = pfVar13;
  } while ((int)pfVar13 < 0x64defc);
  local_4 = 0xffffffff;
  ppppcStack_204 = (char ****)0x471025;
  FUN_005ae770();
  ExceptionList = local_c;
  return;
}

