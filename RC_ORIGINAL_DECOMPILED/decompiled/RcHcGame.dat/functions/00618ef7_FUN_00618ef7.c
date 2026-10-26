/*
 * FUN_00618ef7 at 00618ef7
 * undefined FUN_00618ef7(void)
 * Address ranges: 00618ef7-00619026
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00618ef7(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_006b2f20;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_00618f82:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_0061901d;
        if (param_3 < 0.0) goto LAB_00618fb4;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_00619027(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_006b2f20;
          if (iVar3 == 1) {
            dVar2 = -_DAT_006b2f20;
          }
          goto LAB_0061901d;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_006b2f40;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_0061901d;
        }
      }
      dVar2 = 1.0;
      goto LAB_0061901d;
    }
    if (1.0 < dVar1) goto LAB_0061901d;
    if (1.0 <= dVar1) {
LAB_00618f47:
      *param_4 = _DAT_006b2f28;
      return 1;
    }
  }
  else {
    if ((param_3._4_4_ != -0x100000) || (param_3._0_4_ != 0)) goto LAB_00618f82;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_00618f47;
      goto LAB_0061901d;
    }
  }
LAB_00618fb4:
  dVar2 = 0.0;
LAB_0061901d:
  *param_4 = dVar2;
  return 0;
}

