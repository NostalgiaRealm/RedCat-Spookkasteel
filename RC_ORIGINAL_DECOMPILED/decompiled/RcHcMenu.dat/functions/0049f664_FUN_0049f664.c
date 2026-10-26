/*
 * FUN_0049f664 at 0049f664
 * undefined __register FUN_0049f664(int * param_1)
 * Address ranges: 0049f664-0049f68c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f664(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 5;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874((uint)param_1);
  }
  if (param_1[5] < 1) {
    FUN_00403094(param_1);
  }
  return;
}

