/*
 * FUN_005b96a0 at 005b96a0
 * undefined FUN_005b96a0(void)
 * Address ranges: 005b96a0-005b9802
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b96a0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int local_34;
  float local_30 [12];
  
  puVar7 = (undefined4 *)(param_2 + 0x44);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar1 = local_30 + 3;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar1 = 0.0;
    pfVar1 = pfVar1 + 1;
  }
  pfVar1 = (float *)(param_2 + 0x80);
  FUN_005b3000(local_30);
  FUN_005b2fa0(0x3f000000);
  pfVar6 = local_30;
  pfVar2 = local_30 + 3;
  pfVar5 = local_30;
  local_34 = 3;
  do {
    pfVar6 = pfVar6 + 3;
    *pfVar2 = *pfVar1 - *pfVar5;
    FUN_005b35b0(pfVar6);
    pfVar1 = pfVar1 + 1;
    pfVar5 = pfVar5 + 1;
    pfVar2 = pfVar2 + 4;
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  pfVar1 = local_30 + 3;
  iVar3 = 3;
  do {
    iVar4 = 3;
    pfVar2 = pfVar1;
    do {
      pfVar1 = pfVar2 + 1;
      iVar4 = iVar4 + -1;
      *pfVar2 = ABS(*pfVar2);
      pfVar2 = pfVar1;
    } while (iVar4 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 3;
  pfVar1 = (float *)(param_2 + 0x98);
  pfVar2 = local_30 + 6;
  pfVar5 = pfVar1;
  do {
    iVar3 = iVar3 + -1;
    *pfVar5 = pfVar2[-3] + pfVar2[3] + *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar5 = pfVar5 + 1;
  } while (iVar3 != 0);
  pfVar2 = (float *)(param_2 + 0x8c);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0xa0);
  FUN_005b3080();
  FUN_005b3000(local_30);
  FUN_005b3000(pfVar2);
  FUN_005b3000(pfVar1);
  iVar3 = 3;
  do {
    iVar3 = iVar3 + -1;
    pfVar2[3] = pfVar2[3] + 1.0;
    *pfVar2 = *pfVar2 - 1.0;
    pfVar2 = pfVar2 + 1;
  } while (iVar3 != 0);
  *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) | 1;
  return;
}

