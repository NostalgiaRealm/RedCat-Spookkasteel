/*
 * FUN_0043450c at 0043450c
 * int __register FUN_0043450c(double * param_1, int param_2)
 * Address ranges: 0043450c-00434544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043450c(double *param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    iVar3 = 1;
    pdVar1 = param_1;
    do {
      pdVar1 = pdVar1 + 1;
      if (*pdVar1 < param_1[iVar2]) {
        iVar2 = iVar3;
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar2;
}

