/*
 * FUN_006151bd at 006151bd
 * undefined FUN_006151bd(void)
 * Address ranges: 006151bd-006151fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_006151bd(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_1;
  FUN_00614df0(param_1);
  iVar1 = FUN_0061503c();
  if (iVar1 == 0) {
    FUN_00615307(param_3);
  }
  else {
    FUN_006154a5(param_3);
  }
  FUN_00614df0(&local_c);
  return param_2;
}

