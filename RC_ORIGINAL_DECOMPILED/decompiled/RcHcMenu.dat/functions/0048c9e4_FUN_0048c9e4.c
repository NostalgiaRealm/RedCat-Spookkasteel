/*
 * FUN_0048c9e4 at 0048c9e4
 * undefined4 __register FUN_0048c9e4(int * param_1, int * param_2)
 * Address ranges: 0048c9e4-0048ca1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048c9e4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&LAB_0048c40c);
  iVar2 = (**(code **)(*piVar1 + 0x6c))();
  iVar3 = (**(code **)(*param_1 + 0x6c))();
  uVar4 = FUN_0045a4b8(iVar3,iVar2);
  return uVar4;
}

