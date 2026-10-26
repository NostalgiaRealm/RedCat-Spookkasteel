/*
 * FUN_005caa50 at 005caa50
 * undefined FUN_005caa50(void)
 * Address ranges: 005caa50-005cab3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_005caa50(undefined4 *param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_18 [6];
  
  puVar2 = param_1;
  iVar4 = *(int *)(param_3 + 0x10);
  if (iVar4 < 3) {
    bVar3 = *(float *)(param_3 + 0xc) <= *(float *)(param_2 + iVar4 * 4);
    if ((float)param_1[iVar4] < *(float *)(param_3 + 0xc)) {
      bVar3 = bVar3 | 2;
    }
    return bVar3;
  }
  iVar5 = param_3 - (int)param_1;
  iVar4 = (int)local_18 + (0xc - (int)param_1);
  param_2 = param_2 - (int)param_1;
  iVar6 = (int)local_18 - (int)param_1;
  param_1 = (undefined4 *)0x3;
  do {
    if (0.0 <= *(float *)((int)puVar2 + iVar5)) {
      *(undefined4 *)(iVar4 + (int)puVar2) = *puVar2;
      *(undefined4 *)(iVar6 + (int)puVar2) = *(undefined4 *)(param_2 + (int)puVar2);
    }
    else {
      *(undefined4 *)(iVar6 + (int)puVar2) = *puVar2;
      *(undefined4 *)(iVar4 + (int)puVar2) = *(undefined4 *)(param_2 + (int)puVar2);
    }
    puVar2 = puVar2 + 1;
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (param_1 != (undefined4 *)0x0);
  fVar7 = (float10)FUN_005b2e40();
  fVar1 = *(float *)(param_3 + 0xc);
  fVar8 = (float10)FUN_005b2e40();
  bVar3 = 0.0 <= (float)(fVar7 - (float10)fVar1);
  if (fVar8 - (float10)*(float *)(param_3 + 0xc) < (float10)0.0) {
    bVar3 = bVar3 | 2;
  }
  return bVar3;
}

