/*
 * FUN_10004c20 at 10004c20
 * int __cdecl FUN_10004c20(int param_1)
 * Address ranges: 10004c20-10004c41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10004c20(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_1002fce0;
  if (param_1 != -1) {
    DAT_1002fce0 = param_1;
  }
  return iVar1;
}

