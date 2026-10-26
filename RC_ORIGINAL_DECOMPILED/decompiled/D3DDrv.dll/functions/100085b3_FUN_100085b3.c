/*
 * FUN_100085b3 at 100085b3
 * undefined1 * __cdecl FUN_100085b3(undefined8 * param_1, undefined1 * param_2, int param_3, int param_4)
 * Address ranges: 100085b3-10008613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __cdecl FUN_100085b3(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000bc15((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_1000bb9e(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10008614(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}

