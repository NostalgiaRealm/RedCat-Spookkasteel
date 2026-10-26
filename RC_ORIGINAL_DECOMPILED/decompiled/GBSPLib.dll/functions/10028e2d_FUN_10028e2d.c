/*
 * FUN_10028e2d at 10028e2d
 * undefined FUN_10028e2d(void)
 * Address ranges: 10028e2d-10028eda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10028e2d(int param_1,uint param_2)

{
  uint in_EAX;
  bool in_ZF;
  short in_FPUControlWord;
  float10 in_ST0;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (in_ZF) {
    if (((in_EAX & 0xfffff) != 0) || (fVar1 = _DAT_1003d0f0, param_1 != 0)) {
      fVar1 = (float10)FUN_1002c07c();
    }
LAB_10028ebc:
    if (DAT_1052a3d0 == 0) {
      fVar1 = (float10)__startOneArgErrorHandling();
      return fVar1;
    }
  }
  else {
    if (in_FPUControlWord != 0x27f) {
      in_EAX = FUN_1002c065();
      in_ST0 = extraout_ST0;
    }
    if (in_EAX < 0x3ff00000) {
      fVar1 = (float10)fpatan(in_ST0,SQRT(((float10)1 - in_ST0) * ((float10)1 + in_ST0)));
    }
    else {
      fVar1 = _DAT_1003d0f0;
      if ((0x3ff00000 < in_EAX) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) goto LAB_10028ebc;
      fVar1 = _DAT_1003d0fa;
      if ((param_2 & 0x80000000) != 0) {
        fVar1 = -_DAT_1003d0fa;
      }
    }
    if (DAT_1052a3d0 == 0) {
      fVar1 = (float10)__math_exit();
      return fVar1;
    }
  }
  return fVar1;
}

