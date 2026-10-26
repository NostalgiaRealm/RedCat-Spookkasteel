/*
 * FUN_0040461a at 0040461a
 * int __cdecl FUN_0040461a(int * param_1)
 * Address ranges: 0040461a-00404654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_0040461a(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = flsall(0);
    return iVar1;
  }
  iVar1 = FUN_00404655(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_00404ede(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

