/*
 * FUN_005b4730 at 005b4730
 * undefined FUN_005b4730(void)
 * Address ranges: 005b4730-005b485c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b4730(float *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [48];
  
  iVar1 = FUN_005b71a0(&local_60,&local_54);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005d0160();
  local_60 = local_60 * local_48;
  local_5c = local_5c * local_44;
  local_58 = local_58 * local_40;
  local_54 = local_54 * local_48;
  local_50 = local_50 * local_44;
  local_4c = local_4c * local_40;
  FUN_005cf9a0(local_30);
  FUN_005b2fe0(&local_3c);
  *param_2 = local_3c;
  param_2[2] = 0;
  param_2[1] = 0;
  param_3[1] = local_38;
  param_3[2] = 0;
  *param_3 = 0;
  param_4[2] = local_34;
  param_4[1] = 0;
  *param_4 = 0;
  FUN_005b3470(&local_60);
  FUN_005b35b0(param_2);
  FUN_005b35b0(param_3);
  FUN_005b35b0(param_4);
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  return 1;
}

