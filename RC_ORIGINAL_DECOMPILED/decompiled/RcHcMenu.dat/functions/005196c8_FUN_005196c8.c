/*
 * FUN_005196c8 at 005196c8
 * undefined __register FUN_005196c8(int * param_1, WPARAM param_2, char param_3)
 * Address ranges: 005196c8-005196fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005196c8(int *param_1,WPARAM param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = FUN_005197a4(param_1,param_2);
  if ((bool)param_3 != bVar1) {
    iVar2 = FUN_005199dc(param_1,param_2);
    FUN_005191b4(iVar2,param_3);
    FUN_0051972c(param_1,param_2);
  }
  return;
}

