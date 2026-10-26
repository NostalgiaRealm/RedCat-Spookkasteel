/*
 * FUN_005b3690 at 005b3690
 * undefined FUN_005b3690(void)
 * Address ranges: 005b3690-005b3727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b3690(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  puVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[1] = local_30[3];
  param_2[4] = local_20;
  *param_2 = local_30[0];
  param_2[2] = local_18;
  param_2[3] = local_30[1];
  param_2[5] = local_14;
  param_2[6] = local_30[2];
  param_2[7] = local_1c;
  param_2[8] = local_10;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  FUN_005b31b0(-local_c,-local_8,-local_4);
  FUN_005b32c0(param_2);
  return;
}

