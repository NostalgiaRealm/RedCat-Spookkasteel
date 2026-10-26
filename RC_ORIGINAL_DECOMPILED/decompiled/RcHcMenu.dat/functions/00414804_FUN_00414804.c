/*
 * FUN_00414804 at 00414804
 * undefined __register FUN_00414804(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 00414804-0041483a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414804(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 4))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040cfa8((int *)&DAT_004103ec,'\x01',(undefined4 *)PTR_PTR_00572550);
      FUN_0040382c(piVar2);
    }
  }
  return;
}

