/*
 * FUN_005d2430 at 005d2430
 * undefined FUN_005d2430(void)
 * Address ranges: 005d2430-005d29a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d2430(float *param_1,undefined4 *param_2,undefined4 param_3,short *param_4)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_7c;
  float local_6c;
  float local_68;
  float local_64;
  int local_54;
  int local_50;
  float local_48;
  float local_44;
  float local_40;
  
  local_7c = 0;
  local_bc = *(float *)(param_4 + 0x1a);
  local_b8 = *(float *)(param_4 + 0x1c);
  local_b4 = *(float *)(param_4 + 0x1e);
  local_6c = *(float *)(param_4 + 0x1a);
  local_68 = *(float *)(param_4 + 0x1c);
  local_64 = *(float *)(param_4 + 0x1e);
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  FUN_005b2fe0();
  fVar20 = (float10)FUN_005b2f20();
  fVar6 = param_1[9];
  fVar7 = param_1[0xb];
  fVar21 = (float10)FUN_005b2e40();
  fVar8 = *(float *)(param_4 + 0xe);
  fVar9 = *(float *)(param_4 + 0x10);
  fVar10 = *(float *)(param_4 + 0x14);
  fVar11 = *(float *)(param_4 + 0x12);
  local_54 = (int)param_4[1];
  fVar12 = *(float *)(param_4 + 0x16);
  sVar2 = *param_4;
  fVar13 = *(float *)(param_4 + 0x18);
  if (0 < local_54) {
    do {
      local_50 = (int)sVar2;
      if (0 < sVar2) {
        do {
          fVar15 = local_bc - DAT_006ac538;
          fVar16 = local_b8 - DAT_006ac53c;
          fVar17 = local_b4 - DAT_006ac540;
          fVar18 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
          fVar22 = (float10)FUN_005d3df0((double)fVar18);
          fVar22 = (float10)1.0 / fVar22;
          fVar14 = local_48 * (float)(fVar22 * (float10)fVar15) +
                   local_44 * (float)(fVar22 * (float10)fVar16) +
                   local_40 * (float)(fVar22 * (float10)fVar17);
          fVar1 = fVar7 - ((float)fVar21 - fVar14 * fVar14);
          if (fVar1 <= 0.0) {
LAB_005d28f2:
            *param_2 = 0;
            param_2[1] = 0;
            param_2[2] = 0;
          }
          else {
            fVar23 = (float10)FUN_005d3df0((double)fVar1);
            fVar1 = (float)((float10)fVar14 - fVar23);
            if ((fVar1 <= 0.0) && ((float)(fVar23 + (float10)fVar14) <= 0.0)) goto LAB_005d28f2;
            fVar23 = (float10)FUN_005d3df0((double)((local_bc - fVar3) * (local_bc - fVar3) +
                                                   (local_b8 - fVar4) * (local_b8 - fVar4) +
                                                   (local_b4 - fVar5) * (local_b4 - fVar5)));
            if ((fVar6 <= (float)fVar20) &&
               (((float10)fVar6 <= fVar23 &&
                (fVar14 = (fVar1 * (float)(fVar22 * (float10)fVar15) + DAT_006ac538) - DAT_006ac538,
                fVar15 = (fVar1 * (float)(fVar22 * (float10)fVar16) + DAT_006ac53c) - DAT_006ac53c,
                fVar1 = (fVar1 * (float)(fVar22 * (float10)fVar17) + DAT_006ac540) - DAT_006ac540,
                fVar18 < fVar14 * fVar14 + fVar15 * fVar15 + fVar1 * fVar1)))) goto LAB_005d28f2;
            local_7c = 1;
            uVar19 = __ftol();
            *param_2 = uVar19;
            uVar19 = __ftol();
            param_2[1] = uVar19;
            uVar19 = __ftol();
            param_2[2] = uVar19;
          }
          local_bc = fVar8 + local_bc;
          param_2 = param_2 + 3;
          local_50 = local_50 + -1;
          local_b8 = fVar9 + local_b8;
          local_b4 = fVar11 + local_b4;
        } while (local_50 != 0);
      }
      local_bc = local_6c + fVar10;
      local_54 = local_54 + -1;
      local_b8 = local_68 + fVar12;
      local_b4 = local_64 + fVar13;
      local_6c = local_bc;
      local_68 = local_b8;
      local_64 = local_b4;
    } while (local_54 != 0);
  }
  return local_7c;
}

