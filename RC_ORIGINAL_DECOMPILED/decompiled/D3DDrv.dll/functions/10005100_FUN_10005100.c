/*
 * FUN_10005100 at 10005100
 * undefined __cdecl FUN_10005100(int param_1, int param_2)
 * Address ranges: 10005100-1000511d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005100(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  iVar1 = FUN_10005060(param_1);
  FUN_10005040(iVar1);
  return;
}

