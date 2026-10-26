/*
 * FUN_005d0200 at 005d0200
 * undefined FUN_005d0200(void)
 * Address ranges: 005d0200-005d0270
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_005d0200(float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  if (param_2 <= param_5) {
    *param_1 = param_2;
    param_1[3] = param_5;
  }
  else {
    param_1[3] = param_2;
    *param_1 = param_5;
  }
  if (param_3 <= param_6) {
    param_1[1] = param_3;
    param_1[4] = param_6;
  }
  else {
    param_1[4] = param_3;
    param_1[1] = param_6;
  }
  if (param_7 < param_4) {
    param_1[5] = param_4;
    param_1[2] = param_7;
    return;
  }
  param_1[2] = param_4;
  param_1[5] = param_7;
  return;
}

