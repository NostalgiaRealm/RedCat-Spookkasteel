/*
 * FUN_005c1df0 at 005c1df0
 * undefined FUN_005c1df0(void)
 * Address ranges: 005c1df0-005c1f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c1df0(int param_1,int param_2,float param_3)

{
  int iVar1;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0xac) == 0)) {
    *(float *)(param_1 + 0xbc) = param_3;
    goto LAB_005c1f1f;
  }
  if (ABS(*(float *)(param_1 + 0xbc) - param_3) <= 0.1) goto LAB_005c1f1f;
  iVar1 = FUN_005c6a70();
  if ((iVar1 == 0) && (*(int *)(param_1 + 0xac) != 0)) {
    if (((*(float *)(param_1 + 0xc0) < *(float *)(param_1 + 0xbc)) ||
        (*(float *)(param_1 + 0xbc) < param_3)) &&
       ((*(float *)(param_1 + 0xbc) < *(float *)(param_1 + 0xc0) ||
        (param_3 < *(float *)(param_1 + 0xbc))))) {
      iVar1 = FUN_005c23a0(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      *(float *)(param_1 + 0xbc) = param_3;
      *(float *)(param_1 + 0xc0) = param_3;
      goto LAB_005c1f02;
    }
    iVar1 = FUN_005d9950(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
    *(float *)(param_1 + 0xbc) = param_3;
    iVar1 = FUN_005d9950(param_1,0);
  }
  else {
    iVar1 = FUN_005c23a0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(float *)(param_1 + 0xbc) = param_3;
    *(float *)(param_1 + 0xc0) = param_3;
LAB_005c1f02:
    iVar1 = FUN_005c1f40(param_1);
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_005c1f1f:
  *(undefined4 *)(param_1 + 0xc4) = 1;
  return 1;
}

