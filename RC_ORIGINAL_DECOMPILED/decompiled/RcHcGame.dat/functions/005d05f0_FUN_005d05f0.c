/*
 * FUN_005d05f0 at 005d05f0
 * undefined FUN_005d05f0(void)
 * Address ranges: 005d05f0-005d0653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005d05f0(float *param_1,float *param_2,int param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_5 - *param_1) / *param_2;
  fVar2 = fVar1 * param_2[1] + param_1[1];
  if ((((*(float *)(param_3 + 4) <= fVar2) && (fVar2 <= *(float *)(param_3 + 0x10))) &&
      (fVar2 = fVar1 * param_2[2] + param_1[2], *(float *)(param_3 + 8) <= fVar2)) &&
     (fVar2 <= *(float *)(param_3 + 0x14))) {
    *param_4 = fVar1;
    return 1;
  }
  return 0;
}

