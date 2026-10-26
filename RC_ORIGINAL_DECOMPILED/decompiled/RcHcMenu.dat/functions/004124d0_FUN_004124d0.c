/*
 * FUN_004124d0 at 004124d0
 * undefined __register FUN_004124d0(int * param_1, int param_2, int param_3)
 * Address ranges: 004124d0-0041251b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004124d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  iVar1 = *(int *)(param_1[1] + param_2 * 4);
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,iVar1,2);
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}

