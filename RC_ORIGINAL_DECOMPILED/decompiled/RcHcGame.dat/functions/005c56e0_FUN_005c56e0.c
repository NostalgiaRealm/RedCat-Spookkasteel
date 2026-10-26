/*
 * FUN_005c56e0 at 005c56e0
 * undefined FUN_005c56e0(void)
 * Address ranges: 005c56e0-005c5809
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c56e0(int *param_1,int param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_4;
  
  if (*param_1 == 0) {
    return 0;
  }
  iVar2 = FUN_0059b1e0();
  if (iVar2 == 0) {
    return 0;
  }
  fVar5 = (float10)FUN_005c5810(param_3,param_1[2],param_1[3]);
  fVar1 = (float)fVar5;
  if ((fVar1 < (float)param_1[6]) || ((float)param_1[7] <= fVar1)) {
    iVar3 = FUN_005de510(fVar1);
    iVar4 = iVar3 + 1;
    if (iVar3 < 0) {
      if (param_2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar2 + -1;
      }
    }
    if (iVar2 <= iVar4) {
      if (param_2 == 0) {
        iVar4 = iVar2 + -1;
      }
      else {
        iVar4 = 0;
      }
    }
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    fVar5 = (float10)FUN_005de6b0();
    param_1[6] = (int)(float)fVar5;
    local_4 = (float)fVar5;
    fVar5 = (float10)FUN_005de6b0();
    param_1[7] = (int)(float)fVar5;
  }
  else {
    local_4 = (float)param_1[6];
    iVar3 = param_1[4];
    iVar4 = param_1[5];
    fVar5 = (float10)(float)param_1[7];
  }
  if (iVar3 == iVar4) {
    param_3 = 0.0;
  }
  else {
    param_3 = (float)(((float10)fVar1 - (float10)local_4) / (fVar5 - (float10)local_4));
  }
  iVar2 = param_1[1];
  FUN_005de6a0(param_3,param_4);
  FUN_005de6a0();
  (*(code *)(&PTR_LAB_006a9860)[iVar2])();
  return 1;
}

