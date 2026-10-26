/*
 * FUN_100087e0 at 100087e0
 * undefined FUN_100087e0(void)
 * Address ranges: 100087e0-1000889b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_100087e0(int param_1,float param_2,float param_3,float param_4,char param_5)

{
  int iVar1;
  float10 fVar2;
  
  if ((param_5 != '\0') && (*(char *)(param_1 + 0x48) != '\0')) {
    return (float10)0.0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 1) {
    if (*(float *)(param_1 + 0x3c) < param_2) {
      return (float10)0.0;
    }
  }
  else if (((1 < iVar1) && (iVar1 < 4)) && (*(float *)(param_1 + 0x40) <= param_2)) {
    if (iVar1 == 2) {
      fVar2 = (float10)FUN_10027dc0();
      return ((float10)1.0 - fVar2) * (float10)param_3 * (float10)param_4;
    }
    fVar2 = (float10)FUN_10027dc0();
    return fVar2 * (float10)param_3 * (float10)param_4;
  }
  return (float10)param_3 * (float10)param_4;
}

