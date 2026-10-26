/*
 * FUN_10003dcf at 10003dcf
 * uint __cdecl FUN_10003dcf(char * param_1, uint param_2, uint param_3, int * param_4)
 * Address ranges: 10003dcf-10003dfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_10003dcf(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10004488((uint)param_4);
  uVar1 = FUN_10003dfe(param_1,param_2,param_3,param_4);
  FUN_100044da((uint)param_4);
  return uVar1;
}

