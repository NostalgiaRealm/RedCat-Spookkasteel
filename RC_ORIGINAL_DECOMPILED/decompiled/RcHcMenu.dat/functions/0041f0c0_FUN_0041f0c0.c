/*
 * FUN_0041f0c0 at 0041f0c0
 * bool __register FUN_0041f0c0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0041f0c0-0041f0d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0041f0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0041edc8(param_1,param_2,param_3);
  iVar2 = FUN_0041ed24((int)piVar1,(short)param_2);
  return iVar2 != 0;
}

