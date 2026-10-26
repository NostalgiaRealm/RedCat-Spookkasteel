/*
 * FUN_005b00c0 at 005b00c0
 * undefined FUN_005b00c0(void)
 * Address ranges: 005b00c0-005b01bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b00c0(float *param_1,float *param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  pfVar1 = param_3 + 3;
  *param_3 = *param_2 + *param_3;
  param_3[1] = param_3[1] + param_2[1];
  param_3[2] = param_2[2] + param_3[2];
  *pfVar1 = *param_1;
  param_3[4] = param_1[1];
  param_3[5] = param_1[2];
  *pfVar1 = *pfVar1 + param_2[3];
  pfVar1 = param_3 + 6;
  param_3[4] = param_3[4] + param_2[1];
  param_3[5] = param_2[2] + param_3[5];
  *pfVar1 = *param_1;
  param_3[7] = param_1[1];
  param_3[8] = param_1[2];
  *pfVar1 = *pfVar1 + param_2[3];
  pfVar1 = param_3 + 9;
  param_3[7] = param_3[7] + param_2[1];
  param_3[8] = param_2[5] + param_3[8];
  *pfVar1 = *param_1;
  param_3[10] = param_1[1];
  param_3[0xb] = param_1[2];
  *pfVar1 = *pfVar1 + *param_2;
  param_3[10] = param_3[10] + param_2[1];
  param_3[0xb] = param_3[0xb] + param_2[5];
  iVar3 = (int)param_3 - param_4;
  iVar5 = 4;
  puVar4 = (undefined4 *)(param_4 + 8);
  do {
    fVar2 = *param_3;
    param_3 = param_3 + 3;
    puVar4[-2] = fVar2;
    *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
    iVar5 = iVar5 + -1;
    puVar4[-1] = param_1[1] + param_2[4];
    puVar4 = puVar4 + 3;
  } while (iVar5 != 0);
  return;
}

