/*
 * FUN_005d4a00 at 005d4a00
 * undefined FUN_005d4a00(void)
 * Address ranges: 005d4a00-005d4ebc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005d4a00(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  uint *puVar16;
  float10 extraout_ST0;
  float10 fVar17;
  float10 extraout_ST1;
  float local_54;
  int local_50;
  int *local_44;
  int local_40 [3];
  float local_34;
  float local_30 [11];
  
  local_40[2] = *(int *)(param_1 + 0x1c4);
  puVar2 = *(undefined4 **)(param_1 + 0x1c0);
  puVar15 = puVar2;
  for (iVar7 = (*(int *)(param_1 + 0x188) * 0x11 & 0x1fffffffU) << 1; iVar7 != 0; iVar7 = iVar7 + -1
      ) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  iVar13 = 0;
  local_54 = 0.0;
  for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined1 *)puVar15 = 0;
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  if (0 < *(int *)(param_1 + 0x188)) {
    puVar16 = puVar2 + 0x21;
    do {
      uVar8 = 0;
      do {
        cVar1 = *(char *)(iVar13 + uVar8 + 0x20 + *(int *)(param_1 + 0x130));
        if (cVar1 == -1) break;
        if (cVar1 != '\0') {
          *puVar16 = *puVar16 | 2;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 4);
      puVar16[-3] = uVar8;
      puVar16[-10] = *(uint *)(iVar13 + 0x10 + *(int *)(param_1 + 0x130));
      if ((*(byte *)(*(int *)(iVar13 + 0x10 + *(int *)(param_1 + 0x130)) * 0x40 + 0x28 +
                    *(int *)(param_1 + 0x150)) & 0x10) != 0) {
        *puVar16 = *puVar16 | 1;
      }
      local_40[0] = *(int *)(iVar13 + 0x10 + *(int *)(param_1 + 0x130)) << 6;
      FUN_005b2fd0();
      FUN_005b2fd0();
      uVar8 = __ftol();
      puVar16[-9] = uVar8;
      uVar8 = __ftol();
      puVar16[-8] = uVar8;
      uVar8 = __ftol();
      puVar16[-7] = uVar8;
      uVar8 = __ftol();
      puVar16[-6] = uVar8;
      local_54 = (float)((int)local_54 + 1);
      iVar13 = iVar13 + 0x24;
      puVar16 = puVar16 + 0x22;
    } while ((int)local_54 < *(int *)(param_1 + 0x188));
  }
  local_54 = 0.0;
  if (0 < *(int *)(param_1 + 0x188)) {
    local_50 = 0;
    pfVar14 = (float *)(puVar2 + 0x1c);
    do {
      piVar9 = (int *)(local_50 + *(int *)(param_1 + 0x130));
      iVar7 = *(int *)(param_1 + 0x150);
      iVar13 = piVar9[4];
      local_34 = (float)(*(int *)(param_1 + 0x14c) +
                        *(int *)((int)pfVar14[-5] * 0x40 + 0x3c + iVar7) * 0x34);
      local_30[2] = -99999.0;
      local_30[3] = -99999.0;
      local_30[0] = 99999.0;
      local_30[1] = 99999.0;
      local_30[9] = -99999.0;
      local_30[7] = -99999.0;
      local_30[8] = -99999.0;
      local_30[6] = 99999.0;
      local_30[4] = 99999.0;
      local_30[5] = 99999.0;
      local_40[0] = piVar9[1];
      if (0 < local_40[0]) {
        local_44 = (int *)(*(int *)(param_1 + 0x140) + *piVar9 * 4);
        pfVar10 = (float *)(local_40[2] + *piVar9 * 0x18);
        do {
          fVar6 = *pfVar10;
          fVar3 = pfVar10[1];
          if (fVar6 < local_30[0]) {
            local_30[0] = fVar6;
          }
          if (local_30[2] < fVar6) {
            local_30[2] = fVar6;
          }
          if (fVar3 < local_30[1]) {
            local_30[1] = fVar3;
          }
          if (local_30[3] < fVar3) {
            local_30[3] = fVar3;
          }
          pfVar11 = (float *)(*(int *)(param_1 + 0x13c) + *local_44 * 0xc);
          iVar12 = 0;
          do {
            if (*pfVar11 < *(float *)((int)local_30 + iVar12 + 0x10)) {
              *(float *)((int)local_30 + iVar12 + 0x10) = *pfVar11;
            }
            if (*(float *)((int)local_30 + iVar12 + 0x1c) < *pfVar11) {
              *(float *)((int)local_30 + iVar12 + 0x1c) = *pfVar11;
            }
            iVar12 = iVar12 + 4;
            pfVar11 = pfVar11 + 1;
          } while (iVar12 < 0xc);
          pfVar10 = pfVar10 + 6;
          local_44 = local_44 + 1;
          local_40[0] = local_40[0] + -1;
        } while (local_40[0] != 0);
      }
      local_40[0] = *(int *)((int)local_34 + 0x28);
      iVar12 = *(int *)((int)local_34 + 0x24);
      iVar5 = __ftol();
      local_34 = (float)(iVar5 * local_40[0]);
      iVar5 = __ftol();
      local_34 = (float)(iVar5 * iVar12);
      *pfVar14 = (float)(extraout_ST0 - (float10)(int)local_34);
      pfVar14[1] = (float)((float10)*(float *)(iVar13 * 0x40 + iVar7 + 0x1c) - extraout_ST1);
      pfVar14[-0xc] = local_30[4];
      pfVar14[-0xb] = local_30[5];
      pfVar14[-10] = local_30[6];
      pfVar14[-9] = local_30[7];
      pfVar14[-8] = local_30[8];
      pfVar14[-7] = local_30[9];
      if ((*(uint *)(*(int *)(local_50 + 0x10 + *(int *)(param_1 + 0x130)) * 0x40 + 0x28 +
                    *(int *)(param_1 + 0x150)) & 0x8000) == 0) {
        iVar7 = 0;
        do {
          fVar17 = (float10)FUN_0060b68f((double)(*(float *)((int)local_30 + iVar7) * 0.0625));
          local_34 = (float)fVar17;
          *(float *)((int)local_30 + iVar7) = (float)fVar17;
          fVar17 = (float10)FUN_0060b97d((double)(*(float *)((int)local_30 + iVar7 + 8) * 0.0625));
          *(float *)((int)local_30 + iVar7 + 8) = (float)fVar17;
          iVar13 = __ftol();
          *(int *)((int)local_40 + iVar7) = iVar13 + 1;
          if (0x12 < iVar13 + 1) {
            FUN_005cf220(0x1d,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006ac5a4,0x189,
                         &DAT_006b3f70,0);
            return false;
          }
          iVar7 = iVar7 + 4;
        } while (iVar7 < 8);
        uVar4 = *(undefined4 *)(local_50 + *(int *)(param_1 + 0x130) + 0x1c);
        *(short *)(pfVar14 + -0x1c) =
             (short)*(undefined4 *)(local_50 + 0x18 + *(int *)(param_1 + 0x130));
        *(short *)((int)pfVar14 + -0x6e) = (short)uVar4;
        fVar6 = (float)__ftol();
        pfVar14[-0x1b] = fVar6;
        fVar6 = (float)__ftol();
        pfVar14[-0x1a] = fVar6;
        pfVar14[-0x17] = local_54;
        pfVar14[5] = (float)((uint)pfVar14[5] | 4);
      }
      local_54 = (float)((int)local_54 + 1);
      local_50 = local_50 + 0x24;
      pfVar14 = pfVar14 + 0x22;
    } while ((int)local_54 < *(int *)(param_1 + 0x188));
  }
  iVar7 = FUN_005d57f0();
  return iVar7 != 0;
}

