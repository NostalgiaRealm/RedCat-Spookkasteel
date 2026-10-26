/*
 * FUN_00403288 at 00403288
 * undefined4 __register FUN_00403288(int * param_1, undefined4 param_2)
 * Address ranges: 00403288-0040329d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00403288(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 in_ZF;
  
  FUN_00403240(*param_1);
  if ((bool)in_ZF) {
    uVar1 = FUN_00402b70();
    return uVar1;
  }
  return param_2;
}

