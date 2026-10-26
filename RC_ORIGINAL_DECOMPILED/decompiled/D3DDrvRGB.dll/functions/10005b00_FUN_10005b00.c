/*
 * FUN_10005b00 at 10005b00
 * int __cdecl FUN_10005b00(int param_1)
 * Address ranges: 10005b00-10005b14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10005b00(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}

