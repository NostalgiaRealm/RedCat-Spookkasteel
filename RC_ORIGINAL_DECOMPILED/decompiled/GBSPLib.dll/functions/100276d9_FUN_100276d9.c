/*
 * FUN_100276d9 at 100276d9
 * undefined FUN_100276d9(void)
 * Address ranges: 100276d9-10027709
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100276d9(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1002a8e5();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1002a775(param_1,param_2,param_3,iVar1);
  FUN_10029c20(iVar1);
  return uVar2;
}

