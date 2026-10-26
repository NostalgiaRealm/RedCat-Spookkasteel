/*
 * FUN_005d0740 at 005d0740
 * undefined FUN_005d0740(void)
 * Address ranges: 005d0740-005d08e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d0740(int *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_005c93d0(&local_18);
  local_8 = 0.0;
  local_4 = -local_18;
  local_c = param_2;
  FUN_005b2f20();
  param_1[1] = (int)local_c;
  local_c = -param_2;
  param_1[2] = (int)local_8;
  param_1[3] = (int)local_4;
  FUN_005b2f20();
  param_1[6] = (int)local_c;
  param_1[7] = (int)local_8;
  param_1[8] = (int)local_4;
  FUN_005c93f0(&local_18);
  local_c = 0.0;
  local_4 = -local_18;
  local_8 = param_2;
  FUN_005b2f20();
  param_1[0xb] = (int)local_c;
  param_1[0xc] = (int)local_8;
  param_1[0xd] = (int)local_4;
  local_8 = -param_2;
  FUN_005b2f20();
  *param_1 = 4;
  param_1[0x10] = (int)local_c;
  param_1[0x11] = (int)local_8;
  param_1[0x12] = (int)local_4;
  iVar2 = 0;
  piVar1 = param_1;
  do {
    piVar1[4] = 0;
    piVar1[5] = 6;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 5;
  } while (iVar2 < *param_1);
  FUN_005c8fe0(&local_10);
  if (local_14 != 0) {
    fVar3 = (float10)FUN_005c8fb0();
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 1.0;
    FUN_005b2f20();
    param_1[0x19] = 6;
    *param_1 = 5;
    param_1[0x15] = (int)local_c;
    param_1[0x16] = (int)local_8;
    param_1[0x17] = (int)local_4;
    param_1[0x18] = (int)-(local_10 / (float)fVar3);
  }
  FUN_005d0c90(param_1);
  return;
}

