/*
 * FUN_00475af0 at 00475af0
 * undefined __register FUN_00475af0(int * param_1, char param_2)
 * Address ranges: 00475af0-00475b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474b58 slot -1 for TFilterExpr. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474b58 slot -1 for
   TFilterExpr. Original bytes unchanged; names and types still inferred. */

void FUN_00475af0(int *param_1,char param_2)

{
  VARIANTARG *pVVar1;
  int *piVar2;
  char extraout_DL;
  
  piVar2 = FUN_00403434(param_1,param_2);
  FUN_00406454(piVar2 + 0xd,(int)&DAT_00474ad4,1);
  while (pVVar1 = (VARIANTARG *)piVar2[0xc], pVVar1 != (VARIANTARG *)0x0) {
    piVar2[0xc] = *(int *)&pVVar1->n1;
    if ((*(char *)((int)&pVVar1->n1 + 4) == '\x03') && (*(int *)((int)&pVVar1[2].n1 + 8) != 0)) {
      FUN_00403094(*(int **)((int)&pVVar1[2].n1 + 8));
    }
    FUN_00404c88(pVVar1,"\x0e\tTExprNode0");
  }
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar2);
  }
  return;
}

