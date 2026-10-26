/*
 * FUN_10011030 at 10011030
 * undefined FUN_10011030(void)
 * Address ranges: 10011030-10011162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10011030(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_100145d0();
  FUN_10014560(local_c);
  FUN_10014560(local_18);
  fVar6 = (float10)FUN_100143d0();
  iVar5 = param_2[2];
  fVar1 = *(float *)(*param_2 + 0x14);
  fVar7 = (float10)FUN_100143d0();
  fVar2 = *(float *)(iVar5 + 0x14);
  fVar8 = (float10)FUN_100143d0();
  fVar3 = (float)(fVar8 - (float10)*(float *)(param_2[2] + 0x14));
  fVar8 = (float10)FUN_100143d0();
  fVar4 = (float)(fVar8 - (float10)*(float *)(*param_2 + 0x14));
  if ((0.1 <= ABS(fVar3)) && (0.1 <= ABS(fVar4))) {
    FUN_100145a0((float)(fVar6 - (float10)fVar1) / fVar4,param_4);
    FUN_100145a0((float)(fVar7 - (float10)fVar2) / fVar3,param_4);
    return;
  }
  FUN_100145d0();
  return;
}

