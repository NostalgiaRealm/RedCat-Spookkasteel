/*
 * FUN_10009bef at 10009bef
 * int __cdecl FUN_10009bef(int * param_1)
 * Address ranges: 10009bef-10009c1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10009bef(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10009c1d(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000e6a8(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

