/*
 * FUN_0046e4b0 at 0046e4b0
 * undefined FUN_0046e4b0(void)
 * Address ranges: 0046e4b0-0046e65a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e4b0(float *param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 float param_6,undefined4 param_7,char param_8,undefined4 param_9,
                 undefined4 param_10)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  FUN_005b2fe0(local_c);
  if (param_8 != '\0') {
    FUN_005b3080();
  }
  FUN_00477d50(local_c,&local_24,&local_18);
  FUN_005b2fa0(param_9);
  FUN_005b2fa0(param_10);
  if (param_3 < param_6) {
    FUN_005b3080();
    FUN_005b3080();
  }
  *param_1 = ((param_2 + -0.5) - local_24) + local_18;
  param_1[1] = ((param_3 + 0.5) - local_20) + local_14;
  param_1[3] = 0.0;
  param_1[4] = 1.0;
  param_1[2] = ((param_4 + 0.0) - local_1c) + local_10;
  param_1[9] = local_18 + 0.5 + local_24 + param_2;
  param_1[10] = local_14 + 0.5 + local_20 + param_3;
  param_1[0xc] = 1.0;
  param_1[0xd] = 1.0;
  param_1[0xb] = local_10 + 0.0 + local_1c + param_4;
  param_1[0x12] = (local_24 + 0.5 + param_2) - local_18;
  param_1[0x13] = (local_20 + -0.5 + param_3) - local_14;
  param_1[0x15] = 1.0;
  param_1[0x16] = 0.0;
  param_1[0x14] = (local_1c + 0.0 + param_4) - local_10;
  param_1[0x1b] = ((param_2 + -0.5) - local_24) - local_18;
  param_1[0x1c] = ((param_3 + -0.5) - local_20) - local_14;
  param_1[0x1e] = 0.0;
  param_1[0x1f] = 0.0;
  param_1[0x1d] = ((param_4 + 0.0) - local_1c) - local_10;
  return;
}

