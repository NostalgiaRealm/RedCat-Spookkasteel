/*
 * FUN_005f93b0 at 005f93b0
 * undefined FUN_005f93b0(void)
 * Address ranges: 005f93b0-005f9401
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f93b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00651004;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 1;
  }
  puVar1 = (undefined4 *)param_1[2];
  for (puVar2 = (undefined4 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(0);
  }
  FUN_005fe5f0(param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

