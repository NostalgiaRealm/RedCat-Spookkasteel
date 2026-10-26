/*
 * FUN_005d09d0 at 005d09d0
 * undefined FUN_005d09d0(void)
 * Address ranges: 005d09d0-005d0aac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d09d0(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  float10 fVar5;
  int local_10;
  undefined1 local_c [12];
  
  local_10 = 0;
  piVar4 = param_3 + 1;
  if (0 < *param_1) {
    iVar2 = (int)param_3 - (int)param_1;
    pfVar3 = (float *)((int)piVar4 + (0xc - (int)param_3) + (int)param_1);
    do {
      piVar4[4] = (int)pfVar3[1];
      FUN_005d0bb0(pfVar3 + -3,param_2,piVar4);
      *(undefined4 *)(iVar2 + (int)pfVar3) = 0;
      if (*pfVar3 != 0.0) {
        FUN_005b3070();
        FUN_005b3020(*pfVar3,local_c);
        uVar1 = FUN_0059be40();
        FUN_005d0bd0(local_c,local_c,uVar1);
        fVar5 = (float10)FUN_005b2e40();
        *(float *)(iVar2 + (int)pfVar3) = (float)(fVar5 + (float10)*(float *)(iVar2 + (int)pfVar3));
      }
      local_10 = local_10 + 1;
      piVar4 = piVar4 + 5;
      pfVar3 = pfVar3 + 5;
    } while (local_10 < *param_1);
  }
  *param_3 = *param_1;
  FUN_005d0c90(param_3);
  return;
}

