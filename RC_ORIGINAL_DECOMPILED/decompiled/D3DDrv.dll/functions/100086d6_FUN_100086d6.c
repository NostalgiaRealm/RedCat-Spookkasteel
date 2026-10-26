/*
 * FUN_100086d6 at 100086d6
 * char * __cdecl FUN_100086d6(undefined8 * param_1, char * param_2, size_t param_3)
 * Address ranges: 100086d6-1000872a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_100086d6(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000bc15((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_1000bb9e(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_1000872b(param_2,param_3,&local_14,'\0');
  return param_2;
}

