/*
 * FUN_100111c0 at 100111c0
 * undefined FUN_100111c0(void)
 * Address ranges: 100111c0-1001139c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100111c0(undefined4 param_1,int *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  int local_20;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (*param_2 == 0) {
    FUN_100145f0();
  }
  else {
    if (*param_2 == 1) {
      FUN_100145d0();
      return 1;
    }
    iVar3 = 0;
    piVar6 = param_2 + 0x10ac04;
    if (0 < param_2[2]) {
      do {
        iVar1 = FUN_10011170(piVar6,param_1);
        if (iVar1 != 0) {
          FUN_10011030(param_2,piVar6,param_1,param_3);
          return 1;
        }
        piVar6 = piVar6 + 3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2[2]);
    }
    piVar6 = param_2 + 0x100404;
    local_20 = 0;
    if (0 < param_2[1]) {
      piVar4 = param_2 + 0x100406;
      do {
        if ((piVar4[4] == 0) &&
           (fVar7 = (float10)FUN_100143d0(), (float10)0.0 <= fVar7 - (float10)(float)piVar4[3])) {
          iVar3 = param_2[*piVar6 + 0x100004];
          iVar1 = param_2[piVar4[-1] + 0x100004];
          FUN_10014560(local_18);
          FUN_100144b0();
          FUN_10014560(local_c);
          fVar7 = (float10)FUN_100143d0();
          if (((float10)0.0 <= fVar7) && ((float)fVar7 <= 1.0)) {
            iVar5 = 3;
            pfVar2 = (float *)(iVar3 + 0x60);
            do {
              iVar5 = iVar5 + -1;
              *param_3 = (*(float *)((iVar1 - iVar3) + (int)pfVar2) - *pfVar2) * (float)fVar7 +
                         *pfVar2;
              pfVar2 = pfVar2 + 1;
              param_3 = param_3 + 1;
            } while (iVar5 != 0);
            return 1;
          }
        }
        piVar6 = piVar6 + 7;
        piVar4 = piVar4 + 7;
        local_20 = local_20 + 1;
      } while (local_20 < param_2[1]);
    }
    iVar3 = FUN_100113a0(param_1,param_2,param_3);
    if (iVar3 == 0) {
      (*DAT_1014e358)(s_SampleTriangulation__Could_not_f_10039a30);
      return 0;
    }
  }
  return 1;
}

