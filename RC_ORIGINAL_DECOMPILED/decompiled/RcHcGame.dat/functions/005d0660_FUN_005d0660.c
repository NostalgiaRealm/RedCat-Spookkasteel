/*
 * FUN_005d0660 at 005d0660
 * undefined FUN_005d0660(void)
 * Address ranges: 005d0660-005d06c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005d0660(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_5 - param_1[1]) / param_2[1];
  fVar2 = fVar1 * param_2[2] + param_1[2];
  if ((((param_3[2] <= fVar2) && (fVar2 <= param_3[5])) &&
      (fVar2 = fVar1 * *param_2 + *param_1, *param_3 <= fVar2)) && (fVar2 <= param_3[3])) {
    *param_4 = fVar1;
    return 1;
  }
  return 0;
}

