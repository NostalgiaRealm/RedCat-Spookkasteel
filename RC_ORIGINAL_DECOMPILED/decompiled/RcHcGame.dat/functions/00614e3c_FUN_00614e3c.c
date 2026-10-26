/*
 * FUN_00614e3c at 00614e3c
 * undefined FUN_00614e3c(void)
 * Address ranges: 00614e3c-00614e91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00614e3c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_1[1] = param_1[1] & 0xfffffff0;
    *param_1 = 0;
  }
  else {
    iVar1 = FUN_00614d0f(0xc,0);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00615837(param_2);
    }
    *param_1 = iVar1;
    param_1[1] = ((-(iVar1 != 0) & 0xfd) + 3 ^ param_1[1]) & 0xf ^ param_1[1];
  }
  param_1[1] = param_1[1] & 0xffffff8f;
  return param_1;
}

