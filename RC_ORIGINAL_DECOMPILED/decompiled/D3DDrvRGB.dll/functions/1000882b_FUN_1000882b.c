/*
 * FUN_1000882b at 1000882b
 * int __cdecl FUN_1000882b(int * param_1, byte * param_2)
 * Address ranges: 1000882b-10008866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000882b(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10009a40((uint)param_1);
  iVar1 = FUN_10009d26(param_1);
  iVar2 = FUN_10009ddd(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_10009db3(iVar1,param_1);
  FUN_10009a92((uint)param_1);
  return iVar2;
}

