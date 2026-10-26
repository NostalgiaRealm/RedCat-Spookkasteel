/*
 * FUN_00403b80 at 00403b80
 * undefined __register FUN_00403b80(int * param_1)
 * Address ranges: 00403b80-00403b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403b80(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    FUN_00406a48(*(undefined4 **)piVar2[1],(int *)*piVar2);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

