/*
 * FUN_004a9100 at 004a9100
 * undefined FUN_004a9100(void)
 * Address ranges: 004a9100-004a9763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004a9100(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  float *pfVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_EBX;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  float10 fVar11;
  float10 fVar12;
  int unaff_retaddr;
  float fVar13;
  int *piStack_1a0;
  int *piStack_19c;
  char cVar14;
  char acStack_188 [3];
  undefined1 local_185;
  char *pcStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined1 *puStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  undefined1 *puStack_144;
  float fStack_140;
  undefined1 *puStack_13c;
  float fStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined1 auStack_128 [8];
  int aiStack_120 [3];
  int aiStack_114 [8];
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  int iStack_e8;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 uStack_8;
  undefined3 uStack_7;
  int local_4;
  
  cVar14 = (char)((uint)unaff_EBX >> 0x18);
  uStack_8 = 0xc5;
  uStack_7 = 0x62dd;
  pvStack_c = ExceptionList;
  local_4 = 0;
  local_185 = 0;
  local_148 = 5000.0;
  piStack_19c = (int *)0x4a913c;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 100))();
  piStack_1a0 = param_1 + 0x4d;
  puStack_144 = (undefined1 *)&piStack_1a0;
  piStack_19c = piStack_1a0;
  FUN_00449760(&stack0x00000004);
  FUN_005545f0();
  piStack_19c = (int *)auStack_128;
  local_4 = CONCAT31(local_4._1_3_,1);
  piStack_1a0 = (int *)0x4a917c;
  pfVar3 = (float *)FUN_00554a50();
  fStack_140 = *pfVar3;
  piStack_19c = (int *)0x0;
  piStack_1a0 = (int *)0x3f800000;
  puStack_13c = (undefined1 *)pfVar3[1];
  fStack_138 = pfVar3[2];
  FUN_005b2e20(0);
  piStack_19c = (int *)auStack_128;
  piStack_1a0 = (int *)0x4a91ad;
  piVar4 = (int *)(**(code **)(*param_1 + 0x48))();
  iStack_170 = *piVar4;
  iStack_16c = piVar4[1];
  iStack_168 = piVar4[2];
  fStack_138 = (float)iStack_170;
  iStack_134 = iStack_16c;
  iStack_130 = iStack_168;
  if (param_1[0xc2] == 1) {
    iStack_174 = 4;
  }
  else if (param_1[0xc2] == 2) {
    iStack_174 = 2;
  }
  else {
    piStack_1a0 = (int *)0x0;
    acStack_188[0] = cVar14;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    piStack_1a0 = (int *)0x1;
    pcVar8 = s_Invalid_case_0068d650;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    puStack_178 = (undefined1 *)uVar6;
    cVar2 = FUN_00401940(uVar6);
    if (cVar2 != '\0') {
      pcVar8 = s_Invalid_case_0068d650;
      pcVar10 = pcStack_184;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcStack_184[uVar6] = '\0';
      uStack_180 = uVar6;
    }
    piStack_1a0 = (int *)acStack_188;
    uStack_8 = 2;
    pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00695da4,0x221
                                 );
    (*pcVar5)();
    uStack_8 = 1;
    piStack_1a0 = (int *)0x1;
    FUN_004040a0();
  }
  puStack_178 = (undefined1 *)0x0;
  if (iStack_174 < 1) {
LAB_004a956e:
    uVar6 = 0xffffffff;
    pcVar8 = s_CAdamAnyActor__DoAutoPlace_____C_00695ef4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    piStack_1a0 = (int *)(~uVar6 - 1);
    pcStack_184 = (char *)0x0;
    uStack_180 = 0;
    uStack_17c = 0;
    acStack_188[0] = cVar14;
    FUN_004040f0(s_CAdamAnyActor__DoAutoPlace_____C_00695ef4);
    piStack_1a0 = (int *)acStack_188;
    uStack_8 = 8;
    FUN_005035a0();
    uStack_8 = 1;
    if (pcStack_184 != (char *)0x0) {
      piStack_1a0 = (int *)(pcStack_184 + -1);
      cVar2 = pcStack_184[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)piStack_1a0 = cVar2 + -1;
      }
    }
  }
  else {
    local_148 = (float)iStack_174;
    do {
      puVar1 = puStack_178;
      fVar11 = ((float10)(int)puStack_178 * (float10)6.2831855) / (float10)local_148;
      cVar14 = (char)((uint)unaff_EBX >> 0x18);
      if (param_1[0xc2] == 1) {
        fVar12 = (float10)fsin(fVar11);
        fStack_154 = 0.0;
        fStack_158 = (float)fVar12;
        fVar11 = (float10)fcos(fVar11);
        fStack_150 = (float)fVar11;
      }
      else if (param_1[0xc2] == 2) {
        fVar11 = (float10)fcos(fVar11);
        fStack_158 = 0.0;
        fStack_150 = 0.0;
        fStack_154 = (float)fVar11;
      }
      else {
        uVar6 = 0xffffffff;
        pcStack_184 = (char *)0x0;
        pcVar8 = s_Invalid_case_0068d650;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        piStack_1a0 = (int *)(~uVar6 - 1);
        uStack_180 = 0;
        uStack_17c = 0;
        acStack_188[0] = cVar14;
        FUN_004040f0(s_Invalid_case_0068d650);
        piStack_1a0 = (int *)acStack_188;
        uStack_8 = 3;
        pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00695da4,
                                      0x23d);
        (*pcVar5)();
        uStack_8 = 1;
        if (pcStack_184 != (char *)0x0) {
          piStack_1a0 = (int *)((int)pcStack_184 + -1);
          cVar2 = *(char *)((int)pcStack_184 + -1);
          if ((cVar2 != '\0') && (cVar2 != -1)) {
            *(char *)piStack_1a0 = cVar2 + -1;
            pcStack_184 = (char *)0x0;
            uStack_180 = 0;
            uStack_17c = 0;
            goto LAB_004a9398;
          }
          FUN_005fe5f0();
        }
        pcStack_184 = (char *)0x0;
        uStack_180 = 0;
        uStack_17c = 0;
      }
LAB_004a9398:
      puStack_178 = (undefined1 *)&piStack_1a0;
      if (unaff_retaddr != 0) {
        *(int *)(unaff_retaddr + 0x14) = *(int *)(unaff_retaddr + 0x14) + 1;
      }
      FUN_00565c30();
      piStack_1a0 = aiStack_114;
      _uStack_8 = CONCAT31(uStack_7,4);
      uStack_f3 = 1;
      uStack_f2 = 1;
      uStack_f1 = 1;
      uStack_f0 = 1;
      uStack_ef = 1;
      FUN_005b3020(0x45480000);
      piStack_1a0 = (int *)0x4a9415;
      FUN_005b3080();
      piStack_1a0 = aiStack_120;
      FUN_005b3020(0x3f800000);
      piStack_1a0 = aiStack_114;
      cVar2 = FUN_00565e10(aiStack_120);
      if (cVar2 != '\0') {
        piStack_1a0 = &iStack_12c;
        FUN_005b2fe0();
        piStack_1a0 = (int *)0x4a9467;
        fVar11 = (float10)FUN_005b2fd0();
        if ((cVar14 == '\0') || (fVar11 < (float10)fStack_14c)) {
          fStack_164 = fStack_8c;
          fStack_160 = fStack_88;
          fStack_15c = fStack_84;
          iStack_170 = iStack_78;
          fStack_14c = (float)fVar11;
          iStack_16c = iStack_74;
          iStack_168 = iStack_70;
          unaff_EBX = 0x1000000;
        }
      }
      cVar14 = (char)((uint)unaff_EBX >> 0x18);
      piStack_1a0 = piStack_38;
      uStack_8 = 7;
      FUN_00587d50(piStack_3c);
      piStack_1a0 = piStack_3c;
      FUN_005fe5f0();
      piStack_3c = (int *)0x0;
      piStack_38 = (int *)0x0;
      uStack_34 = 0;
      uStack_8 = 6;
      piStack_1a0 = (int *)0x4a9524;
      FUN_00514430();
      uStack_8 = 5;
      if (iStack_e8 != 0) {
        piStack_1a0 = (int *)0x4a953c;
        FUN_004098d0();
        iStack_e8 = 0;
      }
      uStack_8 = 1;
      piStack_1a0 = (int *)0x4a9557;
      FUN_005ab4d0();
      puStack_178 = (undefined1 *)((int)puVar1 + 1);
    } while ((int)puStack_178 < iStack_174);
    if (cVar14 == '\0') goto LAB_004a956e;
  }
  piStack_1a0 = (int *)0x4a95ea;
  FUN_005b2f20();
  if (param_1[0xc2] == 1) {
    puVar1 = puStack_13c;
    if (ABS(fStack_15c) < ABS(fStack_164)) {
      puVar1 = puStack_144;
    }
    fVar13 = (float)puVar1 * 0.5;
  }
  else {
    if (param_1[0xc2] != 2) {
      uVar6 = 0xffffffff;
      pcStack_184 = (char *)0x0;
      pcVar8 = s_Invalid_case_0068d650;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      piStack_1a0 = (int *)(~uVar6 - 1);
      uStack_180 = 0;
      uStack_17c = 0;
      acStack_188[0] = cVar14;
      FUN_004040f0(s_Invalid_case_0068d650);
      piStack_1a0 = (int *)acStack_188;
      uStack_8 = 9;
      pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00695da4,
                                    0x27f);
      (*pcVar5)();
      uStack_8 = 1;
      if (pcStack_184 != (char *)0x0) {
        piStack_1a0 = (int *)((int)pcStack_184 + -1);
        cVar14 = *(char *)((int)pcStack_184 + -1);
        if ((cVar14 != '\0') && (cVar14 != -1)) {
          *(char *)piStack_1a0 = cVar14 + -1;
          pcStack_184 = (char *)0x0;
          uStack_180 = 0;
          uStack_17c = 0;
          goto LAB_004a96fc;
        }
        FUN_005fe5f0();
      }
      pcStack_184 = (char *)0x0;
      uStack_180 = 0;
      uStack_17c = 0;
      goto LAB_004a96fc;
    }
    fVar13 = fStack_140;
    if (0.0 <= fStack_160) goto LAB_004a96fc;
  }
  piStack_1a0 = &iStack_170;
  FUN_005b3020(fVar13);
LAB_004a96fc:
  piStack_1a0 = &iStack_170;
  (**(code **)(*param_1 + 0x4c))();
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  FUN_00554630();
  pvStack_c = (void *)0xffffffff;
  if ((local_4 != 0) &&
     (iVar9 = *(int *)(local_4 + 0x14) + -1, *(int *)(local_4 + 0x14) = iVar9, iVar9 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_14;
  return;
}

