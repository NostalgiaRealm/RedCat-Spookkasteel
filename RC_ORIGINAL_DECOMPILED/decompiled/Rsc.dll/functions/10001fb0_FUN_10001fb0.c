/*
 * FUN_10001fb0 at 10001fb0
 * uint __cdecl FUN_10001fb0(char * param_1, uint param_2, uint param_3, undefined * * param_4)
 * Address ranges: 10001fb0-10001fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_10001fb0(char *param_1,uint param_2,uint param_3,undefined **param_4)

{
  uint uVar1;
  
  FUN_10002e60(param_4);
  uVar1 = FUN_10001ff0(param_1,param_2,param_3,(int *)param_4);
  FUN_10002ed0(param_4);
  return uVar1;
}

