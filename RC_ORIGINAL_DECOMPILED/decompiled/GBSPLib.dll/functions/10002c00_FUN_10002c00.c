/*
 * FUN_10002c00 at 10002c00
 * undefined FUN_10002c00(void)
 * Address ranges: 10002c00-10002c45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __fastcall FUN_10002c00(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    return (float10)*param_2 - (float10)fVar1;
  }
  if (iVar2 != 1) {
    if (iVar2 != 2) {
      fVar3 = (float10)FUN_100143d0();
      return fVar3 - (float10)fVar1;
    }
    return (float10)param_2[2] - (float10)fVar1;
  }
  return (float10)param_2[1] - (float10)fVar1;
}

