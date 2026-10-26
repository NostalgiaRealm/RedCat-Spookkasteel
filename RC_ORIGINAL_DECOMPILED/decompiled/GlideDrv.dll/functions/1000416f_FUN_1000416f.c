/*
 * FUN_1000416f at 1000416f
 * int __cdecl FUN_1000416f(int * param_1, byte * param_2)
 * Address ranges: 1000416f-100041aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_1000416f(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10004488((uint)param_1);
  iVar1 = FUN_100063d3(param_1);
  iVar2 = FUN_1000648a(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_10006460(iVar1,param_1);
  FUN_100044da((uint)param_1);
  return iVar2;
}

