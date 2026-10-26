/*
 * FUN_004434c4 at 004434c4
 * undefined __register FUN_004434c4(int param_1)
 * Address ranges: 004434c4-004434ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004434c4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00442fec(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00442ffc(param_1,iVar3);
      (**(code **)(*piVar2 + 0x3c))();
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

