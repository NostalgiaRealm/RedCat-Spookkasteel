/*
 * FUN_005c9330 at 005c9330
 * undefined FUN_005c9330(void)
 * Address ranges: 005c9330-005c93cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c9330(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = -param_2[2];
  if (fVar1 < 0.01) {
    fVar1 = 0.01;
  }
  fVar2 = *(float *)(param_1 + 0x24) / fVar1;
  param_3[2] = fVar1 * *(float *)(param_1 + 0x11c);
  fVar1 = fVar2 * *param_2 + *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0xc) <= fVar1) {
    if (*(float *)(param_1 + 0x10) < fVar1) {
      fVar1 = *(float *)(param_1 + 0x10);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xc);
  }
  *param_3 = fVar1;
  fVar1 = *(float *)(param_1 + 0x2c) - fVar2 * param_2[1];
  if (fVar1 < *(float *)(param_1 + 0x14)) {
    param_3[1] = *(float *)(param_1 + 0x14);
    return;
  }
  if (*(float *)(param_1 + 0x18) < fVar1) {
    param_3[1] = *(float *)(param_1 + 0x18);
    return;
  }
  param_3[1] = fVar1;
  return;
}

