/*
 * FUN_0040b0b0 at 0040b0b0
 * int __register FUN_0040b0b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0040b0b0-0040b0d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0040b0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 local_c;
  int local_8;
  
  FUN_0040abf8(&local_c,param_2,param_3,(double)CONCAT44(param_5,param_4));
  return local_8 % 7 + 1;
}

