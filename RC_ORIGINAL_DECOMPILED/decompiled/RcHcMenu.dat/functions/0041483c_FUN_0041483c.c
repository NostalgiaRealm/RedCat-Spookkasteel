/*
 * FUN_0041483c at 0041483c
 * undefined __register FUN_0041483c(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 0041483c-00414872
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041483c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3);
    if (param_3 != iVar1) {
      piVar2 = FUN_0040cfa8((int *)&DAT_00410444,'\x01',(undefined4 *)PTR_PTR_00572348);
      FUN_0040382c(piVar2);
    }
  }
  return;
}

