/*
 * FUN_004cbcc0 at 004cbcc0
 * undefined __register FUN_004cbcc0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004cbcc0-004cbd4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cbcc0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 uVar6;
  RECT *pRVar7;
  RECT local_14;
  
  piVar1 = (int *)FUN_004cb908(*(int *)(param_4 + -4));
  (**(code **)(*piVar1 + 0x40))(piVar1,param_1[10]);
  (**(code **)(*piVar1 + 0x34))(piVar1,param_1[9]);
  iVar2 = FUN_00421490(piVar1);
  FUN_0041c318(*(int **)(iVar2 + 0x14),0xff00ff);
  uVar3 = (**(code **)(*piVar1 + 0x20))();
  pRVar7 = &local_14;
  uVar4 = (**(code **)(*piVar1 + 0x2c))();
  FUN_00411624(0,0,uVar4,&pRVar7->left,uVar3);
  pRVar7 = &local_14;
  piVar5 = (int *)FUN_00421490(piVar1);
  FUN_0041c9f8(piVar5,pRVar7);
  uVar3 = 0;
  uVar6 = 1;
  iVar2 = FUN_00421490(piVar1);
  FUN_0043ee08(param_1,iVar2,0,uVar6,param_2,uVar3);
  return;
}

