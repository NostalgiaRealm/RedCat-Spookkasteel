/*
 * FUN_1000c890 at 1000c890
 * undefined FUN_1000c890(void)
 * Address ranges: 1000c890-1000cbaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000c890(int *param_1,float param_2,float *param_3,int param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float *local_350;
  float local_34c [4];
  float local_33c;
  float local_338;
  float *local_334;
  float local_330;
  float local_32c;
  float local_328;
  int local_324;
  int aiStack_320 [100];
  float afStack_190 [100];
  
  local_34c[3] = *param_3;
  local_33c = param_3[1];
  local_350 = (float *)param_3[3];
  local_338 = param_3[2];
  iVar7 = *param_1;
  local_324 = iVar7;
  *param_5 = 0;
  if (99 < iVar7) {
    (*DAT_1014e358)(s_ClipPoly__Too_many_verts__10038adc);
    return 0;
  }
  local_334 = (float *)param_1[1];
  local_34c[0] = 0.0;
  pfVar5 = (float *)&DAT_10311d20;
  local_34c[1] = 0.0;
  local_34c[2] = 0.0;
  if (param_4 != 0) {
    local_34c[3] = -local_34c[3];
    local_33c = -local_33c;
    local_338 = -local_338;
    local_350 = (float *)-(float)local_350;
  }
  iVar8 = 0;
  if (0 < iVar7) {
    do {
      fVar10 = (float10)FUN_100143d0();
      fVar10 = fVar10 - (float10)(float)local_350;
      afStack_190[iVar8] = (float)fVar10;
      if (fVar10 <= (float10)param_2) {
        if (-(float10)param_2 <= fVar10) {
          aiStack_320[iVar8] = 2;
        }
        else {
          aiStack_320[iVar8] = 1;
        }
      }
      else {
        aiStack_320[iVar8] = 0;
      }
      piVar1 = aiStack_320 + iVar8;
      iVar8 = iVar8 + 1;
      local_34c[*piVar1] = (float)((int)local_34c[*piVar1] + 1);
    } while (iVar8 < iVar7);
  }
  if (local_34c[0] == 0.0) {
    FUN_1000c2e0(param_1);
    *param_5 = 0;
    return 1;
  }
  if (local_34c[1] == 0.0) {
    *param_5 = (int)param_1;
    return 1;
  }
  iVar8 = 0;
  pfVar6 = pfVar5;
  local_350 = local_334;
  if (0 < iVar7) {
    do {
      iVar3 = aiStack_320[iVar8];
      local_34c[0] = *local_350;
      local_34c[1] = local_350[1];
      local_34c[2] = local_350[2];
      pfVar6 = pfVar5;
      if (iVar3 == 2) {
        *pfVar5 = local_34c[0];
        pfVar5[1] = local_34c[1];
        pfVar5[2] = local_34c[2];
LAB_1000cae0:
        pfVar6 = pfVar6 + 3;
      }
      else {
        if (iVar3 == 0) {
          pfVar6 = pfVar5 + 3;
          *pfVar5 = local_34c[0];
          pfVar5[1] = local_34c[1];
          pfVar5[2] = local_34c[2];
          iVar7 = local_324;
        }
        iVar4 = (iVar8 + 1) % iVar7;
        if ((aiStack_320[iVar4] != 2) && (aiStack_320[iVar4] != iVar3)) {
          fVar2 = afStack_190[iVar8] / (afStack_190[iVar8] - afStack_190[iVar4]);
          pfVar5 = local_334 + iVar4 * 3;
          local_330 = *pfVar5;
          local_32c = pfVar5[1];
          local_328 = pfVar5[2];
          *pfVar6 = (*pfVar5 - local_34c[0]) * fVar2 + local_34c[0];
          pfVar6[1] = (local_32c - local_34c[1]) * fVar2 + local_34c[1];
          pfVar6[2] = (local_328 - local_34c[2]) * fVar2 + local_34c[2];
          goto LAB_1000cae0;
        }
      }
      iVar8 = iVar8 + 1;
      local_350 = local_350 + 3;
      pfVar5 = pfVar6;
    } while (iVar8 < iVar7);
  }
  FUN_1000c2e0(param_1);
  iVar7 = (int)(pfVar6 + -0x40c4748) / 0xc;
  if (iVar7 < 3) {
    *param_5 = 0;
    return 1;
  }
  iVar8 = FUN_1000c250(iVar7);
  if (iVar8 != 0) {
    if (0 < iVar7) {
      iVar3 = 0;
      do {
        puVar9 = (undefined4 *)(iVar3 + *(int *)(iVar8 + 4));
        iVar7 = iVar7 + -1;
        *puVar9 = *(undefined4 *)((int)&DAT_10311d20 + iVar3);
        puVar9[1] = *(undefined4 *)((int)&DAT_10311d24 + iVar3);
        puVar9[2] = *(undefined4 *)((int)&DAT_10311d28 + iVar3);
        iVar3 = iVar3 + 0xc;
      } while (iVar7 != 0);
    }
    *param_5 = iVar8;
    return 1;
  }
  (*DAT_1014e358)(s_ClipPoly__Not_enough_mem_for_new_10038ab0);
  return 0;
}

