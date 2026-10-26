/*
 * FUN_1002c1dc at 1002c1dc
 * undefined FUN_1002c1dc(void)
 * Address ranges: 1002c1dc-1002c30b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1002c1dc(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_1003ceb8;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_1002c267:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_1002c302;
        if (param_3 < 0.0) goto LAB_1002c299;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1002c30c(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_1003ceb8;
          if (iVar3 == 1) {
            dVar2 = -_DAT_1003ceb8;
          }
          goto LAB_1002c302;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_1003ced8;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_1002c302;
        }
      }
      dVar2 = 1.0;
      goto LAB_1002c302;
    }
    if (1.0 < dVar1) goto LAB_1002c302;
    if (1.0 <= dVar1) {
LAB_1002c22c:
      *param_4 = _DAT_1003cec0;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_1002c267;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_1002c22c;
      goto LAB_1002c302;
    }
  }
LAB_1002c299:
  dVar2 = 0.0;
LAB_1002c302:
  *param_4 = dVar2;
  return 0;
}

