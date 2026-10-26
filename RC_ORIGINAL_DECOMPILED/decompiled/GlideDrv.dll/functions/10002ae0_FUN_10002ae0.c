/*
 * FUN_10002ae0 at 10002ae0
 * int __cdecl FUN_10002ae0(int param_1)
 * Address ranges: 10002ae0-10002af4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10002ae0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1 + -1;
}

