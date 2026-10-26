/*
 * FUN_006184a1 at 006184a1
 * undefined FUN_006184a1(void)
 * Address ranges: 006184a1-00618538
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_006184a1(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_006187ec(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_00618539();
  }
  iVar1 = FUN_00618ad6(param_1);
  if ((DAT_006b3ca8 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_00618a03(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_00618a8b(iVar1);
  FUN_00618c76();
  return (float10)param_4;
}

