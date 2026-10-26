/*
 * FUN_005c92e0 at 005c92e0
 * undefined FUN_005c92e0(void)
 * Address ranges: 005c92e0-005c932c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c92e0(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = -param_2[2];
  if (fVar1 == 0.0) {
    fVar1 = 0.01;
  }
  fVar2 = *(float *)(param_1 + 0x24) / fVar1;
  param_3[2] = fVar1 * *(float *)(param_1 + 0x11c);
  *param_3 = fVar2 * *param_2 + *(float *)(param_1 + 0x28);
  param_3[1] = *(float *)(param_1 + 0x2c) - fVar2 * param_2[1];
  return;
}

