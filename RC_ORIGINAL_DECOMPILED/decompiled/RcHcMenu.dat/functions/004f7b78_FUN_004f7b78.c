/*
 * FUN_004f7b78 at 004f7b78
 * undefined4 __register FUN_004f7b78(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004f7b78-004f7b99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f7b78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00403270(param_1,param_2,param_3);
  return CONCAT31((int3)((uint)uVar1 >> 8),0xf0);
}

