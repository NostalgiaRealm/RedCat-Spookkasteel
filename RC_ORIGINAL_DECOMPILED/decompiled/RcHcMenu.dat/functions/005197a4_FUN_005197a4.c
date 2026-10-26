/*
 * FUN_005197a4 at 005197a4
 * bool __register FUN_005197a4(int * param_1, WPARAM param_2)
 * Address ranges: 005197a4-005197cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005197a4(int *param_1,WPARAM param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_00519a90(param_1,param_2);
  if (bVar1) {
    iVar2 = FUN_005199dc(param_1,param_2);
    bVar1 = FUN_005191c4(iVar2);
    return bVar1;
  }
  return false;
}

