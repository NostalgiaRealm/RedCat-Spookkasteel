/*
 * FUN_00475ec0 at 00475ec0
 * undefined __register FUN_00475ec0(int param_1, VARIANTARG * param_2, undefined4 param_3)
 * Address ranges: 00475ec0-00475ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475ec0(int param_1,VARIANTARG *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 local_c;
  
  local_c = param_3;
  bVar1 = FUN_004051b8(param_2);
  local_c = CONCAT22(local_c._2_2_,(short)CONCAT31(extraout_var,bVar1));
  FUN_004760d8(param_1,5,&local_c,2);
  return;
}

