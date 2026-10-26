/*
 * FUN_100099c0 at 100099c0
 * undefined FUN_100099c0(void)
 * Address ranges: 100099c0-10009cae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100099c0(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  int local_20;
  float local_1c [7];
  
  piVar2 = param_1;
  local_1c[0] = 15192.0;
  local_1c[2] = -15192.0;
  iVar8 = *param_1 * 0x24;
  local_1c[1] = 15192.0;
  local_1c[3] = -15192.0;
  iVar5 = *(int *)(iVar8 + 0x10 + DAT_1014e288) * 0x40 + DAT_1014e2fc;
  FUN_100145f0();
  local_20 = 0;
  if (0 < *(int *)(iVar8 + 4 + DAT_1014e288)) {
    do {
      iVar6 = 0;
      do {
        fVar10 = (float10)FUN_100143d0();
        if ((float10)*(float *)((int)local_1c + iVar6 + 8) < fVar10) {
          *(float *)((int)local_1c + iVar6 + 8) = (float)fVar10;
        }
        if (fVar10 < (float10)*(float *)((int)local_1c + iVar6)) {
          *(float *)((int)local_1c + iVar6) = (float)fVar10;
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 < 8);
      FUN_10014580();
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(iVar8 + 4 + DAT_1014e288));
  }
  FUN_10014530();
  iVar8 = 0;
  puVar7 = (undefined4 *)(param_2 + 0x40);
  do {
    fVar1 = *(float *)((int)local_1c + iVar8);
    uVar3 = *(undefined4 *)((int)local_1c + iVar8 + 8);
    puVar7[-2] = *(undefined4 *)((int)local_1c + iVar8);
    *puVar7 = uVar3;
    fVar10 = (float10)FUN_1002776f((double)(fVar1 * 0.0625));
    *(float *)((int)local_1c + iVar8) = (float)fVar10;
    fVar10 = (float10)FUN_1002802f((double)(*(float *)((int)local_1c + iVar8 + 8) * 0.0625));
    *(float *)((int)local_1c + iVar8 + 8) = (float)fVar10;
    uVar3 = __ftol();
    puVar7[4] = uVar3;
    uVar3 = __ftol();
    puVar7[2] = uVar3;
    iVar6 = __ftol();
    puVar7[6] = iVar6;
    if (0x12 < iVar6 + 1) {
      (*DAT_1014e358)();
      return 0;
    }
    iVar8 = iVar8 + 4;
    puVar7 = puVar7 + 1;
  } while (iVar8 < 8);
  FUN_100143f0();
  FUN_100144b0();
  fVar10 = (float10)FUN_100143d0();
  param_1 = (int *)(float)fVar10;
  if (fVar10 != (float10)0.0) {
    if ((float)param_1 < 0.0) {
      param_1 = (int *)-(float)param_1;
      FUN_10014600();
    }
    piVar9 = piVar2 + 6;
    param_2 = 2;
    do {
      FUN_10014550();
      fVar10 = (float10)FUN_100143d0();
      FUN_100145a0((float)-(fVar10 * (float10)(1.0 / (float)param_1)),piVar9);
      FUN_10014530();
      piVar9 = piVar9 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    iVar8 = 3;
    pfVar4 = (float *)(piVar2 + 9);
    do {
      iVar8 = iVar8 + -1;
      pfVar4[3] = -(pfVar4[-3] * *(float *)(iVar5 + 8)) - *pfVar4 * *(float *)(iVar5 + 0x14);
      pfVar4 = pfVar4 + 1;
    } while (iVar8 != 0);
    fVar10 = (float10)FUN_100143d0();
    FUN_100145a0((float)-(((fVar10 - (float10)(float)piVar2[4]) - (float10)1.0) *
                         (float10)(1.0 / (float)param_1)),piVar2 + 0xc);
    return 1;
  }
  (*DAT_1014e358)();
  return 0;
}

