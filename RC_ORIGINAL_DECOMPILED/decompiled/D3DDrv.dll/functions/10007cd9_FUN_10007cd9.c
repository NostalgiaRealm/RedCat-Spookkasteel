/*
 * FUN_10007cd9 at 10007cd9
 * int __cdecl FUN_10007cd9(int * param_1, byte * param_2)
 * Address ranges: 10007cd9-10007d14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10007cd9(int *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_10008997((uint)param_1);
  iVar1 = FUN_10008c7d(param_1);
  iVar2 = FUN_10008d34(param_1,param_2,(undefined4 *)&stack0x0000000c);
  FUN_10008d0a(iVar1,param_1);
  FUN_100089e9((uint)param_1);
  return iVar2;
}

