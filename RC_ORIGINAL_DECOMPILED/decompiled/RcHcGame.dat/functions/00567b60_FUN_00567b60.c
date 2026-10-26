/*
 * FUN_00567b60 at 00567b60
 * undefined FUN_00567b60(void)
 * Address ranges: 00567b60-00567e89
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00567ce9) */
/* WARNING: Removing unreachable block (ram,0x00567d00) */
/* WARNING: Removing unreachable block (ram,0x00567d0f) */
/* WARNING: Removing unreachable block (ram,0x00567d16) */

float10 __thiscall FUN_00567b60(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  void *pvVar7;
  int *piVar8;
  float10 fVar9;
  float10 extraout_ST0;
  
  if (param_2 < 1) {
LAB_00567e7e:
    fVar9 = (float10)0.0;
  }
  else {
    bVar1 = false;
    if (200 < param_2) {
      piVar8 = *(int **)(param_1 + 0x124);
      if (*(int *)(param_1 + 0x128) - (int)piVar8 >> 2 == 0) {
        iVar2 = *(int *)(param_1 + 0x120);
        if ((iVar2 == 0) || (uVar6 = (int)piVar8 - iVar2 >> 2, uVar6 < 2)) {
          uVar6 = 1;
        }
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (int)piVar8 - iVar2 >> 2;
        }
        iVar2 = iVar2 + uVar6;
        iVar3 = iVar2;
        if (iVar2 < 0) {
          iVar3 = 0;
        }
        pvVar4 = operator_new(iVar3 * 4);
        pvVar7 = pvVar4;
        for (piVar5 = *(int **)(param_1 + 0x120); piVar5 != piVar8; piVar5 = piVar5 + 1) {
          FUN_005f0760(pvVar7,piVar5);
          pvVar7 = (void *)((int)pvVar7 + 4);
        }
        FUN_004a7300(pvVar7,1,&param_2);
        FUN_004dddf0(piVar8,*(undefined4 *)(param_1 + 0x124),(int)pvVar7 + 4);
        FUN_00587d50(*(undefined4 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x124));
        FUN_005fe5f0(*(undefined4 *)(param_1 + 0x120));
        iVar3 = *(int *)(param_1 + 0x120);
        *(void **)(param_1 + 0x128) = (void *)((int)pvVar4 + iVar2 * 4);
        if (iVar3 == 0) {
          *(void **)(param_1 + 0x120) = pvVar4;
          *(int *)(param_1 + 0x124) = (int)pvVar4 + 4;
        }
        else {
          *(void **)(param_1 + 0x120) = pvVar4;
          *(int *)(param_1 + 0x124) = (int)pvVar4 + (*(int *)(param_1 + 0x124) - iVar3 >> 2) * 4 + 4
          ;
        }
      }
      else {
        FUN_004dddf0(piVar8,piVar8,piVar8 + 1);
        FUN_004a7300(*(int *)(param_1 + 0x124),1 - (*(int *)(param_1 + 0x124) - (int)piVar8 >> 2),
                     &param_2);
        piVar5 = *(int **)(param_1 + 0x124);
        for (; piVar8 != piVar5; piVar8 = piVar8 + 1) {
          *piVar8 = param_2;
        }
        *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 4;
      }
    }
    piVar8 = (int *)(param_1 + 0x104 + *(int *)(param_1 + 300) * 4);
    *(float *)(param_1 + 0x160) = *(float *)(param_1 + 0x160) + 1.0;
    *(float *)(param_1 + 0x164) = (float)param_2 + *(float *)(param_1 + 0x164);
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) - *piVar8;
    *piVar8 = param_2;
    iVar3 = *(int *)(param_1 + 0x118) + param_2;
    iVar2 = *(int *)(param_1 + 300) + 1;
    *(int *)(param_1 + 0x118) = iVar3;
    *(int *)(param_1 + 300) = iVar2;
    if (iVar2 == 5) {
      *(undefined4 *)(param_1 + 300) = 0;
      if (*(char *)(param_1 + 0x130) == '\0') {
        bVar1 = true;
        *(undefined1 *)(param_1 + 0x130) = 1;
        goto LAB_00567db5;
      }
    }
    else {
LAB_00567db5:
      if (*(char *)(param_1 + 0x130) == '\0') goto LAB_00567e7e;
    }
    fVar9 = (float10)FUN_00409e30(iVar3);
    *(float *)(param_1 + 0x154) = (float)((float10)5.0 / fVar9);
    *(float *)(param_1 + 0x168) =
         (float)((float10)5.0 / fVar9 + (float10)*(float *)(param_1 + 0x168));
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) + 1.0;
    iVar2 = __ftol();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x1d < iVar2) {
      iVar2 = 0x1d;
    }
    *(int *)(param_1 + 0x14 + iVar2 * 4) = *(int *)(param_1 + 0x14 + iVar2 * 4) + 1;
    *(int *)(param_1 + 0x8c + iVar2 * 4) = *(int *)(param_1 + 0x8c + iVar2 * 4) + param_2;
    if (bVar1) {
      *(float *)(param_1 + 0x158) = (float)extraout_ST0;
      *(float *)(param_1 + 0x154) = (float)extraout_ST0;
      return extraout_ST0;
    }
    if (extraout_ST0 < (float10)*(float *)(param_1 + 0x158)) {
      *(float *)(param_1 + 0x158) = (float)extraout_ST0;
    }
    fVar9 = extraout_ST0;
    if ((float10)*(float *)(param_1 + 0x15c) < extraout_ST0) {
      *(float *)(param_1 + 0x15c) = (float)extraout_ST0;
      return extraout_ST0;
    }
  }
  return fVar9;
}

