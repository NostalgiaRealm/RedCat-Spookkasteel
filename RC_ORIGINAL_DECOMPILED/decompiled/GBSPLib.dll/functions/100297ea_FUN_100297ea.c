/*
 * FUN_100297ea at 100297ea
 * undefined FUN_100297ea(void)
 * Address ranges: 100297ea-1002984a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100297ea(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_2c [24];
  int local_14 [4];
  
  FUN_10030cac(*param_1,local_14,local_2c);
  FUN_10030c35((uint)(0 < param_3) + param_2 + (uint)(local_14[0] == 0x2d),param_3 + 1,local_14);
  FUN_1002984b(param_2,param_3,param_4,local_14,0);
  return param_2;
}

