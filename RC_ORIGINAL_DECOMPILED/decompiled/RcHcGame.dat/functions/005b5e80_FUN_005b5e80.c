/*
 * FUN_005b5e80 at 005b5e80
 * undefined FUN_005b5e80(void)
 * Address ranges: 005b5e80-005b5f36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b5e80(float *param_1,undefined4 *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  if (0.0 <= *param_1) {
    local_c = param_1[1];
    local_8 = param_1[2];
    local_4 = param_1[3];
  }
  else {
    local_c = -param_1[1];
    local_8 = -param_1[2];
    local_4 = -param_1[3];
  }
  fVar1 = (float10)FUN_0060dcd0();
  if (fVar1 < (float10)0.0001) {
    *param_2 = 0;
    param_2[1] = local_c;
    param_2[2] = local_8;
    param_2[3] = local_4;
    return;
  }
  fVar2 = (float10)fsin(fVar1);
  *param_2 = 0;
  fVar1 = fVar1 / fVar2;
  param_2[1] = (float)(fVar1 * (float10)local_c);
  param_2[2] = (float)(fVar1 * (float10)local_8);
  param_2[3] = (float)(fVar1 * (float10)local_4);
  return;
}

