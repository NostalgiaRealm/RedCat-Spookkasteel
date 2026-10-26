/*
 * FUN_005c58f0 at 005c58f0
 * undefined FUN_005c58f0(void)
 * Address ranges: 005c58f0-005c5a32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c58f0(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_8;
  
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0059b1e0();
  }
  if (param_1[8] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0059b1e0();
  }
  if (0 < iVar3) {
    fVar5 = (float10)FUN_005de6b0();
    fVar1 = (float)fVar5;
    local_8 = fVar1;
    if (1 < iVar3) {
      fVar5 = (float10)FUN_005de6b0();
      local_8 = (float)fVar5;
    }
    if (iVar4 < 1) {
      *param_2 = fVar1;
      *param_3 = local_8;
      return 1;
    }
    fVar5 = (float10)FUN_005de6b0();
    fVar2 = (float)fVar5;
    if (iVar4 < 2) {
      fVar5 = (float10)fVar2;
    }
    else {
      fVar5 = (float10)FUN_005de6b0();
    }
    if (fVar1 < fVar2) {
      fVar2 = fVar1;
    }
    *param_2 = fVar2;
    if (fVar5 <= (float10)local_8) {
      fVar5 = (float10)local_8;
    }
    *param_3 = (float)fVar5;
    return 1;
  }
  if (iVar4 < 1) {
    return 0;
  }
  fVar5 = (float10)FUN_005de6b0();
  *param_2 = (float)fVar5;
  if (iVar4 < 2) {
    *param_3 = (float)fVar5;
    return 1;
  }
  fVar5 = (float10)FUN_005de6b0();
  *param_3 = (float)fVar5;
  return 1;
}

