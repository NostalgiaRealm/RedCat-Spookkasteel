/*
 * FUN_005c9000 at 005c9000
 * undefined FUN_005c9000(void)
 * Address ranges: 005c9000-005c9033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c9000(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = __ftol();
  *param_2 = uVar1;
  uVar1 = __ftol();
  param_2[1] = uVar1;
  uVar1 = __ftol();
  param_2[2] = uVar1;
  uVar1 = __ftol();
  param_2[3] = uVar1;
  return;
}

