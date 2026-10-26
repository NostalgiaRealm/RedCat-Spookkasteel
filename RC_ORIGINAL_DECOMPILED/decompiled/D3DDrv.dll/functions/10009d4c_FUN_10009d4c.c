/*
 * FUN_10009d4c at 10009d4c
 * undefined4 __cdecl FUN_10009d4c(int param_1, int param_2, double param_3, double * param_4)
 * Address ranges: 10009d4c-10009e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10009d4c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < 0.0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_10016200;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_10009dd7:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (0.0 < param_3) goto LAB_10009e72;
        if (param_3 < 0.0) goto LAB_10009e09;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_10009e7c(param_3);
        if (0.0 < param_3) {
          dVar2 = _DAT_10016200;
          if (iVar3 == 1) {
            dVar2 = -_DAT_10016200;
          }
          goto LAB_10009e72;
        }
        if (param_3 < 0.0) {
          dVar2 = _DAT_10016220;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_10009e72;
        }
      }
      dVar2 = 1.0;
      goto LAB_10009e72;
    }
    if (1.0 < dVar1) goto LAB_10009e72;
    if (1.0 <= dVar1) {
LAB_10009d9c:
      *param_4 = _DAT_10016208;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_10009dd7;
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) goto LAB_10009d9c;
      goto LAB_10009e72;
    }
  }
LAB_10009e09:
  dVar2 = 0.0;
LAB_10009e72:
  *param_4 = dVar2;
  return 0;
}

