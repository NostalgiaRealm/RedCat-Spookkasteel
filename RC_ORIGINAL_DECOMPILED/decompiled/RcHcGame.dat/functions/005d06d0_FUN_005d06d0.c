/*
 * FUN_005d06d0 at 005d06d0
 * undefined FUN_005d06d0(void)
 * Address ranges: 005d06d0-005d0732
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005d06d0(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_5 - param_1[2]) / param_2[2];
  fVar2 = fVar1 * *param_2 + *param_1;
  if ((((*param_3 <= fVar2) && (fVar2 <= param_3[3])) &&
      (fVar2 = fVar1 * param_2[1] + param_1[1], param_3[1] <= fVar2)) && (fVar2 <= param_3[4])) {
    *param_4 = fVar1;
    return 1;
  }
  return 0;
}

