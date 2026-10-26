/*
 * FUN_005d29b0 at 005d29b0
 * undefined FUN_005d29b0(void)
 * Address ranges: 005d29b0-005d2f35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d29b0(float *param_1,int *param_2,undefined4 param_3,short *param_4)

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
  int iVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_80;
  float local_70;
  float local_6c;
  float local_68;
  int local_58;
  int local_54;
  float local_4c;
  float local_48;
  float local_44;
  
  local_80 = 0;
  local_c0 = *(float *)(param_4 + 0x1a);
  local_bc = *(float *)(param_4 + 0x1c);
  local_70 = *(float *)(param_4 + 0x1a);
  local_b8 = *(float *)(param_4 + 0x1e);
  local_68 = *(float *)(param_4 + 0x1e);
  local_6c = *(float *)(param_4 + 0x1c);
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
  fVar12 = *(float *)(param_4 + 0x16);
  sVar2 = *param_4;
  fVar13 = *(float *)(param_4 + 0x18);
  local_58 = (int)param_4[1];
  if (0 < local_58) {
    do {
      local_54 = (int)sVar2;
      if (0 < sVar2) {
        do {
          fVar15 = local_c0 - DAT_006ac538;
          fVar16 = local_bc - DAT_006ac53c;
          fVar17 = local_b8 - DAT_006ac540;
          fVar18 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
          fVar22 = (float10)FUN_005d3df0((double)fVar18);
          fVar22 = (float10)1.0 / fVar22;
          fVar14 = local_4c * (float)(fVar22 * (float10)fVar15) +
                   local_48 * (float)(fVar22 * (float10)fVar16) +
                   local_44 * (float)(fVar22 * (float10)fVar17);
          fVar1 = fVar7 - ((float)fVar21 - fVar14 * fVar14);
          if (0.0 < fVar1) {
            fVar23 = (float10)FUN_005d3df0((double)fVar1);
            fVar1 = (float)((float10)fVar14 - fVar23);
            if ((0.0 < fVar1) || (0.0 < (float)(fVar23 + (float10)fVar14))) {
              fVar23 = (float10)FUN_005d3df0((double)((local_c0 - fVar3) * (local_c0 - fVar3) +
                                                     (local_bc - fVar4) * (local_bc - fVar4) +
                                                     (local_b8 - fVar5) * (local_b8 - fVar5)));
              if (((float)fVar20 < fVar6) ||
                 ((fVar23 < (float10)fVar6 ||
                  (fVar14 = (fVar1 * (float)(fVar22 * (float10)fVar15) + DAT_006ac538) -
                            DAT_006ac538,
                  fVar15 = (fVar1 * (float)(fVar22 * (float10)fVar16) + DAT_006ac53c) - DAT_006ac53c
                  , fVar1 = (fVar1 * (float)(fVar22 * (float10)fVar17) + DAT_006ac540) -
                            DAT_006ac540,
                  fVar14 * fVar14 + fVar15 * fVar15 + fVar1 * fVar1 <= fVar18)))) {
                local_80 = 1;
                iVar19 = __ftol();
                *param_2 = *param_2 + iVar19;
                iVar19 = __ftol();
                param_2[1] = param_2[1] + iVar19;
                iVar19 = __ftol();
                param_2[2] = param_2[2] + iVar19;
              }
            }
          }
          param_2 = param_2 + 3;
          local_c0 = fVar8 + local_c0;
          local_54 = local_54 + -1;
          local_bc = fVar9 + local_bc;
          local_b8 = fVar11 + local_b8;
        } while (local_54 != 0);
      }
      local_c0 = local_70 + fVar10;
      local_bc = local_6c + fVar12;
      local_b8 = local_68 + fVar13;
      local_58 = local_58 + -1;
      local_70 = local_c0;
      local_6c = local_bc;
      local_68 = local_b8;
    } while (local_58 != 0);
  }
  return local_80;
}

