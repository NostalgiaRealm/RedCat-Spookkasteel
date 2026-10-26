/*
 * FUN_00403b9c at 00403b9c
 * undefined __register FUN_00403b9c(int * param_1)
 * Address ranges: 00403b9c-00403bb9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403b9c(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    *(int *)*piVar2 = *(int *)piVar2[1] + piVar2[2];
    piVar2 = piVar2 + 3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

