/*
 * FUN_10008b46 at 10008b46
 * int __cdecl FUN_10008b46(int * param_1)
 * Address ranges: 10008b46-10008b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10008b46(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10008b74(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000c6b8(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

