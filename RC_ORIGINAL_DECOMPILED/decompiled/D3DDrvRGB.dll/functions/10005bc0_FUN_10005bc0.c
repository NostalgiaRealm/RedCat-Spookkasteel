/*
 * FUN_10005bc0 at 10005bc0
 * undefined __cdecl FUN_10005bc0(int param_1, int param_2)
 * Address ranges: 10005bc0-10005bdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005bc0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  iVar1 = FUN_10005b20(param_1);
  FUN_10005b00(iVar1);
  return;
}

