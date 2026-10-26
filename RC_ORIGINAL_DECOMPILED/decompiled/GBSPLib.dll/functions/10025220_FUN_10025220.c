/*
 * FUN_10025220 at 10025220
 * undefined FUN_10025220(void)
 * Address ranges: 10025220-100252dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10025220(undefined4 param_1,float *param_2)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_1001e2c0(&local_10);
  FUN_1001e2f0(&local_20);
  FUN_1001e130(&local_10);
  FUN_1001e130(&local_20);
  if (local_10 * local_10 + local_c * local_c + local_8 * local_8 + local_4 * local_4 <=
      local_20 * local_20 + local_1c * local_1c + local_18 * local_18 + local_14 * local_14) {
    param_2[1] = -param_2[1];
    param_2[2] = -param_2[2];
    param_2[3] = -param_2[3];
    *param_2 = -*param_2;
  }
  return;
}

