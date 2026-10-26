/*
 * FUN_00401550 at 00401550
 * undefined __register FUN_00401550(int * param_1)
 * Address ranges: 00401550-00401567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401550(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  iVar2 = *param_1;
  *piVar1 = iVar2;
  *(int **)(iVar2 + 4) = piVar1;
  *param_1 = (int)DAT_00573454;
  DAT_00573454 = param_1;
  return;
}

