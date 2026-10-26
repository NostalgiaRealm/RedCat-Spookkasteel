/*
 * FUN_004654f0 at 004654f0
 * undefined FUN_004654f0(void)
 * Address ranges: 004654f0-00465b83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004654f0(int param_1,int param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 *puVar11;
  char *pcVar12;
  float *pfVar13;
  bool bVar14;
  float10 fVar15;
  float fVar16;
  uint uStack_10c;
  float local_108;
  undefined1 local_104 [4];
  undefined4 *puStack_100;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 auStack_d8 [36];
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [156];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627767;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    local_f4 = *(float *)(param_1 + 0x6b8);
    bVar14 = true;
    ExceptionList = &local_c;
    if (local_f4 != -NAN) {
      iVar8 = *(int *)(param_1 + 0x6bc);
      if (iVar8 == -1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x6c0) = 0x3f800000;
        *(int *)(param_1 + 0x6bc) = (int)local_f4 + param_2;
      }
      else if (iVar8 < param_2) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x6c0) = 0;
        bVar14 = false;
      }
      else if ((int)local_f4 < 1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x6c0) = 0;
      }
      else {
        local_108 = (float)(iVar8 - param_2);
        ExceptionList = &local_c;
        *(float *)(param_1 + 0x6c0) = (float)(int)local_108 / (float)(int)local_f4;
      }
    }
    *(bool *)(param_1 + 0x6c4) = bVar14;
    if (bVar14) {
      if (DAT_006c8de0 == 0) {
        FUN_0055b280();
      }
      piVar3 = (int *)FUN_00421750(&local_108);
      local_4 = 0;
      if (*piVar3 == 0) {
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
        local_4._0_1_ = 1;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_104);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      iVar8 = *piVar3;
      local_4 = 0xffffffff;
      local_e4 = *(undefined4 *)(iVar8 + 0x210);
      local_e0 = *(undefined4 *)(iVar8 + 0x214);
      local_dc = *(undefined4 *)(iVar8 + 0x218);
      if ((local_108 != 0.0) &&
         (iVar8 = *(int *)((int)local_108 + 0x14) + -1, *(int *)((int)local_108 + 0x14) = iVar8,
         iVar8 == 0)) {
        FUN_005abfc0(0);
      }
      if (param_3 == -1) {
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar2 = FUN_00401940(uVar5,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_100;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_00404190(uVar5);
        }
        local_4 = 2;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_104);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      fVar16 = (float)param_3;
      fVar1 = fVar16 * 12.0 * 0.001 + *(float *)(param_1 + 0x6a8);
      *(float *)(param_1 + 0x6a8) = fVar1;
      if (12.0 < fVar1) {
        *(undefined4 *)(param_1 + 0x6a8) = 0x41400000;
      }
      if (param_3 == -1) {
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar2 = FUN_00401940(uVar5,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_100;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          FUN_00404190(uVar5);
        }
        local_4 = 3;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_104);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (puStack_100 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_100 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_100 + -1));
          }
          else {
            *(char *)((int)puStack_100 + -1) = cVar2 + -1;
          }
        }
      }
      *(float *)(param_1 + 0x6a0) =
           fVar16 * *(float *)(param_1 + 0x6a8) * 0.001 + *(float *)(param_1 + 0x6a0);
      if (param_3 == -1) {
        FUN_004040a0(0);
        uVar5 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar5 = ~uVar5 - 1;
        cVar2 = FUN_00401940(uVar5,1);
        if (cVar2 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puStack_100 = *puVar7;
            puVar7 = puVar7 + 1;
            puStack_100 = puStack_100 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puStack_100 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puStack_100 = (undefined4 *)((int)puStack_100 + 1);
          }
          FUN_00404190(uVar5);
        }
        local_4 = 4;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_104);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      fVar16 = *(float *)(param_1 + 0x6a4) - fVar16 * 160.0 * 0.001;
      *(float *)(param_1 + 0x6a4) = fVar16;
      if (180.0 < fVar16) {
        *(undefined4 *)(param_1 + 0x6a4) = 0;
      }
      if (*(float *)(param_1 + 0x6a4) < 0.0) {
        *(undefined4 *)(param_1 + 0x6a4) = 0x43340000;
      }
      fStack_f0 = 1.0 - *(float *)(param_1 + 0x6c0);
      if (0.5 < fStack_f0) {
        fStack_f0 = 1.0 - fStack_f0;
      }
      uStack_10c = 0;
      puVar7 = (undefined4 *)(param_1 + 0x11c);
      do {
        FUN_005b2fe0(auStack_a8);
        fVar15 = (float10)FUN_005b15f0(auStack_a8);
        local_f4 = (float)fVar15;
        fVar15 = (float10)FUN_004654c0(auStack_a8);
        local_108 = (float)fVar15;
        if ((local_f4 < 0.0) && (-3.1415927 < local_f4)) {
          local_108 = -local_108;
        }
        FUN_005b30c0();
        FUN_005b30c0();
        FUN_005b30c0();
        FUN_005b30c0();
        uVar5 = uStack_10c & 0x80000001;
        bVar14 = uVar5 == 0;
        fStack_e8 = (float)(int)uStack_10c * 0.62831855;
        if ((int)uVar5 < 0) {
          bVar14 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar14) {
          fStack_ec = fStack_f0 * *(float *)(param_1 + 0x6c8) * 0.65;
          fVar16 = fStack_e8;
        }
        else {
          fStack_ec = fStack_f0 * *(float *)(param_1 + 0x6c8);
          fVar16 = fStack_e8 + *(float *)(param_1 + 0x6a0);
        }
        FUN_005b3170(fVar16);
        FUN_005b3130(local_f4 - 1.5707964);
        FUN_005b30f0(local_108);
        pfVar13 = (float *)(puVar7 + -6);
        pfVar9 = (float *)&DAT_0064d814;
        do {
          fStack_b4 = fStack_ec * pfVar9[-1];
          fStack_b0 = fStack_ec * *pfVar9;
          fStack_ac = fStack_ec * pfVar9[1];
          FUN_005b32c0(auStack_d8);
          FUN_005b32c0(auStack_d8);
          FUN_005b32c0(auStack_d8);
          FUN_005b3280(*(undefined4 *)(param_1 + 0x6ac),*(undefined4 *)(param_1 + 0x6b0),
                       *(undefined4 *)(param_1 + 0x6b4));
          pfVar13[-2] = fStack_b4;
          pfVar13[-1] = fStack_b0;
          *pfVar13 = fStack_ac;
          pfVar10 = pfVar9 + 9;
          pfVar13[1] = pfVar9[2];
          pfVar13[2] = pfVar9[3];
          pfVar13 = pfVar13 + 9;
          pfVar9 = pfVar10;
        } while ((int)pfVar10 < 0x64d8a4);
        *puVar7 = *(undefined4 *)(param_1 + 0x6a4);
        puVar7[9] = *(undefined4 *)(param_1 + 0x6a4);
        puVar7[0x12] = 0x43340000;
        uStack_10c = uStack_10c + 1;
        puVar7 = puVar7 + 0x24;
      } while ((int)uStack_10c < 10);
    }
    else {
      FUN_00502350(0);
    }
  }
  ExceptionList = local_c;
  return;
}

