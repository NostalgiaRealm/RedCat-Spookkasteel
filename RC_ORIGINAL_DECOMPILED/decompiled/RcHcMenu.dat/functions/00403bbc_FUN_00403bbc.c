/*
 * FUN_00403bbc at 00403bbc
 * undefined __register FUN_00403bbc(int * param_1)
 * Address ranges: 00403bbc-00403bd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403bbc(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1 + 1;
  do {
    FUN_004044b0((BSTR *)*piVar2,(OLECHAR *)piVar2[1]);
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

