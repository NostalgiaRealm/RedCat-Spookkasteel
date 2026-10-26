/*
 * FUN_10004637 at 10004637
 * int __cdecl FUN_10004637(int * param_1)
 * Address ranges: 10004637-10004664
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10004637(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004665(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100080db(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

