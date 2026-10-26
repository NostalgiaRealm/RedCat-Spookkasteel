/*
 * FUN_1000e1c0 at 1000e1c0
 * undefined FUN_1000e1c0(void)
 * Address ranges: 1000e1c0-1000e3ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000e1c0(float param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar2 = **(int **)((int)param_1 + 8);
  if (iVar2 < 3) {
    if (param_2 == 0) {
      return 0;
    }
    (*DAT_1014e35c)();
    return 0;
  }
  fVar3 = (float)(&DAT_1003fe04)[*(int *)((int)param_1 + 0x18) * 5];
  piVar1 = (int *)((int)param_1 + 0x1c);
  param_1 = fVar3;
  if (*piVar1 != 0) {
    FUN_10014560();
    param_1 = -fVar3;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = iVar4 + 1;
      FUN_10014560();
      fVar6 = (float10)FUN_10014550();
      if (ABS(fVar6) < (float10)0.0010000000474974513) {
        if (param_2 == 0) {
          return 0;
        }
        (*DAT_1014e35c)();
        return 0;
      }
      fVar6 = (float10)FUN_100143d0();
      fVar6 = fVar6 - (float10)param_1;
      if (((float10)0.1 < fVar6) || (fVar6 < (float10)-0.1)) {
        if (param_2 != 0) {
          (*DAT_1014e35c)(s_WARNING_CheckFace__Non_planar____10038c1c,(double)fVar6);
          return 0;
        }
        return 0;
      }
      FUN_100143f0();
      FUN_100144b0();
      fVar6 = (float10)FUN_100143d0();
      iVar5 = 0;
      do {
        fVar7 = (float10)FUN_100143d0();
        if ((float10)0.1 < fVar7 - (float10)(float)fVar6) {
          if (param_2 == 0) {
            return 0;
          }
          (*DAT_1014e35c)();
          return 0;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    } while (iVar4 < iVar2);
  }
  return 1;
}

