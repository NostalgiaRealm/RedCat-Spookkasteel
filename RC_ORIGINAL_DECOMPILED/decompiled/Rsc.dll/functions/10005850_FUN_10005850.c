/*
 * FUN_10005850 at 10005850
 * int __cdecl FUN_10005850(undefined * * param_1)
 * Address ranges: 10005850-10005893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10005850(undefined **param_1)

{
  int iVar1;
  
  if (param_1 == (undefined **)0x0) {
    iVar1 = FUN_100059c0(0);
  }
  else {
    FUN_10002e60(param_1);
    iVar1 = FUN_100058a0((int *)param_1);
    FUN_10002ed0(param_1);
  }
  return iVar1;
}

