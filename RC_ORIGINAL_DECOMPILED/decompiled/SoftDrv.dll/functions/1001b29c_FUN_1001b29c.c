/*
 * FUN_1001b29c at 1001b29c
 * undefined FUN_1001b29c(void)
 * Address ranges: 1001b29c-1001b2fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001b29c(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_2c [24];
  int local_14 [4];
  
  FUN_1001d5bd(*param_1,local_14,local_2c);
  FUN_1001d546((uint)(0 < param_3) + param_2 + (uint)(local_14[0] == 0x2d),param_3 + 1,local_14);
  FUN_1001b2fd(param_2,param_3,param_4,local_14,0);
  return param_2;
}

