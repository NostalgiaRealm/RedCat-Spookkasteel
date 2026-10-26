/*
 * FUN_0061517e at 0061517e
 * undefined FUN_0061517e(void)
 * Address ranges: 0061517e-006151bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0061517e(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_1;
  FUN_00614df0(param_1);
  iVar1 = FUN_0061503c();
  if (iVar1 == 0) {
    FUN_006152a2(param_3);
  }
  else {
    FUN_0061548c(param_3);
  }
  FUN_00614df0(&local_c);
  return param_2;
}

