/*
 * FUN_10006e0b at 10006e0b
 * undefined1 * __cdecl FUN_10006e0b(undefined8 * param_1, undefined1 * param_2, int param_3, int param_4)
 * Address ranges: 10006e0b-10006e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __cdecl FUN_10006e0b(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_1000969d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_10009626(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_10006e6c(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}

