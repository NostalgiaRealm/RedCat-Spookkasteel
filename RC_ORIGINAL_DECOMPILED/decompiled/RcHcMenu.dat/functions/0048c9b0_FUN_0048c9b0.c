/*
 * FUN_0048c9b0 at 0048c9b0
 * undefined4 __register FUN_0048c9b0(int * param_1, int * param_2)
 * Address ranges: 0048c9b0-0048c9e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048c9b0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00403224(param_2,(int)&LAB_0048c40c);
  uVar2 = (**(code **)(*piVar1 + 0x6c))();
  uVar2 = (**(code **)(*param_1 + 0x70))(param_1,uVar2);
  return uVar2;
}

