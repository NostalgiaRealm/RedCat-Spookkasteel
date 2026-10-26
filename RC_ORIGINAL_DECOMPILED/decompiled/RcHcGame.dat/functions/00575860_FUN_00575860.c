/*
 * FUN_00575860 at 00575860
 * undefined FUN_00575860(void)
 * Address ranges: 00575860-00575963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00575860(int param_1,int param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  
  param_2 = *(int *)(param_1 + 0x214) + param_2;
  *(int *)(param_1 + 0x214) = param_2;
  if (1000.0 <= (float)param_2) {
    uVar1 = __ftol();
    *(undefined4 *)(param_1 + 0x214) = uVar1;
  }
  if (*(char *)(param_1 + 0x210) == '\0') {
    if (*(char *)(param_1 + 0x211) == '\0') {
      fVar2 = (float10)0.0;
      fVar3 = (float10)0.0;
    }
    else {
      fVar2 = (float10)fsin((float10)*(int *)(param_1 + 0x214) * (float10)0.06283186);
      fVar2 = (fVar2 + (float10)1.0) * (float10)0.025;
      fVar3 = (float10)fsin((float10)*(int *)(param_1 + 0x214) * (float10)0.09424778);
      fVar3 = (fVar3 + (float10)1.0) * (float10)0.025;
    }
  }
  else {
    fVar2 = (float10)fsin((float10)*(int *)(param_1 + 0x214) * (float10)0.0062831854);
    fVar3 = (fVar2 + (float10)1.0) * (float10)0.05;
    fVar2 = fVar3;
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(float *)(param_1 + 400) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f8) = 0x3f800000;
  *(float *)(param_1 + 0x1b4) = (float)((float10)1.0 - fVar2);
  *(float *)(param_1 + 0x1d8) = (float)((float10)1.0 - fVar3);
  *(float *)(param_1 + 0x1fc) = (float)fVar3;
  return;
}

