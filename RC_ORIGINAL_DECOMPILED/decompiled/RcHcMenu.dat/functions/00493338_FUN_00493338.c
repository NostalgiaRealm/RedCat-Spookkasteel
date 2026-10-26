/*
 * FUN_00493338 at 00493338
 * int __register FUN_00493338(undefined4 param_1, int param_2, undefined4 param_3)
 * Address ranges: 00493338-0049335a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00493338(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00497394(param_1,param_2,param_3);
  iVar2 = FUN_0049756c(piVar1,param_2);
  return iVar2;
}

