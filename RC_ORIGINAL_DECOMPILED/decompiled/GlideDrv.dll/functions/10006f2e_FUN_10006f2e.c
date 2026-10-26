/*
 * FUN_10006f2e at 10006f2e
 * char * __cdecl FUN_10006f2e(undefined8 * param_1, char * param_2, size_t param_3)
 * Address ranges: 10006f2e-10006f82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __cdecl FUN_10006f2e(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_1000969d((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_10009626(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_10006f83(param_2,param_3,&local_14,'\0');
  return param_2;
}

