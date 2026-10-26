/*
 * FUN_004a90a4 at 004a90a4
 * undefined __register FUN_004a90a4(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 004a90a4-004a90f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a90a4(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_004325e0(param_1,param_2,param_3);
  iVar1 = FUN_004a8f84((int)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a8f84((int)param_1);
    (**(code **)(*piVar2 + 0x60))(piVar2,param_2);
    uVar4 = 0;
    uVar3 = 0;
    piVar2 = (int *)FUN_004a8f84((int)param_1);
    (**(code **)(*piVar2 + 0x7c))(piVar2,0,0,uVar3,uVar4);
  }
  return;
}

