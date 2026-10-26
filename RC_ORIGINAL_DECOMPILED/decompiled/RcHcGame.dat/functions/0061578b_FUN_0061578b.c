/*
 * FUN_0061578b at 0061578b
 * undefined FUN_0061578b(void)
 * Address ranges: 0061578b-006157f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0061578b(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_006156c2();
  *param_1 = &PTR_LAB_00652674;
  if (((param_3 != 0) || ((param_2 != 0 && (param_3 = FUN_0061591e(param_2), param_3 != 0)))) &&
     (param_2 != 0)) {
    iVar1 = FUN_00614d0f(param_3,0);
    param_1[2] = iVar1;
    param_1[3] = param_3;
    if (iVar1 == 0) {
      return param_1;
    }
    FUN_0061592e(iVar1,param_2,param_3);
    return param_1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}

