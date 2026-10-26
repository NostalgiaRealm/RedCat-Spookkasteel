/*
 * FUN_10009f40 at 10009f40
 * undefined FUN_10009f40(void)
 * Address ranges: 10009f40-10009f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_10009f40(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    return (float10)*param_1 - (float10)fVar1;
  }
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      fVar3 = (float10)FUN_100143d0();
      return fVar3 - (float10)fVar1;
    }
    return (float10)param_1[2] - (float10)fVar1;
  }
  return (float10)param_1[1] - (float10)fVar1;
}

