/*
 * FUN_005196fc at 005196fc
 * undefined __register FUN_005196fc(int * param_1, WPARAM param_2, char param_3)
 * Address ranges: 005196fc-0051972a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005196fc(int *param_1,WPARAM param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_005197fc(param_1,param_2);
  if (param_3 != (char)uVar1) {
    iVar2 = FUN_005199dc(param_1,param_2);
    *(char *)(iVar2 + 8) = param_3;
    FUN_0051972c(param_1,param_2);
  }
  return;
}

