/*
 * FUN_1002cfb8 at 1002cfb8
 * undefined FUN_1002cfb8(void)
 * Address ranges: 1002cfb8-1002cfdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002cfb8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_1002cf87(param_2);
    iVar2 = FUN_100321cd(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}

