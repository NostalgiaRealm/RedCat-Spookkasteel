/*
 * FUN_00594ab0 at 00594ab0
 * undefined FUN_00594ab0(void)
 * Address ranges: 00594ab0-00594af1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00594ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_1;
  FUN_005b9be0(param_1,param_2,&param_1);
  FUN_005b9be0(uVar1,param_3,&param_2);
  iVar2 = FUN_005b9c40(uVar1,param_1,param_2,0);
  return iVar2 != 0;
}

