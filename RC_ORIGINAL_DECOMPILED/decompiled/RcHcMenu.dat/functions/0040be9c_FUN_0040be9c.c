/*
 * FUN_0040be9c at 0040be9c
 * undefined4 __register FUN_0040be9c(int param_1, int * param_2, char param_3)
 * Address ranges: 0040be9c-0040bed2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040be9c(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  FUN_0040bd58(param_1,param_2);
  iVar1 = FUN_00404030(param_1);
  if ((*param_2 <= iVar1) && (*(char *)(param_1 + -1 + *param_2) == param_3)) {
    *param_2 = *param_2 + 1;
    uVar2 = 1;
  }
  return uVar2;
}

