/*
 * FUN_10015d70 at 10015d70
 * undefined FUN_10015d70(void)
 * Address ranges: 10015d70-10015f19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015d70(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = local_60;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *param_1;
    param_1 = param_1 + 1;
    pfVar2 = pfVar2 + 1;
  }
  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *param_2;
    param_2 = param_2 + 1;
    pfVar2 = pfVar2 + 1;
  }
  *param_3 = local_30[0] * local_60[0] + local_30[3] * local_60[1] + local_18 * local_60[2];
  param_3[1] = local_30[1] * local_60[0] + local_20 * local_60[1] + local_14 * local_60[2];
  param_3[2] = local_30[2] * local_60[0] + local_1c * local_60[1] + local_10 * local_60[2];
  param_3[3] = local_60[3] * local_30[0] + local_50 * local_30[3] + local_4c * local_18;
  param_3[4] = local_60[3] * local_30[1] + local_50 * local_20 + local_4c * local_14;
  param_3[5] = local_60[3] * local_30[2] + local_50 * local_1c + local_4c * local_10;
  param_3[6] = local_48 * local_30[0] + local_44 * local_30[3] + local_40 * local_18;
  param_3[7] = local_48 * local_30[1] + local_44 * local_20 + local_40 * local_14;
  param_3[8] = local_48 * local_30[2] + local_44 * local_1c + local_40 * local_10;
  param_3[9] = local_c * local_60[0] + local_8 * local_60[1] + local_4 * local_60[2] + local_3c;
  param_3[10] = local_c * local_60[3] + local_8 * local_50 + local_4 * local_4c + local_38;
  param_3[0xb] = local_c * local_48 + local_8 * local_44 + local_4 * local_40 + local_34;
  return;
}

