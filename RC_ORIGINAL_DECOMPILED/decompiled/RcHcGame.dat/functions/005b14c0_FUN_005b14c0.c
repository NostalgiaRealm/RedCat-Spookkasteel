/*
 * FUN_005b14c0 at 005b14c0
 * undefined FUN_005b14c0(void)
 * Address ranges: 005b14c0-005b1515
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b14c0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_005b2e40();
  fVar1 = (float)(fVar2 - (float10)*(float *)(param_1 + 0x28));
  fVar2 = (float10)FUN_005b2e40();
  fVar2 = fVar2 - (float10)*(float *)(param_1 + 0x28);
  if ((float10)fVar1 == fVar2) {
    *param_4 = 0.0;
    return;
  }
  *param_4 = (float)((float10)fVar1 / ((float10)fVar1 - fVar2));
  return;
}

