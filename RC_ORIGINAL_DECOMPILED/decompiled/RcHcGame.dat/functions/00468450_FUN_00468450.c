/*
 * FUN_00468450 at 00468450
 * undefined FUN_00468450(void)
 * Address ranges: 00468450-0046853c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00468450(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined2 extraout_var;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)FUN_00409e30(param_2);
  fVar4 = fVar3 * (float10)*(float *)(param_1 + 0x16b0);
  if (*(char *)(param_1 + 0x16a0) == '\0') {
    *param_3 = (float)((float10)*param_3 - fVar4);
    param_3[1] = (float)((float10)param_3[1] - fVar3 * (float10)*(float *)(param_1 + 0x16b4));
    fVar3 = (float10)param_3[2] - fVar3 * (float10)*(float *)(param_1 + 0x16b8);
  }
  else {
    *param_3 = (float)(fVar4 + (float10)*param_3);
    param_3[1] = (float)(fVar3 * (float10)*(float *)(param_1 + 0x16b4) + (float10)param_3[1]);
    fVar3 = fVar3 * (float10)*(float *)(param_1 + 0x16b8) + (float10)param_3[2];
  }
  param_3[2] = (float)fVar3;
  if (*(float *)(param_1 + 0x16c8) < *param_3) {
    *param_3 = *(float *)(param_1 + 0x16c8);
    fVar2 = *(float *)(param_1 + 0x16cc);
    param_3[1] = fVar2;
    param_3[2] = *(float *)(param_1 + 0x16d0);
    *(bool *)(param_1 + 0x16a0) = *(char *)(param_1 + 0x16a0) == '\0';
    return CONCAT31((int3)((uint)fVar2 >> 8),1);
  }
  fVar2 = *param_3;
  fVar1 = *(float *)(param_1 + 0x16bc);
  if (fVar2 < fVar1) {
    *param_3 = *(float *)(param_1 + 0x16bc);
    fVar2 = *(float *)(param_1 + 0x16c0);
    param_3[1] = fVar2;
    param_3[2] = *(float *)(param_1 + 0x16c4);
    *(bool *)(param_1 + 0x16a0) = *(char *)(param_1 + 0x16a0) == '\0';
    return CONCAT31((int3)((uint)fVar2 >> 8),1);
  }
  return CONCAT22(extraout_var,
                  (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe);
}

