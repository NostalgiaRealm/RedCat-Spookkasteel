/*
 * FUN_1000aebc at 1000aebc
 * undefined4 __cdecl FUN_1000aebc(int param_1, int param_2, double param_3, double * param_4)
 * Address ranges: 1000aebc-1000afeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000aebc(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_100196d0;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_1000af47:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_1000afe2;
        if (param_3 < 0.0) goto LAB_1000af79;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1000afec(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_100196d0;
          if (iVar3 == 1) {
            dVar2 = -_DAT_100196d0;
          }
          goto LAB_1000afe2;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_100196f0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_1000afe2;
        }
      }
      dVar2 = 1.0;
      goto LAB_1000afe2;
    }
    if (1.0 < dVar1) goto LAB_1000afe2;
    if (1.0 <= dVar1) {
LAB_1000af0c:
      *param_4 = _DAT_100196d8;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_1000af47;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_1000af0c;
      goto LAB_1000afe2;
    }
  }
LAB_1000af79:
  dVar2 = 0.0;
LAB_1000afe2:
  *param_4 = dVar2;
  return 0;
}

