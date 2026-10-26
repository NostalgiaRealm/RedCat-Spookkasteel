/*
 * FUN_005b3840 at 005b3840
 * undefined FUN_005b3840(void)
 * Address ranges: 005b3840-005b38d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b3840(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[6];
  FUN_005b2f20();
  param_1[3] = uVar1;
  uVar1 = param_1[4];
  *param_1 = uVar2;
  uVar2 = param_1[1];
  param_1[6] = uVar3;
  uVar3 = param_1[7];
  FUN_005b2f20();
  param_1[1] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  FUN_005b2e60(&local_c);
  param_1[2] = local_c;
  param_1[5] = local_8;
  param_1[8] = local_4;
  return;
}

