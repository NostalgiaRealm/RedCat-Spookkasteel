/*
 * FUN_005b71a0 at 005b71a0
 * undefined FUN_005b71a0(void)
 * Address ranges: 005b71a0-005b722e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005b71a0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == -1) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    *param_4 = param_1[3];
    param_4[1] = param_1[4];
    param_4[2] = param_1[5];
    return 1;
  }
  puVar1 = (undefined4 *)(param_1[0xb] + param_2 * 0x4c);
  if ((float)puVar1[3] < *(float *)(param_1[0xb] + param_2 * 0x4c)) {
    return 0;
  }
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  *param_4 = puVar1[3];
  param_4[1] = puVar1[4];
  param_4[2] = puVar1[5];
  return 1;
}

