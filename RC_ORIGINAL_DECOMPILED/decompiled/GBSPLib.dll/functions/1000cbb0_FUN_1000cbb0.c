/*
 * FUN_1000cbb0 at 1000cbb0
 * undefined FUN_1000cbb0(void)
 * Address ranges: 1000cbb0-1000d061
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000cbb0(int *param_1,float *param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float *local_354;
  float *local_350;
  float local_34c [3];
  int local_340;
  float *local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  int aiStack_320 [100];
  float afStack_190 [100];
  
  local_338 = *param_2;
  local_334 = param_2[1];
  local_354 = (float *)param_2[3];
  local_330 = param_2[2];
  iVar9 = *param_1;
  local_340 = iVar9;
  if (99 < iVar9) {
    (*DAT_1014e358)(s_SplitPoly__Too_many_verts__10038b24);
    return 0;
  }
  local_34c[0] = 0.0;
  pfVar7 = (float *)&DAT_10312688;
  local_34c[1] = 0.0;
  pfVar8 = (float *)&DAT_10311d20;
  local_34c[2] = 0.0;
  local_33c = (float *)param_1[1];
  local_350 = (float *)&DAT_10312688;
  if (param_5 != 0) {
    local_338 = -*param_2;
    local_334 = -param_2[1];
    local_330 = -param_2[2];
    local_354 = (float *)-(float)local_354;
  }
  if ((int)param_2[4] < 3) {
    iVar4 = 0;
    pfVar5 = (float *)param_1[1] + (int)param_2[4];
    if (0 < iVar9) {
      do {
        fVar2 = *pfVar5;
        fVar3 = param_2[3];
        afStack_190[iVar4] = fVar2 - fVar3;
        if (param_5 != 0) {
          afStack_190[iVar4] = -(fVar2 - fVar3);
        }
        if (afStack_190[iVar4] <= 0.1) {
          if (-0.1 <= afStack_190[iVar4]) {
            aiStack_320[iVar4] = 2;
          }
          else {
            aiStack_320[iVar4] = 1;
          }
        }
        else {
          aiStack_320[iVar4] = 0;
        }
        pfVar5 = pfVar5 + 3;
        local_34c[aiStack_320[iVar4]] = (float)((int)local_34c[aiStack_320[iVar4]] + 1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar9);
    }
  }
  else {
    iVar4 = 0;
    if (0 < iVar9) {
      do {
        fVar11 = (float10)FUN_100143d0();
        fVar11 = fVar11 - (float10)(float)local_354;
        afStack_190[iVar4] = (float)fVar11;
        if (fVar11 <= (float10)0.1) {
          if ((float10)-0.1 <= fVar11) {
            aiStack_320[iVar4] = 2;
          }
          else {
            aiStack_320[iVar4] = 1;
          }
        }
        else {
          aiStack_320[iVar4] = 0;
        }
        piVar1 = aiStack_320 + iVar4;
        iVar4 = iVar4 + 1;
        local_34c[*piVar1] = (float)((int)local_34c[*piVar1] + 1);
        iVar9 = local_340;
      } while (iVar4 < local_340);
    }
  }
  if (local_34c[0] == 0.0) {
    if (local_34c[1] != 0.0) {
      *param_3 = 0;
      *param_4 = (int)param_1;
      return 1;
    }
    *param_4 = 0;
    *param_3 = (int)param_1;
    return 1;
  }
  if (local_34c[1] == 0.0) {
    *param_4 = 0;
    *param_3 = (int)param_1;
    return 1;
  }
  iVar4 = 0;
  if (0 < iVar9) {
    local_354 = local_33c;
    do {
      iVar9 = aiStack_320[iVar4];
      local_34c[0] = *local_354;
      local_34c[1] = local_354[1];
      local_34c[2] = local_354[2];
      if (iVar9 == 2) {
        *pfVar8 = local_34c[0];
        pfVar8[1] = local_34c[1];
        pfVar8[2] = local_34c[2];
        *pfVar7 = local_34c[0];
        pfVar7[1] = local_34c[1];
        pfVar7[2] = local_34c[2];
LAB_1000cf24:
        pfVar8 = pfVar8 + 3;
        pfVar7 = pfVar7 + 3;
        local_350 = pfVar7;
      }
      else {
        if (iVar9 == 0) {
          *pfVar8 = local_34c[0];
          pfVar8[1] = local_34c[1];
          pfVar8[2] = local_34c[2];
          pfVar7 = local_350;
          pfVar8 = pfVar8 + 3;
        }
        else if (iVar9 == 1) {
          *pfVar7 = local_34c[0];
          pfVar7[1] = local_34c[1];
          pfVar7[2] = local_34c[2];
          pfVar7 = local_350 + 3;
          local_350 = pfVar7;
        }
        iVar6 = (iVar4 + 1) % local_340;
        if ((aiStack_320[iVar6] != 2) && (aiStack_320[iVar6] != iVar9)) {
          fVar2 = afStack_190[iVar4] / (afStack_190[iVar4] - afStack_190[iVar6]);
          pfVar5 = local_33c + iVar6 * 3;
          local_32c = *pfVar5;
          local_328 = pfVar5[1];
          local_324 = pfVar5[2];
          *pfVar8 = (*pfVar5 - local_34c[0]) * fVar2 + local_34c[0];
          pfVar8[1] = (local_328 - local_34c[1]) * fVar2 + local_34c[1];
          pfVar8[2] = (local_324 - local_34c[2]) * fVar2 + local_34c[2];
          *pfVar7 = *pfVar8;
          pfVar7[1] = pfVar8[1];
          pfVar7[2] = pfVar8[2];
          goto LAB_1000cf24;
        }
      }
      iVar4 = iVar4 + 1;
      local_354 = local_354 + 3;
    } while (iVar4 < local_340);
  }
  FUN_1000c2e0(param_1);
  iVar9 = (int)(pfVar8 + -0x40c4748) / 0xc;
  if (iVar9 < 3) {
    *param_3 = 0;
  }
  else {
    iVar4 = FUN_1000c250(iVar9);
    if (iVar4 == 0) goto LAB_1000d005;
    if (0 < iVar9) {
      iVar6 = 0;
      do {
        puVar10 = (undefined4 *)(iVar6 + *(int *)(iVar4 + 4));
        iVar9 = iVar9 + -1;
        *puVar10 = *(undefined4 *)((int)&DAT_10311d20 + iVar6);
        puVar10[1] = *(undefined4 *)((int)&DAT_10311d24 + iVar6);
        puVar10[2] = *(undefined4 *)((int)&DAT_10311d28 + iVar6);
        iVar6 = iVar6 + 0xc;
      } while (iVar9 != 0);
    }
    *param_3 = iVar4;
  }
  iVar9 = (int)(pfVar7 + -0x40c49a2) / 0xc;
  if (iVar9 < 3) {
    *param_4 = 0;
    return 1;
  }
  iVar4 = FUN_1000c250(iVar9);
  if (iVar4 != 0) {
    if (0 < iVar9) {
      iVar6 = 0;
      do {
        puVar10 = (undefined4 *)(iVar6 + *(int *)(iVar4 + 4));
        iVar9 = iVar9 + -1;
        *puVar10 = *(undefined4 *)((int)&DAT_10312688 + iVar6);
        puVar10[1] = *(undefined4 *)((int)&DAT_1031268c + iVar6);
        puVar10[2] = *(undefined4 *)((int)&DAT_10312690 + iVar6);
        iVar6 = iVar6 + 0xc;
      } while (iVar9 != 0);
    }
    *param_4 = iVar4;
    return 1;
  }
LAB_1000d005:
  (*DAT_1014e358)(s_SplitPoly__Not_enough_mem_for_ne_10038af8);
  return 0;
}

