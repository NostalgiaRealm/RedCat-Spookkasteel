/*
 * FUN_005b0940 at 005b0940
 * undefined FUN_005b0940(void)
 * Address ranges: 005b0940-005b09e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b0940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  fVar6 = (float)param_5;
  uVar9 = 0x437f0000;
  uVar5 = 0x437f0000;
  fVar7 = (float)param_6;
  fVar8 = (float)param_7;
  fVar2 = (float)param_8;
  fVar3 = (float)param_9;
  fVar4 = (float)param_10;
  uVar1 = FUN_005b0300(fVar2,fVar3,fVar4,0x437f0000,fVar6,fVar7,fVar8,0x437f0000);
  FUN_005b04b0(param_1,param_3,param_4,fVar6,fVar7,fVar8,uVar9,fVar2,fVar3,fVar4,uVar5,0x3f23d70a,
               uVar1);
  return;
}

