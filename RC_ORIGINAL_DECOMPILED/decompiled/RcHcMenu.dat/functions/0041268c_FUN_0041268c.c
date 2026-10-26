/*
 * FUN_0041268c at 0041268c
 * int __register FUN_0041268c(int * param_1, int param_2)
 * Address ranges: 0041268c-004126c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0041268c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004123e0((int)param_1,param_2);
  iVar2 = 0;
  if (-1 < iVar1) {
    *(undefined4 *)(param_1[1] + iVar1 * 4) = 0;
    FUN_00412224(param_1,iVar1);
    (**(code **)(*param_1 + 4))(param_1,param_2,1);
    iVar2 = param_2;
  }
  return iVar2;
}

