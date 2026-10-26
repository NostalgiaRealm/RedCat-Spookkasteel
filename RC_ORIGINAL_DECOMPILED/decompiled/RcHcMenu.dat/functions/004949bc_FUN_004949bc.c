/*
 * FUN_004949bc at 004949bc
 * undefined4 __register FUN_004949bc(int * param_1)
 * Address ranges: 004949bc-004949e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004949bc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar2 = &local_c;
  local_8 = param_1;
  iVar1 = FUN_00494954(param_1);
  FUN_00494b0c(local_8,iVar1,&local_10,puVar2);
  return local_c;
}

