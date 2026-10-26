/*
 * FUN_005b7bd0 at 005b7bd0
 * undefined FUN_005b7bd0(void)
 * Address ranges: 005b7bd0-005b7c53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005b7bd0(undefined4 *param_1,undefined4 *param_2,float *param_3,undefined4 param_4,
            undefined4 param_5,float param_6)

{
  float fVar1;
  int iVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = *param_3 * 1.0039216;
  param_1[4] = param_3[1] * 1.0039216;
  fVar1 = param_3[2];
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[9] = param_6;
  param_1[5] = fVar1 * 1.0039216;
  param_1[0xb] = param_6 * param_6;
  param_1[10] = param_6 + param_6;
  if ((code *)param_1[0xd] != (code *)0x0) {
    iVar2 = (*(code *)param_1[0xd])(param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

