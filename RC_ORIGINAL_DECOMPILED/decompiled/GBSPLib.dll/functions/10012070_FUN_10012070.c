/*
 * FUN_10012070 at 10012070
 * undefined FUN_10012070(void)
 * Address ranges: 10012070-100121ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10012070(float param_1,float param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (param_3 != param_4) {
    if (param_5 < DAT_103df87c) {
      piVar3 = &DAT_103df890 + param_5;
      do {
        iVar2 = *piVar3;
        if ((iVar2 != param_3) && (iVar2 != param_4)) {
          FUN_10014560(local_24);
          fVar4 = (float10)FUN_100143d0();
          fVar1 = (float)fVar4;
          if (((float10)param_1 < fVar4) && (fVar1 < param_2)) {
            FUN_100145a0(fVar1,local_18);
            FUN_10014560(local_c);
            fVar4 = (float10)FUN_10014550();
            if (ABS(fVar4) <= (float10)0.05000000074505806) {
              DAT_103df884 = DAT_103df884 + 1;
              FUN_10012070(param_1,fVar1,param_3,iVar2,param_5 + 1);
              FUN_10012070(fVar1,param_2,iVar2,param_4,param_5 + 1);
              return 1;
            }
          }
        }
        param_5 = param_5 + 1;
        piVar3 = piVar3 + 1;
      } while (param_5 < DAT_103df87c);
    }
    if (0x3ff < DAT_103df880) {
      (*DAT_1014e358)(s_Max_Temp_Index_Verts__10039f4c);
      return 0;
    }
    (&DAT_103de87c)[DAT_103df880] = param_3;
    DAT_103df880 = DAT_103df880 + 1;
  }
  return 1;
}

